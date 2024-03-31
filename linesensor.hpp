// датчики линии

#pragma once

#include <Arduino.h>


/// @brief Аналоговый Датчик линии
class LineSensor {
    private:
    
    const uint8_t PIN;
    const uint16_t ON_LINE;
    const uint16_t on_field;

    public:

    LineSensor(
        const uint8_t pin,
    )
};
