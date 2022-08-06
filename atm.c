#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>


int main () {

char name[150];
double balance = 5000;
int pin;
int tranx;
int debit;
int credit;
int new_balance;

printf("\nRegister your name here : ");
fgets(name, 150, stdin);
name[strlen(name)-1]= '\0';
while(strlen(name) == 0){
printf("\nPlease Register you name: ");
fgets(name, 150, stdin);
name[strlen(name)-1]= '\0';
}
printf("\nWelcome %s. You will love this adventure.\n", name);

printf("\nEnter Pin: ");
scanf("%d", &pin);
while(pin != 1234){
printf("\nplease Re-Enter Pin: ");
scanf("%d\n", &pin);
}
printf("\n%d is the correct pin\n", pin);
if(pin == 1234){
   printf("\nWelcome to the ATM\n");
   printf("\nFor withdrawal enter (1)\nFor payment enter (2)");
   printf("\nEnter your choice : ");
   scanf("%d", &tranx);
   if(tranx == 1){
   printf("\nHow much do you want to withdraw?: ");
   scanf("%d", &debit);
   new_balance = balance - debit;
   printf("\nYou just withdrew %d\n", debit);
   printf("\nYour balance is %d", new_balance);
   }
   else {
   printf("\nHow much do you want to deposit?: ");
   scanf("%d", &credit);
   new_balance = balance + credit;
   printf("\nYou just deposited %d\n", credit);
   printf("\nYour balance is %d\n", new_balance);
   }
}
   return 0;
   
};

