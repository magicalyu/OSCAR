#ifndef ADAPTERBOARD_H
#define ADAPTERBOARD_H

#include <RGBLed.h>

#define LED_R 13
#define LED_G 9
#define LED_B 10
#define BACKLIGHT_PIN 0

class AdapterBoard
{
  public:
    AdapterBoard();
    void init();
    void poll();

  private:
    RGBLed led;
    Backlight backlight;
};

#endif