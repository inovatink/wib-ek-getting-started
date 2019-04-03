# Getting started with wib evaluation kit

WIB series modules provide out-of-the-box Cloud services and analytics to Internet of Things application developers. WIB series modules integrate secure connectivity, high performance processor and rich set of peripherals. In the minimum operational configuration WIB modules need to be; (i) mechanically hosted by an application board, (ii) properly powered and (iii) interfaced with application hardware via peripheral signals. WIB Evaluation Kit provides the necessary operational configuration for WIB modules and allows for fast and easy application evaluation.

WIB Evaluation Kit allows users to explore the advantages of the WIB series modules while experiencing hassle free interconnection between the module and Inovatink Device Cloud or any other Cloud service.

WIB Evaluation Kit is generalized solution that can be used to prototype many different IoT applications. Evaluation board can be used to host all of the WIB series modules (WIB, WIB2G, WIBNB). It can be used for both battery and DC adapter powered applications. For more information about the individual module that comes with the kit please refer to module datasheet. Evaluation board should be powered by 5V/2A power supply from VIN - GND pins. Board generates 3V3 (200mA) and 5V (200mA) that can be used for peripheral devices.

If you are starting to develop using this kit in the default configuration with Inovatink's module firmware then everything you need it a stable UART connection. Please read module datasheet and use peripheral SDK to interface with module.

It is possible to program module with your own firmware and connect your device to various services offered by Cloud providers. Below are procedures:

## Amazon FreeRTOS + AWS IoT Core service

1. Connect module programmer to the evaluation board and be sure to check that your OS has installed necessary drivers.
2. Follow the instructions from EPS32-DevKitC from aws docs ([Link](https://docs.aws.amazon.com/en_us/freertos/latest/userguide/getting_started_espressif.html)) to install Amazon FreeRTOS on the module and get started with AWS IoT Core.
3. Include pinconfig.h file from this repository to your project and use the module peripherals to interact with application.

## FreeRTOS + Azure IoT SDK + Azure IoT Hub service

1. Connect module programmer to the evaluation board and be sure to check that your OS has installed necessary drivers.
2. Follow the instructions from [here](/wib-ek-getting-started-azure.md) to burn an image with Azure IoT SDK on the module and get started with Azure IoT Hub.
3. Include pinconfig.h file from this repository to your project and use the module peripherals to interact with application.


## ToDo
* populate pin_config.h
* add getting started procedure for Inovatink Device Cloud