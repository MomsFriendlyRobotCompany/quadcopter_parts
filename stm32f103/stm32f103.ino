/*
STM32duino

USB2Serial: 5V UART1
Board: Generic STM32F1
Board Part Number: Generic F103CBTx
Upload: STM32CubeProgrammer (Serial)
USB Support: None
*/

// #include <Wire.h>
// #include <SPI.h>


// Use I2C2 pins
// #define Wire Wire2
// TwoWire Wire2(2, 400000);

// Use SPI2
// SPIClass SPI_2(2);

// https://forum.arduino.cc/t/using-usb-stm32f103-port-as-it-is-a-serial-port/669665/3
// https://github.com/stm32duino/Arduino_Core_STM32/blob/main/cores/arduino/HardwareSerial.h
// HardwareSerial(uint32_t _rx, uint32_t _tx, uint32_t _rts, uint32_t _cts);
// #define RX_PIN PA_10
// #define TX_PIN PA_9
// HardwareSerial Serial9(RX_PIN, TX_PIN);

void setup() {
  // put your setup code here, to run once:
  // Serial.setRx(RX_PIN); // using USART pin name PY_n
  // Serial.setTx(TX_PIN);
  Serial.begin(115200);
  pinMode(PB3, OUTPUT);
  pinMode(PB4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PB3, HIGH);
  digitalWrite(PB4, LOW);
  Serial.println("hello"); // not working
  delay(500);
  digitalWrite(PB3, LOW);
  digitalWrite(PB4, HIGH);
  delay(500);
}
