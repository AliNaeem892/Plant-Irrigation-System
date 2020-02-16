int sensorPin = A1; 
int sensorValue = 0;  
int led = 13;
boolean flag = false; 

void setup() {
 Serial.begin(9600);
 pinMode(sensorPin, INPUT);
 pinMode(led, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("sensorValue");
 if ( ( sensorValue>=500) && ( flag == false) ) 
 {
 digitalWrite(led, HIGH); 
 flag= true;
 delay(1000);
 }
 if ( ( sensorValue<=300) && ( flag == true) )
 {
 digitalWrite(led, LOW);
 flag= false;
 delay (1000); 
 }
 
 delay(1000); 
}   
 
