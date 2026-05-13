#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Windows + R
  DigiKeyboard.delay(500);
  DigiKeyboard.print("https://fakeupdate.net/win10ue/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11); // Full screen
  for(;;){ /* Stop execution */ }
}
