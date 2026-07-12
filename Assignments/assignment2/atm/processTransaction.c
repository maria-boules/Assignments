#include <stdio.h>
#include "typedef.h"

void processTransaction(F32 *balance, U32 user_choice)
{
    if(user_choice==1){
        U32 deposit=0;
        printf("Enter deposit amount\n");
        scanf("%d", &deposit);
        *balance+=deposit;
         printf("Deposit successful.\n Current balance: %0.2f\n", *balance);
    }

     else if(user_choice==2){
        U32 withdraw=0;
        printf("Enter amount\n");
        scanf("%d", &withdraw); 
        if (*balance<withdraw){
            printf("Invalid withdraw amount\n");
        }
        else {
              *balance-=withdraw;
         printf("Withdraw successful.\n Current balance: %0.2f\n", *balance);
        }
      
    }
    else if (user_choice==3){
         printf("Current balance: %0.2f\n", *balance);
    }

}
