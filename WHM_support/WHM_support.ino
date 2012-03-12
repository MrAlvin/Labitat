// Support system for Labitat Workhorse Mendel
// Running on an ATmega328p (Duemilanove compatible Clone)

// Turn on Heated Bed
#define BED_BUTTON_PIN         4
#define BED_HEAT_PIN           3


void setup() {
  if(BED_BUTTON_PIN > -1) {
    pinMode(BED_BUTTON_PIN,INPUT); 
    digitalWrite(BED_BUTTON_PIN,HIGH);       // activate internal pull-up
  }
}

void loop() {
  manageHeatedBed();
}


void manageHeatedBed() {
  if( (BED_HEAT_PIN > -1) && (BED_BUTTON_PIN > -1) ) {
    if( digitalRead(BED_BUTTON_PIN) ) {
      digitalWrite(BED_HEAT_PIN, HIGH);
    } else {
      digitalWrite(BED_HEAT_PIN, LOW);
    }
  }
}
