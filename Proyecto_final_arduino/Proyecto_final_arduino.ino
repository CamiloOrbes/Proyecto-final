int receptor1 = 0;
int receptor2 = 8;
unsigned long t=0;
unsigned long flag=0;
float distancia=40; //mm
float velocidad;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if(analogRead(receptor1)<20){
  t=millis()-flag;
}
if(analogRead(receptor2)<20){
  velocidad = distancia*5800/t;
  
  if(Serial.available()>0){
    char ByteLlegando = Serial.read(); 
    if(ByteLlegando == 'k'){
      digitalWrite(13, HIGH);
      Serial.print(velocidad); // wait for a second
    }
  }
  flag=millis();
}

}
