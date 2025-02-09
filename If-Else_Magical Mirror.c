#include <stdio.h>

int main() {

     int a;
    
    scanf("%d",&a);
    
    
    if(a<1 || a>1000000){
        printf("The verdict for the number %d is: INVALID",a);
    }
    
    
    else if((a>10 && a%2==0) && (a>15 && a%3==0) && (a%7==0)){
        
        printf("The verdict for the number %d is: SUPERNATURAL",a);
        
    }
    
    else if((a>10 && a%2==0) && (a>15 && a%3==0)){
        
        printf("The verdict for the number %d is: MIRACULOUS",a);
        
    }
    
    else if((a>15 && a%3==0) && (a%7==0)){
        
        printf("The verdict for the number %d is: MIRACULOUS",a);
        
    }
    else if((a%7==0) && (a>10 && a%2==0)){
        
        printf("The verdict for the number %d is: MIRACULOUS",a);
        
    }
    
        else if((a>10 && a%2==0) || (a>15 && a%3==0) || (a%7==0)){
        
        printf("The verdict for the number %d is: MAGICAL",a);
        
    }
        else{
            printf("The verdict for the number %d is: NORMAL",a);
        }

    
    return 0;
}