Project template
================

Author: Hussam Al-Hertani

This is a Template project for the STM32F0 microcontroller. For more information 
Please read "http://hertaville.com/2013/09/03/stm32f0discovery-command-line-ide/".
Better read at http://www.hertaville.com/stm32f0discovery-command-line-ide.html


The included makefile can program the chip from the command line using Texane's st-flash utility or OpenOCD.
The included makefile can initiate a debug session from the command line using Texan'e st-util utility or OpenOCD
and the arm-none-eabi-gdbtui utility.

Subsequently modified by Simon Heath.

To use:

Set up your dev environment as described in the above article and its predecessor.

Note that Debian has the ARM compiler and openocd available, and you don't need to add
the extra search paths to find the openocd scripts.  Debian does NOT have GDBTUI, so the makefile
just uses plain gdb; you can modify the GDB variable to whatever frontend you care for.

Unzip the STM32F0-Discovery_FW_V1.0.0.zip in the parent folder (or whatever folder you want and
modify the makefile).

Edit the makefile to change your project name.

Should be able to use 'make', 'make flash', and 'make debug'.  Defaults to openocd, but there are
stlink targets still there. 
