// Traffic light controller

// Declaration of led using macro definitions:

#define red_led 6
#define yellow_led 7
#define green_led 8

void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //delay values in MS.
  int red_delay=3000;
  int yellow_delay=2000;
  int green_delay=4000;
  
  digitalWrite(red_led,HIGH);
  delay(red_delay);
  digitalWrite(yellow_led,HIGH);
  delay(yellow_delay);
  digitalWrite(green_led,HIGH);
  delay(green_delay);

  for(int i =0; i<3 ;i+=1){
    digitalWrite(green_led,LOW);
    delay(500);
    digitalWrite(green_led,HIGH);
    delay(500);
  }
  digitalWrite(yellow_led,HIGH);
  delay(1000);
  digitalWrite(yellow_led,LOW);
  digitalWrite(green_led,LOW);
  delay(100);
}
