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
