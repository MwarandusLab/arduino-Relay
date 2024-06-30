//Initiaizing Variable
int Relay = 3; //We have named a variable called Relay and 3 is the Digital pin which is connected to the micrcontroller

void setup() {
  pinMode(Relay, OUTPUT); // Here we are telling the microcontroller that D3 should be set as output pin

}

void loop() {
  // put your main code here, to run repeatedly:

  //This Code will Turn OFF the Relay
  digitalWrite(Relay, LOW); //Here we are instructing the microcontroller to Turn D3 LOW giving an output voltage of 0V

}
