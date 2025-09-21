
const int TouchPin = 2;                                     // Arduino - 2nd PIN --> Touch Sensor - OUT Pin

int PreviousTouchState,TouchState  = 0;                     // Touch state declarated + initializated to 0

int counter = 0;                                            // Number of touches setted

void setup() {
  Serial.begin(9600);                                       // For Serial Screen
  pinMode(TouchPin, INPUT);                                 // Touch Sensor's OUT --> Arduino's IN
}

void loop() {
  // Sensörden gelen değeri oku
  TouchState = digitalRead(TouchPin);                       // Read the digital data 

  if (PreviousTouchState == LOW & TouchState == HIGH) {     // The touch is detected
    // Dokunma algılandı

    counter++;                                              // Count number of touch
    Serial.print("Total : ");
    Serial.println(counter);   
  } 
  
  PreviousTouchState = TouchState;                          // Update for new loop

}
