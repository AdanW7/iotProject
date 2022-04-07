/*
 * Project: Buzzer Sample 
 * Description:
 * Author: Tyler Stoll 
 * Date:
 */




int buzzer = D5;     
int prevButton = LOW;  

void setup() {
    pinMode(buzzer, OUTPUT);  
    Serial.begin(9600);               
}

void loop() {

    digitalWrite(buzzer, LOW);
    delay(1000);
    digitalWrite(buzzer, HIGH);
    delay(1000);
    
}



