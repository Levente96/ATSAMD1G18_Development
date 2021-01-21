# ATSAMD1G18 Development
Guide for using and flashing the ATSAMD21G18 MCU.

## Required tools and devices
* ST Link v2 (or any cheap copy of it)
* ATSAMD21G18 / ATSAMD21G18A MCU which has its pins exposed
* OpenOCD
* Atmel Studio (optional)

## Steps
### 1. Building Software
In atmel studio build the given software. We are will work with a `.elf` file in the following.

### 2. Installing Dependecies
Install drivers for ST Link V2 and install OpenOCD

### 3. Flash Software
You can flash a given `.elf` file with the following command:
```
openocd.exe -f interface/stlink-v2.cfg -c "set CHIPNAME at91samd21g18; set ENDIAN little; set CPUTAPID 0x0bc11477; source [find target/at91samdXX.cfg]" -c "init" -c "reset init" -c "program Application.elf verify reset exit"
```
Modify the `Application.elf` to your binary with relative path.

---
## Sources
* [OpenOCD](http://openocd.org/doc-release/pdf/openocd.pdf)
* [ATSAMD21G18A](https://ww1.microchip.com/downloads/en/DeviceDoc/SAM_D21_DA1_Family_DataSheet_DS40001882F.pdf)
* Arduino Zero bootloader [source](https://github.com/arduino/ArduinoCore-samd/tree/master/bootloaders/zero)
