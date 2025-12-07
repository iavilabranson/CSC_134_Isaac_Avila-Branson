//@author: Isaac Avila-Branson
//@date: 12/01/2025
//@purpose: Design a basic security system using a pinpad to validate an entered code«pin

#include <Keypad.h>

//led pins
int ledRed = 2;
int ledGreen = 4;

int failDelay = 3000;
int successDelay = 3000;

const byte ROWS = 4;
const byte COLS = 4;

//keypad wiring
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//wiring
byte rowPins[ROWS] = {13, 12, 11, 10};
byte colPins[COLS] = {9, 8, 7, 6};

//create keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//store up to 5 entered characters
char keyPadEntries[6];  // include 6th char for null terminator
int keyPressCount = 0;

//passcode
String correctPasscode = "1234A";

void setup() {
  Serial.begin(9600);

  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);

  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
}

void loop() {

  char key = keypad.getKey();

  if (key) {
    Serial.print("Key pressed: ");
    Serial.println(key);

    //if user enters # validate passcode
    if (key == '#') {
      keyPadEntries[keyPressCount] = '\0';  // terminate string

      Serial.print("Entered passcode: ");
      Serial.println(keyPadEntries);

      //compare to correct code
      if (String(keyPadEntries) == correctPasscode) {
        Serial.println("PASSCODE CORRECT");
        digitalWrite(ledGreen, HIGH);
        delay(successDelay);
        digitalWrite(ledGreen, LOW);
      } else {
        Serial.println("PASSCODE INCORRECT");
        digitalWrite(ledRed, HIGH);
        delay(failDelay);
        digitalWrite(ledRed, LOW);
      }

      keyPressCount = 0;  //reset for next attempt
      return;
    }

    //store keypresses that aren't #
    if (keyPressCount < 5) {
      keyPadEntries[keyPressCount] = key;
      keyPressCount++;
    } else {
      // Too many characters before '#' → invalid
      Serial.println("Too many characters before #. Resetting.");
      keyPressCount = 0;
    }
  }
}
