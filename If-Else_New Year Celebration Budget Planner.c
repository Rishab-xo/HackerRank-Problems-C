#include <stdio.h>

int main() {

    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    
    scanf("%d %d %d %d %d %d",&budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
    
    int totalfoodcost = numGuests * foodCostPerGuest;
    int total = ( (totalfoodcost + decorationCost) + (musicCost + extraExpenses) );
    

    
if (total <= budget && numGuests > 5 && numGuests <= 50 &&
        ((decorationCost < 0.3 * budget) || 
         (totalfoodcost < 0.5 * budget)) &&
        (numGuests <= 25 || musicCost > 0)){
         printf("Celebration Approved");
         return 0;
     }

     else {
        printf("Celebration Denied");
    }
    
    return 0;
}