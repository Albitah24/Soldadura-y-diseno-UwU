/* Copiado del repositorio de Javier Reverte.
   20/04/2021
 *  
 */


const int LED=4;
const int BOTON=10;
int val;
void setup(){
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}
void loop(){
val=digitalRead(BOTON);
if  (val==HIGH){
digitalWrite(LED,HIGH);
}
else { digitalWrite(LED,LOW);
}
}
