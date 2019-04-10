
int lectura=A5;
int senal=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lectura,INPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  senal=analogRead(lectura);
  Serial.println(senal);
  if(senal >= 600)
  {
    digitalWrite(11,HIGH);
    delay(30);
  }
  if(senal <= 599)
  {
    digitalWrite(11,LOW);
  }
delay (50);
Serial.println(senal);
}
