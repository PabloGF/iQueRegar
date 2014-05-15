/*
iQueRegar
---------
El sistema de riego inteligente
 */

int AZUL = 5;
int VERDE = 6;
int ROJO = 4;
int AGUA = 10;
// 
void setup() {
  //
  Serial.begin(9600);
  pinMode(AGUA, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
   if (sensorValue < 350) {
    digitalWrite(ROJO, HIGH);
    digitalWrite(AZUL, LOW);
    digitalWrite(VERDE, LOW);
    }
    
   if (sensorValue >= 350 && sensorValue <= 600) {
    digitalWrite(ROJO, LOW);
    digitalWrite(AZUL, LOW);
    digitalWrite(VERDE, HIGH);
    }
    
   if (sensorValue > 601) {
    digitalWrite(ROJO, LOW);
    digitalWrite(AZUL, HIGH);
    digitalWrite(VERDE, LOW);
    }
 
  
   if (sensorValue > 750) {
    Serial.println(sensorValue);
    digitalWrite(AGUA, HIGH);
    Serial.println(sensorValue);
    delay(12000);
    digitalWrite(AGUA, LOW);        
    
    
    
    Serial.println(sensorValue);
    delay(1800000);
    }
  //
  Serial.println(sensorValue);
  delay(30000);        // Tiempo de espera para dar tiempo a la humidificación
}
