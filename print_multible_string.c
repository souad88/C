/*Auther :Souad gamal */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int BankAccountNumber=1;
bool Enter_Name(char*);
void creat_new_account();
void _full_address(char*);
typedef struct 
{
    char full_name[50]; //four name
	char full_address[200];
	
} Bank_Account;

void main (void)
{
	creat_new_account();
	
}
void creat_new_account()
{   
	bool is_correct_name;
	// BankAccountNumber++;
	Bank_Account *account= (Bank_Account*)malloc(sizeof(Bank_Account*) + BankAccountNumber * sizeof(int));
    BankAccountNumber++;
    //account->account_status="Available";
    
	is_correct_name=Enter_Name(account->full_name);
	if(is_correct_name)
	{	

		_full_address(account->full_address);
     	//new something
		
			
	}
	else
	{
		printf("Invalid name");	
	}	
	
}

void _full_address(char *full_address)
{
	
	printf("Enter your Full Address , your street and city\n ");
	printf("Notice :You cannot Exceed 12 WordS\n");
	char adrs[100];
	scanf("%s",adrs);
	//printf("%s %s %s %s %s %s %s %s %s %s %s %s",adrs);
	
	
	// printf("%s",s);
	strcpy(full_address,adrs);
	//printf("%s %s %s %s %s %s %s %s %s %s %s %s",full_address);
	
}