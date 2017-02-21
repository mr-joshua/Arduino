/*
 * ERV Test
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
    delay(10000);
    Serial.println("Setting up ERV command to run 50% of the time");
}

float runtime = 0;

// the loop function runs over and over again forever
void loop() {
  Serial.println("ERV ON:  30 minutes");
  //actuate relay to ON
  digitalWrite(LED_BUILTIN, HIGH);
  int on = 1;
  while( on <= 30)  {
    Serial.println(on);
    delay(60000);
    on++;
    runtime++;
  }   
  
  //Update cumulative
  Serial.print("Cumulative Runtime: " );
  Serial.print(runtime/60,1);
  Serial.println(" hours");

  Serial.println("ERV OFF:  30 minutes");
  //actuate relay to OFF
  digitalWrite(LED_BUILTIN, LOW);   
  int off=1;
  while(off <=30)  {
    Serial.println(off);
    delay(60000);
    off++;    
  }
}
