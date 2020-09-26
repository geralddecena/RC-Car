
#define enA 10
#define enB 9
#define in1 4
#define in2 5
#define in3 6
#define in4 7

char data = 0;

const int trigPin = 3;
const int echoPin = 2;

// defines variables
long duration;
int distance;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

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

  //ultrasonic sensor code below

    // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("");
}
