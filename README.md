# **Button-LED-Control-OnPressed**  

## **Overview**  
This Arduino project controls an LED using a push button.  
The LED turns **ON** when the button is pressed and **OFF** when released.  
It uses the **INPUT_PULLUP** configuration to simplify wiring without requiring an external pull-up resistor.  

---

## **Components Used**  
- **Arduino Uno R3** or compatible board  
- **Push button switch** (4-pin)  
- **LED**  
- **Resistor (220Ω)** for LED protection  
- **Breadboard** and **Jumper Wires**  

---

## **Wiring**  
<img width="425" alt="image" src="https://github.com/user-attachments/assets/f7d7d19a-86d6-4157-94ac-3c7df47c828c" />

- **Button Pin 1** → **GND**  
- **Button Pin 2** → **Pin 8 (Digital Input)**  
- **LED Anode (long leg)** → **Pin 9 (Digital Output)**  
- **LED Cathode (short leg)** → **GND** via **220Ω resistor**  

---

## **How It Works**  

1. The button is configured with an **INPUT_PULLUP** resistor, making its default state **HIGH** when not pressed.  
2. Pressing the button connects it to **GND**, changing its state to **LOW**.  
3. The LED turns **ON** when the button state is **LOW** and **OFF** when the button is released.  

---

## **Code**  

See the (https://github.com/ZaGrace/Button-LED-Control-Arduino-/blob/main/Button_LED_Control_OnPressed.ino) for the complete code.  

---

## **License**  
This project is licensed under the [MIT License](./LICENSE).  
