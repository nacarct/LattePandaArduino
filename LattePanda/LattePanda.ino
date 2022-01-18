int CardPin = 13;

void setup() {

  Serial.begin(9600);
  pinMode(CardPin, OUTPUT);

}

void loop() {

  if (Serial.available())
  {
    char ReadData = Serial.read();

    if (ReadData == '1')
    {
      digitalWrite(CardPin, HIGH);
    }
    else if (ReadData == '0')
    {
      digitalWrite(CardPin, LOW);
    }
  }

}
