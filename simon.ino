  // Define our four lights
  #define LED_RED     2
  #define LED_GRE     3
  #define LED_BLU     4
  #define LED_YEL     5

  #define BUT_RED     6
  #define BUT_GRE     7
  #define BUT_BLU     8
  #define BUT_YEL     9

  #define TONEPIN     12     

  #define DIFF_MODE   30
  #define EASY_MODE   15
  
  // Create arrays of defined elements
  int ledSeq [4] { LED_RED, LED_GRE, LED_BLU, LED_YEL };
  int btnSeq [4] { BUT_RED, BUT_GRE, BUT_BLU, BUT_YEL };
  int tonSeq [4] { 262, 330, 392, 524 };
  int sequence [DIFF_MODE];

  int level = 0;

  
void setup() {
  for(int pin=0; pin<4; pin++){
    pinMode(ledSeq[pin], OUTPUT); //Set LEDs for output
    pinMode(btnSeq[pin], INPUT);  //Set buttons for input
  }
}

void playNote(int pin){
  digitalWrite(ledSeq[pin], HIGH);
  tone(TONEPIN, tonSeq[pin]); // Ended here
}

void giveInstructions(){
  for (int step = 0; step < level; step++){
    playNote(sequence[step]);
  }
  int newNote = random(4);
  playNote (newNote);
  sequence[level];
  level++;
}

bool getInput(){
}

void loop() {
  // put your main code here, to run repeatedly:
  // for(int pin=0; pin<4; pin++){
  //   if (digitalRead(btnSeq[pin]) == HIGH){

  //   } else {
  //     digitalWrite(ledSeq[pin], LOW);
  //     noTone(TONEPIN);
  //   } 
  // }
  giveInstructions();
  getInput();
}











