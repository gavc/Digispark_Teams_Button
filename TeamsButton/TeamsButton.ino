// https://www.instructables.com/Zoom-Meetings-Physical-Mute-Button/
// https://gist.github.com/HaxNobody/7bde369d7a41348b8b91c1a4f358ea4a

#include <OneButton.h>
#include <DigiKeyboard.h>

int button1pin = 0;
int button2pin = 2;
 
OneButton button1(button1pin, true);
OneButton button2(button2pin, true);

void setup() {
button1.attachClick(click1);
button1.attachLongPressStart(longPressStart1);
button2.attachClick(click2);
button2.attachLongPressStart(longPressStart2);
  
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(500);
}

void loop() {
button1.tick();
button2.tick();
}

// click1 Mute - Ctrl+Shift+M
void click1() {
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style keyboard)
  DigiKeyboard.sendKeyStroke( KEY_M, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
}

// click2 Video Ctrl+Shift+O
void click2() {
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style keyboard)
  DigiKeyboard.sendKeyStroke( KEY_O, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
}

// longPressStart1 Chat - Start New Chat Ctrl+N
void longPressStart1() {
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style keyboard)
  DigiKeyboard.sendKeyStroke( KEY_N, MOD_CONTROL_LEFT);
}

// longPressStart2 Lock Computer
void longPressStart2() {
  // this is generally not necessary but with some older systems it seems to prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style keyboard)
  DigiKeyboard.sendKeyStroke (KEY_L, MOD_GUI_LEFT);//
}
