#include <stdio.h>
#include "processTransaction.h"
#include "typedef.h"

int main ()
{
    U8 user_choice=0; U8 transactions=0;
    F32 balance=800;
    do{
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nPlease enter your choice\n");
        scanf("%hhd", &user_choice);   
        if (user_choice==1||user_choice==2) transactions++;
       processTransaction(&balance, user_choice); 

    }while (user_choice!=4);

    printf("number of total transactions: %d", transactions);
  

    return 0;
}
