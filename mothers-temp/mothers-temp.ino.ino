// initializes or defines the output pin of the LM35 temperature sensor
int outputpin= A0;
//this sets the ground pin to LOW and the input voltage pin to high
void setup() {
Serial.begin(9600); 
}

void loop()       //main loop

{
int analogValue = analogRead(outputpin);
float millivolts = (analogValue/1024.0) * 3300; //3300 is the voltage provided by NodeMCU
float celsius = millivolts/10;
Serial.print("in DegreeC=   ");
Serial.println(celsius);

//---------- Here is the calculation for Fahrenheit ----------//

float fahrenheit = ((celsius * 9)/5 + 32);
Serial.print(" in Farenheit=   ");
Serial.println(fahrenheit);
delay(1000);
}
