#include <stdio.h>
#include <math.h>

int main () {

double balance = 5000;
int pin;
int tranx;
int debit;
int credit;
int new_balance;

printf("Enter Pin: ");
scanf("%d", &pin);

if(pin == 1234){
   printf("Welcome to the ATM\n");
   printf("Which transaction do you want to perform\n? :");
    printf("Enter 1 for debit || 2 for credit: ");
   scanf("%d", &tranx);
   if(tranx == 1){
   printf("How much do you want to withdraw?: ");
   scanf("%d", &debit);
   new_balance = balance - debit;
   printf("You just withdrew %d\n", debit);
   printf("Your balance is %d", new_balance);
   }
   else {
   printf("How much do you want to deposit?: ");
   scanf("%d", &credit);
   new_balance = balance + credit;
   printf("You just deposited %d\n", credit);
   printf("Your balance is %d", new_balance);
   }
}
else {
   printf("Please enter a valid pin: ");
   scanf("%d", &tranx);
}

   return 0;
   
};

