// YWROBOT
// Compatible with the Arduino IDE 1.0
// Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // set the LCD address to 0x27 for a 16 chars and 2 line display
int menu = 6;
int sw_next = 15;
int sw_ok = 2;

int led1 = 23, led2 = 19, led3 = 18, led4 = 5, led5 = 17, led6 = 16, led7 = 4, led8 = 0;

void setup()
{
    lcd.init(); // initialize the lcd
    // Print a message to the LCD.
    lcd.backlight();

    pinMode(sw_next, INPUT_PULLUP);
    pinMode(sw_ok, INPUT_PULLUP);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
}

void loop()
{
    int status_next = digitalRead(sw_next);

    if (status_next == HIGH)
    {
        menu++;
        if (menu == 7) // ถ้าถึง7แล้วจะวนกลับมาที่1
        {
            menu = 1;
        }
        // lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Menu: ");
        lcd.print(menu);
        delay(200);
    }

    int status_ok = digitalRead(sw_ok);
    if (status_ok == HIGH)
    {
        delay(1000);
        if (menu == 1)
        {
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(2000);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
        }
        else if (menu == 2)
        {
            digitalWrite(led2, 1);
            digitalWrite(led4, 1);
            digitalWrite(led6, 1);
            digitalWrite(led8, 1);
            digitalWrite(led1, 0);
            digitalWrite(led3, 0);
            digitalWrite(led5, 0);
            digitalWrite(led7, 0);
            delay(1000);
            digitalWrite(led1, 1);
            digitalWrite(led3, 1);
            digitalWrite(led5, 1);
            digitalWrite(led7, 1);
            digitalWrite(led2, 0);
            digitalWrite(led4, 0);
            digitalWrite(led6, 0);
            digitalWrite(led8, 0);
            delay(1000);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
        }
        else if (menu == 3)
        {
            digitalWrite(led1, 1);
            digitalWrite(led8, 0);
            delay(1000);
            digitalWrite(led2, 1);
            digitalWrite(led1, 0);
            delay(1000);
            digitalWrite(led3, 1);
            digitalWrite(led2, 0);
            delay(1000);
            digitalWrite(led4, 1);
            digitalWrite(led3, 0);
            delay(1000);
            digitalWrite(led5, 1);
            digitalWrite(led4, 0);
            delay(1000);
            digitalWrite(led6, 1);
            digitalWrite(led5, 0);
            delay(1000);
            digitalWrite(led7, 1);
            digitalWrite(led6, 0);
            delay(1000);
            digitalWrite(led8, 1);
            digitalWrite(led7, 0);
            delay(1000);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
        }
        else if (menu == 4)
        {
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            delay(1000);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            delay(1000);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            delay(1000);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(1000);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
        }
        else if (menu == 5)
        {
            digitalWrite(led1, 1);
            digitalWrite(led8, 0);
            delay(1000);
            digitalWrite(led2, 1);
            digitalWrite(led1, 0);
            delay(1000);
            digitalWrite(led3, 1);
            digitalWrite(led2, 0);
            delay(1000);
            digitalWrite(led4, 1);
            digitalWrite(led3, 0);
            delay(1000);
            digitalWrite(led5, 1);
            digitalWrite(led4, 0);
            delay(1000);
            digitalWrite(led6, 1);
            digitalWrite(led5, 0);
            delay(1000);
            digitalWrite(led7, 1);
            digitalWrite(led6, 0);
            delay(1000);
            digitalWrite(led8, 1);
            digitalWrite(led7, 0);
            delay(1000);

            digitalWrite(led8, 1);
            digitalWrite(led1, 0);
            delay(1000);
            digitalWrite(led7, 1);
            digitalWrite(led8, 0);
            delay(1000);
            digitalWrite(led6, 1);
            digitalWrite(led7, 0);
            delay(1000);
            digitalWrite(led5, 1);
            digitalWrite(led6, 0);
            delay(1000);
            digitalWrite(led4, 1);
            digitalWrite(led5, 0);
            delay(1000);
            digitalWrite(led3, 1);
            digitalWrite(led4, 0);
            delay(1000);
            digitalWrite(led2, 1);
            digitalWrite(led3, 0);
            delay(1000);
            digitalWrite(led1, 1);
            digitalWrite(led2, 0);
            delay(1000);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
        }
        else if (menu == 6)
        {
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(500);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
            delay(500);
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(500);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
            delay(500);
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(500);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
            delay(500);
            digitalWrite(led1, 1);
            digitalWrite(led2, 1);
            digitalWrite(led3, 1);
            digitalWrite(led4, 1);
            digitalWrite(led5, 1);
            digitalWrite(led6, 1);
            digitalWrite(led7, 1);
            digitalWrite(led8, 1);
            delay(500);
            digitalWrite(led1, 0);
            digitalWrite(led2, 0);
            digitalWrite(led3, 0);
            digitalWrite(led4, 0);
            digitalWrite(led5, 0);
            digitalWrite(led6, 0);
            digitalWrite(led7, 0);
            digitalWrite(led8, 0);
            delay(500);
        }
    }
}