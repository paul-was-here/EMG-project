# this code simply reads the voltage value as outputted by the arduino (no data processing)
# arduino IDE must be closed for serial port access by this script

import serial

portUsed = '/dev/cu.usbmodem101' #specific to mac usb-c port 1
arduino = serial.Serial(port=portUsed, baudrate=9600, timeout=10)

while True:
    if arduino.in_waiting:
        data = arduino.readline().decode('utf-8').strip()
        print(data)