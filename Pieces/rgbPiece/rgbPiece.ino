//Original code by jamesotron https://gist.github.com/jamesotron/766994

//Regina Cantu ITP Thesis 2018 - Color timepiece

const int greenPin = 1;
const int bluePin = 0;
//const int redPin = 2;

void setup() {
  // Start off with the LED off.
  setColourRgb(0,0);
}

void loop() {
  unsigned int rgbColour[2];

  // Start off with blue.
  rgbColour[0] = 255;
  rgbColour[1] = 0;
 // rgbColour[2] = 0;  

  // Choose the colours to increment and decrement.
  for (int decColour = 0; decColour < 2; decColour += 1) {
    int incColour = decColour == 1 ? 0 : decColour + 1;

    // cross-fade the two colours.
    for(int i = 0; i < 255; i += 1) {
      rgbColour[decColour] -= 1;
      rgbColour[incColour] += 1;
      
      setColourRgb(255-rgbColour[0], 255-rgbColour[1]);
      delay(200);
    }
  }
}

void setColourRgb(unsigned int blue, unsigned int green)  {
  analogWrite(bluePin, blue);
  analogWrite(greenPin, green);
  //analogWrite(redPin, red);
 }
