# 🚗 Smart Parking Garage Monitoring Using KiwisIoT

An IoT-based smart parking monitoring system using ESP8266 NodeMCU and an HC-SR04 ultrasonic sensor to detect parking conditions and monitor parking availability remotely through KiwisIoT.

## 🌱 About the Project

Parking spaces are an important part of shopping centres, offices, residential buildings, and public facilities. Finding an available parking space can sometimes take time, especially in busy parking areas.

In this project, I built a Smart Parking Garage Monitoring System using the ESP8266 NodeMCU and an HC-SR04 ultrasonic sensor. The ultrasonic sensor measures the distance to an object in the parking area, helping determine whether the parking space is occupied or available.

The ESP8266 processes the distance reading and sends the measured distance and parking status to the KiwisIoT cloud dashboard through Wi-Fi. This makes it possible to monitor parking conditions remotely using an online dashboard.

## ⚙️ Hardware Components

ESP8266 NodeMCU

HC-SR04 Ultrasonic Sensor

Jumper Wires

Resistors for voltage divider

USB Cable

## 🔌 Circuit Connections

HC-SR04 VCC → NodeMCU VIN (5V)

HC-SR04 GND → NodeMCU GND

HC-SR04 TRIG → NodeMCU D5

HC-SR04 ECHO → NodeMCU D6 through a voltage divider

The voltage divider is required to reduce the HC-SR04 Echo signal voltage to a safe level for the ESP8266 GPIO pin.

## 📊 KiwisIoT Dashboard

The KiwisIoT platform is used to visualize the parking distance and parking status remotely.

Channel 0 – Distance Monitoring (cm)

Channel 1 – Parking Status

The distance can be displayed using a numeric widget or gauge, while the parking status can be displayed using a text widget.

## 🔄 Working Principle

The HC-SR04 ultrasonic sensor continuously measures the distance between the sensor and an object in the parking area.

The ESP8266 NodeMCU calculates the distance using the ultrasonic pulse duration and compares it with the predefined threshold.

Based on the measured distance, the system determines whether the parking space is OCCUPIED or AVAILABLE. The distance and status are then sent to the KiwisIoT dashboard through Wi-Fi.

This allows users to monitor parking conditions remotely.

## 💻 Software Used

Arduino IDE

ESP8266 Arduino Core

KiwisIoT Platform

KiwisIoT Arduino Library

## 📖 Project Tutorial

Full project tutorial: [Smart Parking Garage Monitoring Using KiwisIoT](https://www.hackster.io/kirusokumar/smart-parking-garage-monitoring-using-kiwisiot-4c24c7)

## 🌐 Explore KiwisIoT

I use KiwisIoT to connect my IoT projects with an online dashboard and monitor sensor readings remotely. It makes it easier to visualize data from connected hardware and build IoT-based monitoring applications.

Website: https://www.kiwisiot.in/

Arduino Library: https://github.com/Kiwistron/KiwisIoT

Example Projects: https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

If you are exploring IoT projects, KiwisIoT is a platform worth trying.

## 👨‍💻 About the Project

This project demonstrates how ultrasonic sensing, ESP8266 Wi-Fi connectivity, and cloud-based data visualization can be combined to create a simple smart parking monitoring solution.

Thanks for checking out this project! 🚗