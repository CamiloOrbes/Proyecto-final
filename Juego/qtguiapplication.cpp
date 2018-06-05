#include "QtGuiApplication.h"
//#include "ui_mainwindow.h"
#include "ui_QtGuiApplication.h"
#include "apuntador.h"
#include <QDebug>
#include "dialogo.h"
#include <iostream>
#include "math.h"
#include "time.h"
#include <QBrush>
#include <QImage>


using namespace std;

QtGuiApplication::QtGuiApplication(QWidget *parent): QMainWindow(parent)
{
	ui.setupUi(this);
	scene = new QGraphicsScene(this);	
    scene->setSceneRect(0, 0, 900, 600);
    //setBackgroundBrush(QBrush(QImage(":/images/fondo5.png")));
    flag = scene->items();//lista con los items a mostrar

	ui.graphicsView->setScene(scene);

	srand(time(NULL));
    h_limit = 900;                   //Asigna el tamano de la interfaz
	v_limit = 600;

	timer = new QTimer(this);                 //crea el timer	
    timer->setInterval(500);                //Intervalo de actualizacion..
    connect(timer, SIGNAL(timeout()), this, SLOT(actualizar()));

    timer1= new QTimer(this);
    timer1->setInterval(500);
    connect(timer1,SIGNAL(timeout()),this, SLOT(rotar()));

    Menu menuP;
    menuP.setModal(true);
    menuP.exec();

    NumJugs nj;
    nj.setModal(true);
    nj.exec();

    usuario=menuP.getUsuario();
    if(usuario==1){
        deportista= new Avatar(0,20,"juan.png",200,200);//crea un objeto de la clase avatar
    }
    else if(usuario==2){
        deportista=new Avatar(5,20,"alberto.png",200,200);
    }
    cargarNivel();
    numJug = nj.getX();


}

void QtGuiApplication:: actualizar()//actualiza la posicion dependiendo del timer para la colision
{
	for (int i = 0; i<bars.size(); i++) {
		bars.at(i)->actualizar(v_limit);//actualiza en esferagraf
        bordercollision(bars.at(i));//actualiza el choque con el borde
    }
    scene->update();
}

void QtGuiApplication::bordercollision(BolasGraf *cf)//son los choques con los bordes
{
    Bolas *b = cf->getEsf();

        if((b->get_posY())<0){//choque con el borde inferior.
             b->set_vel(b->get_velX(),-1*b->get_e()*b->get_velY(), b->get_posX(),0);
        }


        for (int i = 0; i<Cuadros.size(); i++) {//para cada arbitro, en la lista de arbitros ref, se crea una colision y se borran
            if (cf->collidesWithItem(Cuadros[i])) {
                flag = scene->items();

                if (b->get_velY()>0 && (b->get_posX()>=Cuadros[i]->get_x() && b->get_posX()<= Cuadros[i]->get_x()+Cuadros[i]->get_tam())){

                    b->set_vel(b->get_velX(),-1*b->get_velY(),b->get_posX(),b->get_posY());
                    //Cuadros[i]->cambio_color(colorset);
                    //score->increase();
                }
                else if (b->get_velY()<0 && (b->get_posX()>=Cuadros[i]->get_x() && b->get_posX()<= Cuadros[i]->get_x()+Cuadros[i]->get_tam())){

                    b->set_vel(b->get_velX(),-1*b->get_velY(),b->get_posX(),b->get_posY());
                    //Cuadros[i]->cambio_color(colorset);
                    //score->increase();
                }
                else if (b->get_velX()>0){

                    b->set_vel(-1*b->get_velX(),b->get_velY(),b->get_posX(),b->get_posY());
                    //Cuadros[i]->cambio_color(colorset);
                    //    score->increase();
                }
                else if (b->get_velX()<0){

                    b->set_vel(-1*b->get_velX(),b->get_velY(),b->get_posX(),b->get_posY());
                    //Cuadros[i]->cambio_color(colorset);
                    //    score->increase();
                }


                //b->set_vel(-1 * b->get_e()*b->get_velX(), b->get_velY(), b->get_posX(), b->get_posY());//se asigna una nueva velocidad a cuerpograf

                if (colorset==Cuadros[i]->get_color()){
                    scene->removeItem(Cuadros[i]);//se borra de la escena
                    Cuadros.removeAt(i);//se borra de la lista
                    enemigos--;//el entero de enemigos disminuye

                }

                if (enemigos <= 0) {//cuando llegue a 0 gana un nivel
                    QImage image(":/images/victorian1.jpg");
                    item = new QGraphicsPixmapItem(QPixmap::fromImage(image));//fromImage-> static member function, recibe Qimage
                    scene->addItem(item);
                }
            }
    }

/*
    for (int i = 0; i<Cuadros.size(); i++) {//para cada arbitro, en la lista de arbitros ref, se crea una colision y se borran
        if (cf->collidesWithItem(Cuadros[i])) {
			flag = scene->items();

            b->set_vel(-1 * b->get_e()*b->get_velX(), b->get_velY(), b->get_posX(), b->get_posY());//se asigna una nueva velocidad a cuerpograf
			
            scene->removeItem(Cuadros[i]);//se borra de la escena
            Cuadros.removeAt(i);//se borra de la lista
            enemigos--;//el entero de enemigos disminuye
            if (enemigos == 0) {//cuando llegue a 0 gana un nivel
                QImage image(":/images/victorian1.jpg");
                item = new QGraphicsPixmapItem(QPixmap::fromImage(image));//fromImage-> static member function, recibe Qimage
				scene->addItem(item);
			}
		}

    }*/
    for (int i=0;i<obs.size();i++){
        if(cf->collidesWithItem(obs[i])){
            flag = scene->items();

            if (b->get_velY()>0 && (b->get_posX()>=obs[i]->getX() && b->get_posX()<= obs[i]->getX()+obs[i]->getX1())){
                b->set_vel(b->get_velX(),
                                -1*b->get_velY(),b->get_posX(),b->get_posY());
                //score->increase();
            }
            else if (b->get_velY()<0 && (b->get_posX()>=obs[i]->getX() && b->get_posX()<= obs[i]->getX()+obs[i]->getX2())){
                b->set_vel(b->get_velX(),
                                -1*b->get_velY(),b->get_posX(),b->get_posY());
                //score->increase();
            }
            else if (b->get_velX()>0){
            b->set_vel(-1*b->get_velX(),
                            b->get_velY(),b->get_posX(),b->get_posY());
            //    score->increase();
            }
            else if (b->get_velX()<0){
            b->set_vel(-1*b->get_velX(),
                            b->get_velY(),b->get_posX(),b->get_posY());
            //    score->increase();
            }

        }
    }
    if (QDateTime::currentDateTime().toMSecsSinceEpoch() - disparo.toMSecsSinceEpoch() > 5000) {//tiempo que hay desde el disparo hasta esete justo momento
        if (perdio && vidas > 0) {
			cargarNivel();
		}
        if (tiros == 0 && enemigos > 0) {//si el numero de tiros llego a cero y aun hay enemigos
            vidas--;//se reduce una vida
            QImage image(":/images/arbitro2.png");//se muestra el arbitro con una sancion
			item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
			scene->addItem(item);
            disparo = QDateTime::currentDateTime();//Asigna el momento justo en que se efectuo el disparo, cuurentdatetime, hora actual
			perdio = true;
		}
        if (enemigos <= 0) { //Condicion para avanzar de nivel

			nivel++;
            vidas++;
			cargarNivel();
		}
    }
}

