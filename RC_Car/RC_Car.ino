
#define enA 10
#define enB 9
#define in1 4
#define in2 5
#define in3 6
#define in4 7

char data = 0;
void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  

  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(enA,255);
  analogWrite(enB, 255);

  // Read data
  data = Serial.read();
  if (data > 0) {
      Serial.print(data);
      Serial.println("");
     if (data  == 'u') {
      //execute up function
      Serial.println("DID THIS WORK");
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
    
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
  }
  }
 
 
}
