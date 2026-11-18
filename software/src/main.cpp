#include <Arduino.h>

#if __has_include("credentials.h")
    #include "credentials.h"
#else
    #warning "credentials.h no encontrado. Copie include/credentials.example.h a credentials.h"
#endif

// Pinout documentado en hardware/README.md
constexpr uint8_t PIN_STATUS_LED = 2;

void setup() {
    Serial.begin(115200);
    pinMode(PIN_STATUS_LED, OUTPUT);
    digitalWrite(PIN_STATUS_LED, HIGH);

    Serial.println("MediaLabUniovi - Sistema de Electronica Inicializado");
}

void loop() {
    // Parpadeo de latido del sistema
    digitalWrite(PIN_STATUS_LED, !digitalRead(PIN_STATUS_LED));
    delay(1000);
}
