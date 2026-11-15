# Automatic Rain Detection System

A home-automation rain detection prototype built with **Arduino** and a **raindrop sensor module** for real-time weather sensing and automated alert/response triggering[cite: 2].

## Hardware Components
* Arduino Microcontroller (Uno / NodeMCU)[cite: 2]
* Raindrop Sensor Module (sensing pad + LM393 comparator board)[cite: 2]
* Buzzer / LED / Actuator Trigger Output
* Jumper Wires

## Pin Connections
| Component | Pin | Arduino Pin |
| :--- | :--- | :--- |
| Rain Sensor Module | VCC / GND | 5V / GND |
| Rain Sensor Module | A0 | `A0` |
| Rain Sensor Module | D0 | `D2` |
| Alert Buzzer / Output | (+) / (-) | `D8` / GND |

## Key Features
* **Dual-Mode Detection:** Uses both analog readings (to gauge rain intensity) and digital comparator interrupts for fast response[cite: 2].
* **Calibrated Thresholds:** Tuned sensitivity to prevent false alerts from morning dew or humidity[cite: 2].
