//returntype functionName( arguments ){
void blinkLED(){

  //function body
  digitalWrite(ledPin, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(ledPin, LOW);    // sets the LED off
  delay(1000);                  // waits for a second

  //return returntype;
  //implied by closing curly bracked
}

