#include <stdio.h>

int main() {

    float income;
    scanf("%f",&income);
    float tax;
    
    if(income<0 || income >10000000) {
        printf("INVALID");
    }
    
    
    else if( income <= 250000 && income>=0){
        printf("0.00");
    } 
    else if (income <=500000){
        tax = (income-250000)*0.05;
        printf("%.2f",tax);
    } else if ( income<=1000000){
        tax = (income-500000)*0.2 + 250000*0.05;
        printf("%.2f",tax);
    } else if ( income > 1000000 ){
        tax = (income-1000000)*0.3 + 250000*0.05 + 500000*0.2;
        printf("%.2f",tax);
    }
    
    else{
        printf("INVALID");
    }
        
    
    
    
    return 0;
}