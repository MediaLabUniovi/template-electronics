# Documentacion del Firmware y Software

Modulo de software y firmware bajo PlatformIO / ESP-IDF.

---

## Estructura de Directorios

```text
software/
├── platformio.ini
├── README.md
├── include/
│   └── credentials.example.h
└── src/
    └── main.cpp
```

---

## Compilacion y Carga

```bash
cd software
pio run
pio run -t upload --upload-port <PUERTO_SERIE>
```
