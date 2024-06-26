# Sody's Steering Box
Steering box for online racing to use with SimHub

I used a few projects and combined them all into one super steering box that can be used with almost any 70mm steering wheel. Bolt it onto this 3D-printed project and have a good time. This began as a way to mount a SimPush Thrustmaster Wheel (58mm pattern) onto a button box with a quick release from AliExpress. I had to do some funky rotations on a Thrustmaster quick release base (rotated 30° to get the 58mm bolts onto the box, then 70mm onto the Thrustmaster part) to make it work. I've included those 3D files in this project in case someone does want to use them (the things marked as 58mm and not 70mm). In the end though, I bought a standard 70mm rim and that works so much better. I use an NRG quick release to match up with my Simagic GT Neo to swap back and forth and it's been an incredible solution for me.

Also a big thanks to my buddy Nate for contributing his time/ideas to this box and being a tester.

<a href="https://buymeacoffee.com/sodyfx"><img src="https://www.owlstown.com/assets/icons/bmc-yellow-button-e91f626c5320efe1868dd75673b6edae7d0e2e4f059d40cd3287a7c8536805e6.png" height="45"></a>

![Screenshot](images/preview_front1.png)

The screen has flag coloring for Green, Yellow, White and Checkered flags as well as a gear indicator. If you don't want to deal with the screen, I've included an STL without the screen hole/mount.

<img src="https://github.com/SodyFX/SteeringBox/blob/main/images/oledscreen_anim.gif">

**Thanks to these creators and their projects:**

KaiserSoft's Open Sim Button Box: https://github.com/KaiserSoft/OpenSimButtonBox/tree/master/Wheel%20Button%20Box

N1bbles' Rev Limiter Indicator case: https://www.thingiverse.com/thing:3299262

Technoblogy's Compact TFT Graphics Library: http://www.technoblogy.com/show?2LMJ

Oliver Martens' Thrustmaster Adapter: https://www.printables.com/model/422991-thrustmaster-qr-70mm-universal-hub-with-6-pin-din-

SimHub: https://www.simhubdash.com

Daniel Newman Racing LED Profiles for SimHub: https://www.danielnewmanracing.com


## **Parts List**

### **Main Box**

  - Any standardish 70mm rim (pay attention to wheel base to not hit button/encoder holes on the box itself). I used: https://amzn.to/3W1Ajmq

  - 24 AWG Wire (any will do): https://www.aliexpress.us/item/3256805702676823.html

  - [1] Arduino Micro (without headers): https://amzn.to/49O19BN

  - [10] M3x4mm heat inserts (up to 18x, but I only use 10): https://amzn.to/4d8mCZ6

  - [2] M2.5x4mm heat inserts: https://amzn.to/4d2PfGR

  - [1] 0.96 Inch OLED Screen: [https://www.aliexpress.com/item/3256805114625872.html](https://s.click.aliexpress.com/e/_DeGfpYj)

  - [1] Female Micro USB plug (A Micro usb Female, flat mouth): [https://www.aliexpress.com/item/3256802134100208.html](https://s.click.aliexpress.com/e/_DkJSELN)

  - [1] Micro USB male plug (JSRV8UP): [https://www.aliexpress.us/item/3256804401328448.html](https://s.click.aliexpress.com/e/_DBvKZEP)

  - [1] Micro USB cable (5p-5CM): [https://www.aliexpress.us/item/3256804401328448.html](https://s.click.aliexpress.com/e/_DkFfKFV)

  - [2] Rotary Encoder: [https://www.aliexpress.com/item/3256806221432121.html](https://s.click.aliexpress.com/e/_DDCRbIX)

  - [1] 4 or 5 way navigation switch (not enough button options on Arduino Micro to use the 5th button press): https://amzn.to/44fOyWU

  - [2] WS2182 equivalent RGB board: [https://www.aliexpress.com/item/3256806172522483.html](https://s.click.aliexpress.com/e/_DmvSv71)

  - [5] 12mm Momentary Buttons: [https://www.aliexpress.us/item/3256804994626491.html
](https://s.click.aliexpress.com/e/_Dk0i5OX)
  - [1] 3D Printed/Aluminum Thrustmaster Adapter (I'd advise against the Aluminum AliExpress adapter, it's very heavy): https://www.printables.com/model/422991-thrustmaster-qr-70mm-universal-hub-with-6-pin-din-


### **Shifters **

  - [2] D2F-01 Micro Switches: [https://www.aliexpress.com/item/3256805020718071.html](https://s.click.aliexpress.com/e/_DkxA3NN)
  
  - [4] 623ZZ ball bearing: https://www.aliexpress.com/item/3256805351771473.html
  
  - [8] 12mmx3mm magnets (I used 8, but you can fit a couple more or less to change shifter strength): [https://www.aliexpress.com/item/3256805722817574.html](https://s.click.aliexpress.com/e/_Dme1lHl)
  

### **Screws**

  - [2] M3x6mm regular head self-tapping (RGB LED box)
  
  - [8] M3x4mm flat head (shifter paddles and screen holder)

  - [8] M2x32mm flat head (shifter boxes)

  - [2] M3x50mm socket head (shifter paddles)

  - [2] M2.5x4mm flat or regular head (funky switch)

  - [6] M5x30mm or M5x32mm flat head (Button box to Thrustmaster adapter)

### **Nuts**
  
  - [6] M3 nylock (shifter paddles)

  - [8] M2 nylock (shifter boxes)

  - [6] M5 nylock (Thrustmaster adapter)


### **Optional**

  - [1] Steering Wheel Quick Release (must be 6+4 ball to work with Simagic wheels): https://amzn.to/3WaooCY or [https://www.aliexpress.us/item/3256805482792786.html](https://s.click.aliexpress.com/e/_DDISJv5)

  - [2] Rotary Encoder knobs: [https://www.aliexpress.us/item/2251832562966356.html](https://s.click.aliexpress.com/e/_DcZ6oIL)

  - [1] Micro-USB Coiled Cable (can use any Micro-USB cable): [https://www.aliexpress.com/item/3256805986924644.html](https://s.click.aliexpress.com/e/_Dk3tSYn)

## Build Info

Head to the Wiki for instructions: https://github.com/SodyFX/SteeringBox/wiki
