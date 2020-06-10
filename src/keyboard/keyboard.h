

#ifndef __CHIP8KEYBOARD__H
#define __CHIP8KEYBOARD__H


#include <stdint.h>

#define KEYCOUNT 16
class Chip8Keyboard
{
    public:
        Chip8Keyboard();
        void pressKey(uint8_t keyNumber);
        void releaseKey(uint8_t keyNumber);
        bool isKeyPressed(uint8_t keyNumber);
        int isAnyKeyPressed();

    private:
        bool m_key[KEYCOUNT];
};

#endif
