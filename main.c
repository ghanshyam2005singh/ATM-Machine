#include<stdio.h>
#include<string.h>

int main() {
    char card[10];
    int n;
    int p;
    int a;
    int b;
    int diff;

    printf("Welcom To The ATM \n\n");

    printf("Please Insert Your Card\n\n");
    scanf("%s", &card);

    if (strcmp(card, "card")==0) {
        printf("Hello userName\n\n");

        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check your account balance\n\n");

        scanf("%d", &n);

        if(n==1) {
            printf("Please enter your 4-digit pin\n\n");
            scanf("%d", &p);
            
            //We assume that user account pin is 1234
            if(p==1234)
            {
                printf("Please eneter the amount you want to withdrawal\n\n");
                scanf("%d", &a);
                
                //We assume that user have maximum 1000 in his account
                if (a>1000) {
                    printf("You don't have enough balance in your account");
                } else {
                    printf("Please collect your money\n\n");

                    diff = 1000-a;
                    printf("Your remaining balance is %d\n\n", diff);
                    printf("Thank you for using our ATM\n\n");

                }
            } else {
                printf("You have enternet wrong pin\n\n");
                printf("Try again\n\n");
            printf("Please enter your 4-digit pin again \n\n");
            scanf("%d", &p);
            
            //We assume that user account pin is 1234
            if(p=1234)
            {
                printf("Please eneter the amount you want to withdrawal\n\n");
                scanf("%d", &a);
                
                //We assume that user have maximum 1000 in his account
                if (a>1000) {
                    printf("You don't have enough balance in your account");
                } else {
                    printf("Please collect your money\n\n");

                    diff = 1000-a;
                    printf("Your remaining balance is %d\n\n", diff);

                }
            } else {
                printf("You have enternet wrong pin\n\n");
                printf("You account is blocked\n\n");
        }
    }
    }
}
return 0;
}