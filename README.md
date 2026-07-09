# IR Sensor Controlled Servo Motor (Arduino)

A simple Arduino project demonstrating how to control an **SG90 servo motor** using an **IR proximity sensor**. When an object (like your hand) is detected near the sensor, the servo rotates to 180°, and returns to 0° when the object is removed.

---

## 🛠 Components Used
- Arduino UNO
- SG90 Servo Motor
- IR Proximity Sensor
- Jumper Wires
- USB Cable
- (Optional) Breadboard

---

## 🔌 Connections

### Servo Motor
| Servo Wire | Arduino Pin |
|------------|------------|
| Red        | 5V         |
| Brown      | GND        |
| Orange     | Digital 9  |

### IR Sensor
| IR Sensor Pin | Arduino Pin |
|---------------|------------|
| VCC           | 5V         |
| GND           | GND        |
| OUT           | Digital 2  |

> ⚠️ Some IR sensors may have inverted logic. If the servo moves opposite, swap the angles in the code.

---

## 💻 Arduino Code

The Arduino sketch is in the `Arduino_Code` folder:  
`IR_Sensor_Servo_Control.ino`

**How it works:**
1. The IR sensor detects objects near it.
2. The Arduino reads the sensor output.
3. If an object is detected, the servo rotates to 180°.
4. When the object is removed, the servo returns to 0°.

---

## 🎥 Demo
![Demo GIF or Screenshot](demo/ir_servo_demo.gif)  

---

## ⚡ Features
- Real-time servo movement based on object detection.
- Simple and reliable IR detection logic.
- Beginner-friendly Arduino project for learning sensors and actuators.