int QtGuiApplication::getNivel()
{
    return nivel;
}

int QtGuiApplication::getNumJug() const
{
    return numJug;
}

void QtGuiApplication::setNumJug(int value)
{
    numJug = value;
}

void QtGuiApplication::on_actionReiniciar_triggered()//cuando se pulsa el boton
{
    nivel = 0; //Saltar directo al nivel3
	vidas = 3;
    cargarNivel();
}

void QtGuiApplication::on_actionGuardar_Partida()
{
    ofstream ArchGuar;
    ArchGuar.open("Nivel.txt");
    ArchGuar.close();
    ArchGuar.open("Nivel.txt");
    ArchGuar<<getNivel();

    ArchGuar.close();
    //QApplication::exit();
}

void QtGuiApplication::on_actionCargar_Partida()
{
      ifstream ArchC;
      ArchC.open("Nivel.txt");
      char a=ArchC.get();
      nivel=a;
      ArchC.close();
      cargarNivel();
}

void QtGuiApplication::rotar()
{
    obsmov->rotar(1);
}

void QtGuiApplication::cargarNivel()
{
    Cuadros.clear();
	bars.clear();
    obs.clear();

	scene->clear();
	perdio = false;
	QGraphicsTextItem * io = new QGraphicsTextItem;
	QFont font;
	font.setPixelSize(30);
	font.setBold(false);
    font.setFamily("Algerian");
	io->setFont(font);
    io->setPos(10, 5);


    if (nivel == 0) {
        tiros = 6;
        QPixmap pix(":/images/fondo3.jpg");
        scene->addPixmap(pix);

        canon = new Canon();
        canon->setPos(-20,530);
        scene->addItem(canon);

        Cuadrados* a = new Cuadrados(250, 230,70,1);
        Cuadros.append(a);
        scene->addItem(a);
        Cuadrados* b = new Cuadrados(775, 120, 70,2);
        Cuadros.append(b);
        scene->addItem(b);
        Cuadrados* c = new Cuadrados(750, 450, 70, 3);
        Cuadros.append(c);
        scene->addItem(c);

        obsmov= new ObsMovil(500,300);
        scene->addItem(obsmov);
        timer1->start(50);

}

    else if (nivel == 2) {

        QPixmap pix(":/images/Desierto.jpg");
        pix.scaledToWidth(900);
		scene->addPixmap(pix);

        tiros = 6;

        Cuadrados* a = new Cuadrados(700, 100, 70,1);
        Cuadros.append(a);
		scene->addItem(a);
        Cuadrados* b = new Cuadrados(450, 270, 70,1);
        Cuadros.append(b);
        scene->addItem(b);
        Cuadrados* c = new Cuadrados(700, 380, 70,3);
        Cuadros.append(c);
        scene->addItem(c);


        Obstaculo* d=new Obstaculo(700,450,"ladrillo.jpg");
        obs.append(d);
        scene->addItem(d);
        Obstaculo* e=new Obstaculo(450,450,"ladrillo.jpg");
        obs.append(e);
        scene->addItem(e);
        Obstaculo* f=new Obstaculo(450,340,"ladrillo.jpg");
        obs.append(f);
        scene->addItem(f);
        Obstaculo* g=new Obstaculo(450,0,"ladrillo.jpg");
        obs.append(g);
        scene->addItem(g);


	}
    else if (nivel == 1) {
        QPixmap pix(":/images/fondo3.jpg");
        scene->addPixmap(pix);

        tiros = 5;

        Cuadrados* a = new Cuadrados(850, 530, 70,1);
        Cuadros.append(a);
		scene->addItem(a);
        Cuadrados* b = new Cuadrados(530, 530, 70,2);
        Cuadros.append(b);
		scene->addItem(b);

        Obstaculo* d=new Obstaculo(700,450,"ladrillo.jpg");
        obs.append(d);
        scene->addItem(d);
        Obstaculo* e=new Obstaculo(450,450,"ladrillo.jpg");
        obs.append(e);
        scene->addItem(e);
        Obstaculo* f=new Obstaculo(450,340,"ladrillo.jpg");
        obs.append(f);
        scene->addItem(f);



	}
    else if (nivel == 3) {

            QPixmap pix(":/images/playa.jpg");
            scene->addPixmap(pix);
            tiros = 5;

            Cuadrados* a = new Cuadrados(450, 50, 70,2);
            Cuadros.append(a);
            scene->addItem(a);
            Cuadrados* b = new Cuadrados(450, 450, 70,2);
            Cuadros.append(b);
            scene->addItem(b);
            Cuadrados* c = new Cuadrados(700, 170, 70,3);
            Cuadros.append(c);
            scene->addItem(c);


            Obstaculo* e=new Obstaculo(550,450,"ladrillo.jpg");
            obs.append(e);
            scene->addItem(e);
            Obstaculo* f=new Obstaculo(550,300,"ladrillo.jpg");
            obs.append(f);
            scene->addItem(f);
            Obstaculo* g=new Obstaculo(550,0,"ladrillo.jpg");
            obs.append(g);
            scene->addItem(g);
            Obstaculo* k=new Obstaculo(550,30,"ladrillo.jpg");
            obs.append(k);
            scene->addItem(k);
            Obstaculo* l=new Obstaculo(350,450,"ladrillo.jpg");
            obs.append(l);
            scene->addItem(l);
            Obstaculo* o=new Obstaculo(350,340,"ladrillo.jpg");
            obs.append(o);
            scene->addItem(o);
            Obstaculo* gp=new Obstaculo(350,0,"ladrillo.jpg");
            obs.append(gp);
            scene->addItem(gp);

        }

	else {
        QPixmap pix(":/images/podio.jpg");
		scene->addPixmap(pix);
        scene->removeItem(io);
        if(usuario==1){
            deportista1=new Avatar(300,100,"juan.png",400,400);
            }
        else if(usuario==2){
            deportista1=new Avatar(300,100,"alberto.png",400,400);

        }
        scene->addItem(deportista1);

	}
    enemigos = Cuadros.size();
    io->setPlainText("Nivel: "+ QString::number(nivel+1) +" Balones: " + QString::number(tiros)+" Vidas: "+ QString::number(vidas));
    scene->addItem(io);

    ui.graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


}

void QtGuiApplication::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_R:
{
        nivel = 0;
        vidas = 3;
        cargarNivel();
        break;
}
    case Qt::Key_Escape:
        QApplication::exit();
        exit(0);
        break;

    case Qt::Key_W:
        colorset=2;
        //mira1->setY(-5);
        //mira1->border(0,0,450,295);
        break;

    case Qt::Key_E:
        colorset = 3;
        //mira1->setY(5);
        //mira1->border(0,0,450,295);
        break;
    case Qt::Key_Q:
        colorset = 1;
        //mira1->setX(-5);
        //mira1->border(0,0,450,295);
        break;
    }
}

void QtGuiApplication::on_actionExit_triggered()//cuando se pulsa el boton
{
    Menu menuP;
    menuP.setModal(true);
    menuP.exec();
}

void QtGuiApplication::mousePressEvent(QMouseEvent * ev)
{
    //creacion de cada pelota.
    if(!(tiros==0)){
    bars.push_back(new BolasGraf(ev->x()*0.2,(600-ev->y())*0.2,colorset));
    scene->addItem(bars.back());
    bars.back()->setPos(0,600);
    if (tiros == 0) { return; }
    disparo = QDateTime::currentDateTime();
    tiros--;
    timer->start(18);
    }
}
