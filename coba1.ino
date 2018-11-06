int nomor_pin = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(nomor_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(nomor_pin, HIGH);
delay (1000);
digitalWrite(nomor_pin, HIGH);
delay (1000);
}
