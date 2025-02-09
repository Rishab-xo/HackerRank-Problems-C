#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d",&x);
    
    if (x==0){
        printf("Acute Angle");
        return 0;
    }
     int angle;
    angle = x % 360;
    
    if (angle == 360 || angle ==0){
        printf("Full Rotation");
        return 0;
    }
    else if (angle<90){
        printf("Acute Angle");
    }
    else if (angle==90){
        printf("Right Angle");
    }
    else if (angle<180){
        printf("Obtuse Angle");
    }
    else if (angle==180){
        printf("Straight Angle");
    }
    else {
        printf("Reflex Angle");
    }
    
    return 0;
}
