#include "Keyboard.h"
const int buttonPin2 = 2; // microfone mute
const int buttonPin3 = 3; // camera turn off/on
const int buttonPin4 = 4; // raise or lower your hand on teams
const int buttonPin5 = 5; // enter
const int buttonPin6 = 6; // SS
const int buttonPin7 = 7; // 
const int buttonPin8 = 8; // 
const int buttonPin9 = 9; // şifre girer
const int buttonPin10 = 10; // propety oluşturma
const int buttonPin14 = 14; // 
const int buttonPin15 = 15; // 
const int buttonPin16 = 16; // blur
const int ctrlKey = KEY_LEFT_CTRL;
const int shiftKey = KEY_LEFT_SHIFT;
const int enterKey = KEY_RETURN;
const int windowsKey = KEY_LEFT_GUI;
const int tabKey = KEY_TAB;
const int mKey = 'M';
const int oKey = 'O';
const int kKey = 'K';
const int eKey = 'E';
const int pKey = 'P';
const int aKey = 'A';
const int dKey = 'D';
const int sKey = 'S';
//Keyboard.press(KEY_LEFT_GUI);  //windows tuşu
 // Sistem komutu ile notepad aç
 /*
    system("notepad.exe"); 
    delay(1000); // 1 saniye bekle
    // Notepad'e "hello world" yaz
    Keyboard.print("hello world");
*/    
void setup() 
{
    pinMode(buttonPin2, INPUT);
    pinMode(buttonPin3, INPUT);
    pinMode(buttonPin4, INPUT);
    pinMode(buttonPin5, INPUT);
    pinMode(buttonPin6, INPUT);
    pinMode(buttonPin7, INPUT);
    pinMode(buttonPin8, INPUT);
    pinMode(buttonPin9, INPUT); 
    pinMode(buttonPin10, INPUT);
    pinMode(buttonPin14, INPUT);
    pinMode(buttonPin15, INPUT);
    pinMode(buttonPin16, INPUT);     
}

void loop() 
{
   if (digitalRead(buttonPin2) == HIGH)  // microfone mute 1
  {
    Keyboard.press(ctrlKey);
    Keyboard.press(shiftKey);
    Keyboard.press(mKey);
    delay(500);
    Keyboard.releaseAll();
  }

  if (digitalRead(buttonPin3) == HIGH) // camera turn off/on 2
  {
    Keyboard.print("'");
    // Keyboard.press(ctrlKey);
    // Keyboard.press(shiftKey);
    // Keyboard.press(oKey);
    delay(100);
    Keyboard.releaseAll();
  }
   
    if (digitalRead(buttonPin4) == HIGH) // raise or lower your hand 3
  {
    Keyboard.print('"');
    // Keyboard.press(ctrlKey);
    // Keyboard.press(shiftKey);
    // Keyboard.press(kKey);
    delay(100);
    Keyboard.releaseAll();
  }
  
  if (digitalRead(buttonPin5) == HIGH) // ctrl + . 4
  {
    Keyboard.press(ctrlKey);
    Keyboard.print(".");
    delay(100);
    Keyboard.releaseAll();
  }
  
  if (digitalRead(buttonPin6) == HIGH) // 5
  {
    Keyboard.print("(");
    delay(100);
    Keyboard.releaseAll();
  }
  
  if (digitalRead(buttonPin7) == HIGH) // 6
  {
    Keyboard.print("{");
    delay(100);
    Keyboard.releaseAll();
  }

    if (digitalRead(buttonPin8) == HIGH) // 7
  {
    Keyboard.print("[");
    delay(100);
    Keyboard.releaseAll();
  }
  
 if (digitalRead(buttonPin9) == HIGH) // ; 8
  {
    Keyboard.print(";");
    delay(100);
    Keyboard.releaseAll();
  }  

    if (digitalRead(buttonPin10) == HIGH) //SS 9
  {
    Keyboard.press(windowsKey);
    Keyboard.press(shiftKey);
    Keyboard.press(sKey);
    delay(100);
    Keyboard.releaseAll();
  }
  
  if (digitalRead(buttonPin14) == HIGH) // statik dizi 10
  {
    Keyboard.print("int[] numaralar = new int[] {3,5};");
    Keyboard.print("Console.WriteLine(numaralar[0]);");
    delay(100);
    Keyboard.releaseAll();
  }
  
    if (digitalRead(buttonPin15) == HIGH) //statik dizi 11 
  {
    Keyboard.print("int[] statikDizi = new int[3];");
    Keyboard.print("statikDizi[0] = 10;");
    Keyboard.print("Console.WriteLine(statikDizi[0]); // Output: 10");
    delay(100);
    Keyboard.releaseAll();
  }

  if (digitalRead(buttonPin16) == HIGH) // List tipinde dinamik dizi örneği 12
  {
     Keyboard.print("List<string> dinamikDizi = new List<string>();");
     Keyboard.print("dinamikDizi.Add(" ");");
     Keyboard.print("string ilkEleman = dinamikDizi[0];");
    delay(100);
    Keyboard.releaseAll();
  }
}


