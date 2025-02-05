#include <stdio.h>

int main() {
    
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    int swap;
    swap = a;
    a = b;
    b = swap;
    
    printf("a = %d\n",a);
    printf("b = %d",b);

    
    return 0;
}