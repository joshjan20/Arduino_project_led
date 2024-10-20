void setup() {
  // put your setup code here, to run once:
  // Initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000); // Wait for one second
  
  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  delay(5000); // Wait for one second
}