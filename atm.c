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
int tranxpin;
int tranx;
int debit;
int credit;
int new_balance;
char text[100];
char contd;

<<<<<<< HEAD
printf("\nImportant note!!!\nTHIS IS ORJI-IFE ATM ALGORITHM\nWe will give you free 5000 Dollars to make transactions\nThank you for testing our code\nif you encounter any glitch or downtime, kindly make use of ctrl + C\n(work is still in progress)\n");

=======
>>>>>>> 5432fcdaa47f35d4c66d3dfdbd9753762cdb3e24
printf("\nRegister your name here : ");
fgets(name, 150, stdin);
name[strlen(name)-1]= '\0';
while(strlen(name) == 0){
printf("\nPlease Register you name: ");
fgets(name, 150, stdin);
name[strlen(name)-1]= '\0';
}
<<<<<<< HEAD

printf("\nRegister your pin(use only numbers): ");
scanf("%d", &pin);
printf("\nWelcome %s.\nYour pin is %d.\n", name, pin);

   printf("\nWelcome to ORJI-IFE ATM\n");
=======
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
>>>>>>> 5432fcdaa47f35d4c66d3dfdbd9753762cdb3e24
   printf("\nFor withdrawal enter (1)\nFor payment enter (2)");
   printf("\nEnter your choice : ");
   scanf("%d", &tranx);

    while (tranx !=1 && tranx != 2)
      {
   printf("\nWrong!\nFor withdrawal enter (1)\nFor payment enter (2)");
   printf("\nEnter your choice : ");
   scanf("%d", &tranx);
      }
  
   if(tranx == 1){
   printf("\nHow much do you want to withdraw?: ");
   scanf("%d", &debit);
<<<<<<< HEAD

   while ((debit > balance))
   {
   printf("\nThe amount you want to withdraw is more than what is in your account\nYour available balance is %0.0lf\nWithdraw within the amount range above: ", balance);
   scanf("%d", &debit);
   }
   
   printf("\nEnter Pin: ");
   scanf("%d", &tranxpin);
   if(tranxpin ==  pin){
   new_balance = balance - debit;
   }
   else{while (tranxpin != pin)
   {
   printf("\nWrong!\nEnter Pin: ");
   scanf("%d", &tranxpin);
   }
   new_balance = balance - debit;
   }

   printf("\nYou just withdrew %d\n", debit);
   printf("\nYour balance is %d\n", new_balance);
   }
   else if(tranx == 2){
   printf("\nHow much do you want to deposit?: ");
   scanf("%d", &credit);
    
   printf("\nEnter Pin: ");
   scanf("%d", &tranxpin);
   if(tranxpin == pin){
   new_balance = balance + credit;
   }
   else{while (tranxpin != pin)
   {
   printf("\nWrong!\nEnter Pin: ");
   scanf("%d", &tranxpin);
   }
   new_balance = balance + credit;
   }
  
   printf("\nYou just deposited %d\n", credit);
   printf("\nYour balance is %d\n", new_balance);
   }
   

   while(new_balance > 0){
      printf("\nDo you want to do another transaction?\n YES(y) or NO(n): ");
      scanf("%c", &contd);
      if(contd == 'y'){
   printf("\nWelcome Back %s!\nYour pin is still %d", name, pin );
   printf("\nFor withdrawal enter (1)\nFor payment enter (2)");
   printf("\nEnter your choice : ");
   scanf("%d", &tranx);

    while (tranx !=1 && tranx != 2)
      {
   printf("\nWrong!\nFor withdrawal enter (1)\nFor payment enter (2)");
   printf("\nEnter your choice : ");
   scanf("%d", &tranx);
      }
   
   if(tranx == 1){
   printf("\nHow much do you want to withdraw?: ");
   scanf("%d", &debit);
   while ((debit > new_balance))
   {
   printf("\nThe amount you want to withdraw is more than what is in your account\nYour available balance is %d\nWithdraw within the amount range above: ", new_balance);
   scanf("%d", &debit);
   }
   printf("\nEnter Pin: ");
   scanf("%d", &tranxpin);
   if(tranxpin ==  pin){
   new_balance -= debit;
   }
   else{while (tranxpin != pin)
   {
   printf("\nWrong!\nEnter Pin: ");
   scanf("%d", &tranxpin);
   }
   new_balance -= debit;
   }
   
   printf("\nYou just withdrew %d\n", debit);
   printf("\nYour balance is %d", new_balance);
   }
   else if(tranx == 2){
   printf("\nHow much do you want to deposit?: ");
   scanf("%d", &credit);
    
   printf("\nEnter Pin: ");
   scanf("%d", &tranxpin);
   if(tranxpin == pin){
   new_balance +=  credit;
   }
   else{while (tranxpin != pin)
   {
   printf("\nWrong!\nEnter Pin: ");
   scanf("%d", &tranxpin);
   }
   new_balance += credit;
   }
   
   printf("\nYou just deposited %d\n", credit);
   printf("\nYour balance is %d\n", new_balance);
   
   
   }
      }
      else if(contd == 'n'){
         printf("\nTHANK YOU FOR BANKING WITH US.");
         break;
      }
   }
   
   if(new_balance == 0){
      printf("\nYour account is empty.");
   }
=======
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
>>>>>>> 5432fcdaa47f35d4c66d3dfdbd9753762cdb3e24
   return 0;
   
};

//I LOVE C