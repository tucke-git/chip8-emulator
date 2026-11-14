// CPU state: RAM, V0-VF registers, PC, I, stack, timers, 64x32 display buffer

#pragma once // only includes this file once during a single compilation no //
             // matter how many times #include asks for it
#include <cstdint>

class chip8class
{
  private:
    uint8_t chip8mem[4096]; // 8 bit elements making up the chip8's 4096 KB ram
    uint8_t display[32][64];

  public:
    chip8class();
};