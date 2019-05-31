# APA102-DotStar
## Overview
This is the library for using DotStar(APA102) with Mbed.
thankyou for your looking this Library!!
This is very simple library for using Dotstar.

DotStar is Serial Controlable LED.You can use SPI.
But you don't have to use all pin(MOSI,MISO,SCK and SSEL),only choose two wire MOSI(MasterOutSlaveIn) and SCK(SerialClocK).
It is more stable than NeoPixel because of using a Serial clock.
## Demo
using SparkFun Lumenati 4-pack(https://www.sparkfun.com/products/14353)
```img
https://pbs.twimg.com/media/D74532cUYAEKjNX?format=jpg
```

## Requirement

## Usage
First,inluclude the library.
```c++
#include  "LGDotStar.h"
```
Second,declare the instance.
```c++
LGDotStar LED(D11,D13,4);//mosi,sck,Number of leds used
```
Third,set the LED states.
```c++
LED.set(255,0,0,0);//RED,GREEN,BLUE,Number of led
```
Force,send thise led states.
```c++
LED.write();
or
LED.write(31);//set Brightness(0~31)
```

This is the sample program.
```c++
#include  "mbed.h"
#include  "LGDotStar.h"

LGDotStar LED(D11,D13,4);

int main(){
        while (1) {
                LED.set(255,0,255,0);
                LED.set(255,255,255,1);
                LED.set(255,255,0,2);
                LED.set(0,255,255,3);
                LED.write(31);
        }
}

```

## Licence

[MIT](https://github.com/tcnksm/tool/blob/master/LICENCE)

## Author

[tmxrrrm](https://github.com/TomiXRM)
