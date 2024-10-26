#include<stdio.h>
#include<conio.h>
void main()
{
	int stored_pin, password;
	
	printf("Welcome To  Bank :\n");
	printf("set 4 digit password for account\n");
	scanf("%d",&stored_pin);
	
	printf("your account created Successfully\n");
	
	printf("Enter put 4 digit pin to login :\n");
	scanf("%d", &password);
	
 if(stored_pin == password)
{
	printf("You entered to your account successfully \n");
	printf("1. Check your balance \n");
	printf("2. Withdraw the amount\n");
	printf("3. write amount \n");
	}
 else
 {
 	printf("Your Entered An Incorrect Password\n");
	 }	
	
	printf("Thank You For Using BANK ATM\n"); 
	getch();	
}
