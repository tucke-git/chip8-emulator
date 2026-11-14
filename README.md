A lightweight CHIP-8 interpreter written from scratch in modern C++, designed to emulate the 1970s virtual architecture.

I'm building this with the goal of diving deeper into low-level systems, programming, memory management, and instruction set architecture.

The chip8-emulator has 4KB of addressable RAM, the mapping of the font is set at 0x050-0x09F.
Roms will start at 0x200.

Display: 64 x 32 monochrome pixel grid.

Prerequisites & Dependencies

- A C++ compiler supporting C++11 or later
- SDL2 or your rendering library of choice for graphics window creation and keyboard input.

Building & Running 

- clang++ -std=c++11 main.cpp chip8.cpp - o chip8
- ./chip8 roms/pong.ch8

5. Controls
(TBD)




