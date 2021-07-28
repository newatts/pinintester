#include <Arduino.h>
int but1 = 1;
int but2 = 2; // 30%
int but3 = 3;        
int but4 = 4; //45%
int but5 = 5;
int but6 = 6;
int but7 = 7; //60%
int but8 = 8; //85%
int but9 = 9;  //100%
int butA = 10;
int butB = 11;
int butC = 12; //15%
int analogPinIn = A1;
int analogPinIn = A2;
int analogPinIn = A3;
int analogPinIn = A4;
int analogPinIn = A5;


void setup() {
  pinMode(A1, INPUT); ///p
  pinMode(A2, INPUT); ///p
  pinMode(A3, INPUT); ///p
  pinMode(A4, INPUT); ///p
  pinMode(A5, INPUT); ///p
  pinMode(but1, INPUT_PULLUP); //LOW is on.
  pinMode(but2, INPUT_PULLUP); 
  pinMode(but3, INPUT_PULLUP);
  pinMode(but4, INPUT_PULLUP);
  pinMode(but5, INPUT_PULLUP);
  pinMode(but6, INPUT_PULLUP);
  pinMode(but7, INPUT_PULLUP);
  pinMode(but8, INPUT_PULLUP);
  pinMode(but9, INPUT_PULLUP);
  pinMode(butA, INPUT_PULLUP);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
if(but1==HIGH){
  Serial.println("button high");
}
if (but1 == HIGH)
{
  Serial.println("button high");
}
if (but2 == HIGH)
{
  Serial.println("button high");
}
if (but3 == HIGH)
{
  Serial.println("button high");
}
if (but4 == HIGH)
{
  Serial.println("button high");
}
if(but5==HIGH){
  Serial.println("button high");
}
if (but6 == HIGH)
{
  Serial.println("button high");
}
if (but7 == HIGH)
{
  Serial.println("button high");
}
if (but8 == HIGH)
{
  Serial.println("button high");
}
if (but9 == HIGH)
{
  Serial.println("button high");
}

}