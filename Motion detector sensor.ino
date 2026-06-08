#define PIR_PIN 20
void setup(){
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
}
void loop(){
  bool motion= digitalRead(PIR_PIN);

  if (motion == HIGH){
    Serial.println("Motion Deteched");
  }else{
    Serial.println("No motion");
  }
  delay(200);
}