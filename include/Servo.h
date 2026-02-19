// Minimal Servo declaration for editor/indexer only.
// The real implementation is provided by the PlatformIO Servo library at build/link time.
#ifndef PROJECT_SERVO_H
#define PROJECT_SERVO_H

#include <stdint.h>

class Servo {
public:
    Servo();
    uint8_t attach(int pin);
    void detach();
    void write(int value);
    int read();
    bool attached();
};

#endif // PROJECT_SERVO_H
