//Pin definitions for Sensor 1
#define S0_1 5
#define S1_1 6
#define S2_1 8
#define S3_1 7
#define OUT_1 9

// Pin definitions for Sensor 2
// #define S0_2 10
// #define S1_2 11
// #define S2_2 12
// #define S3_2 13
// #define OUT_2 14
#define S0_2 A4
#define S1_2 A3
#define S2_2 A1
#define S3_2 A0
#define OUT_2 A2



//Variables for debouncing and sensitivity
int debounceDelay = 500;         
int sensitivityThreshold = 90; //Using 10 or 90 here for testing


void setup() 
{
  pinMode(S0_1, OUTPUT);
  pinMode(S1_1, OUTPUT);
  pinMode(S2_1, OUTPUT);
  pinMode(S3_1, OUTPUT);
  pinMode(OUT_1, INPUT);

  pinMode(S0_2, OUTPUT);
  pinMode(S1_2, OUTPUT);
  pinMode(S2_2, OUTPUT);
  pinMode(S3_2, OUTPUT);
  pinMode(OUT_2, INPUT);

  //Set frequency scaling to 20%
  digitalWrite(S0_1, HIGH);
  digitalWrite(S1_1, LOW);

  digitalWrite(S0_2, HIGH);
  digitalWrite(S1_2, LOW);

  Serial.begin(9600);
}

void loop() 
{
  int redFrequency_1 = readRedColor(S2_1, S3_1, OUT_1);
  if (redFrequency_1 < sensitivityThreshold) 
  {
    Serial.println("Sensor 1: Red");
  }
  else 
  {
    //Serial.println("Sensor 1: Not Red");
  }

 
  int redFrequency_2 = readRedColor(S2_2, S3_2, OUT_2);
  if (redFrequency_2 < sensitivityThreshold) 
  {
    Serial.println("Sensor 2: Red");
  } 
  else 
  {
    //Serial.println("Sensor 2: Not Red");
  }

  delay(debounceDelay);
}

//Function to read the red component from a TCS230 sensor
int readRedColor(int S2, int S3, int OUT) 
{
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);

  int redFrequency = pulseIn(OUT, LOW);
  return redFrequency;
}

