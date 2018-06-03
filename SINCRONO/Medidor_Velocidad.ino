int receptor1 = 0;
int receptor2 = 8;
unsigned long t=0;
unsigned long flag=0;
float distancia=42; //mm

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
if(analogRead(receptor1)<20){
  t=millis()-flag;
}
if(analogRead(receptor2)<20){
  Serial.print("V: "); Serial.print(distancia*1000/t); Serial.println(" mm/s");
  flag=millis();
}
  // put your main code here, to run repeatedly:

}
