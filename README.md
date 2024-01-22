# RegulationVentilateur

## Description
This repo gather all information to create an electronic project to control a fan speed.
- A Pcb has been designed. 
- 3D printing is uesd for the plastic gearbox.

## Pictures: 

Inserer schéma electronique
Insérer Boitier
Inserver résultat final 

## Hardware
For this  project the following electronic components have been use. You can check the electronic schematic to exact values of resistors
- Arduino Nano
- 2 resistors
- 1 four pins push button
- 4 Leds
- 1 transistor npn2222
- 5v fan (computer cooling fan)
### Wiring - Electronical schematic
Insérer image schéma électronique

### Wiring - Bread board wiring
Insérer image beard board

### PCB design
PCB has been created following guidlines. The pcb must be as the same size or smaller than the arduino. More the pcb is smaller, less is the 3D printing time.  

### GearBox design
PCB 3d can be imported on the 3D modeling software. Then I can design the 3d gearbox with the exact lenght.  

## Software : 
The following behavior has been push in the arduino nano :  
1- When the arduino is powered, the full power is send to the fan, green led goes on, other stay off.  
2- If the button is pressed, the fan speed is devide per 2. Orange led goes on, other stay off.  
3- If the button is pressed a 2nd time, fan is switch off. Red led goes on, other stay off.  

And so on, and so on... 

  
# Sources
[Arduino Nano Schematic](https://www.teachmemicro.com/wp-content/uploads/2019/06/Arduino-Nano-pinout.jpg)  
[Fan control with transistor](https://www.instructables.com/PWM-Regulated-Fan-Based-on-CPU-Temperature-for-Ras/)  
