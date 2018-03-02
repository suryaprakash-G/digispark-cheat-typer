#include "DigiKeyboard.h"
  int vc=1,uc=1;
void setup() {

   pinMode(1, INPUT);
    pinMode(0, INPUT);
  DigiKeyboard.sendKeyStroke(0);
}


void loop() {
   DigiKeyboard.delay(200);
  if(digitalRead(0)){
    if(uc>4)
      uc=1;
      else
      uc++;
      switch(uc)
      {
    case 1:
  DigiKeyboard.println("~painkiller");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


   case 2:
     DigiKeyboard.delay(80);
  DigiKeyboard.println("~toolup");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  
    case 3:
     DigiKeyboard.delay(80); 
  DigiKeyboard.println("~turtle");
   DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  

  case 4:
  DigiKeyboard.println("~powerup");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  }
   DigiKeyboard.delay(200);
  }

  //vehicle
     if(digitalRead(1)){
    if(vc>4)
      vc=1;
      else
      vc++;
      switch(vc)
      {
        case 1:
        DigiKeyboard.delay(80);
     DigiKeyboard.println("~rapidgt");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;
      case 2:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~comet");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;
     
     case 3:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~vinewood");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;

 
     case 4:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~buzzoff");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;

     case 5:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~barnstorm");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;

     case 6:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~rocket");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;

     case 7:
     DigiKeyboard.delay(80);
     DigiKeyboard.println("~offroad");
     DigiKeyboard.delay(200);
     DigiKeyboard.sendKeyStroke(KEY_ENTER);
     break;
      }
  DigiKeyboard.delay(200);
  }
    
  
}
