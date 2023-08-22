/*Auther :Souad gamal */
#include<stdio.h>
#include<stdlib.h>
void creat_new_account();

typedef struct 
{
    char full_name[50]; //four name
	char full_address[200];
	int national_id; //14 digit
	float age;
	int bank_id; //generated autumatic ex :100000000
	int guardian; //if age<21 gard=1 exist
	int  grdian_national_id; //14digit
	char account_status[50]; //bydefault Active,maybe restricted or closed
	double balance;	//ex:750000
	char password[50]; //generated randome
} Bank_Account;
void Enter_Name(char*);
	
void main (void)
{
	int BankAccountNumber=1;   	
	
    Bank_Account *account= (Bank_Account*)malloc(sizeof(Bank_Account*) + BankAccountNumber * sizeof(int));

	Enter_Name(account->full_name);
}
void creat_new_account()
{
	

//BankAccountNumber++;
//account->account_status="Available";
}
void Enter_Name(char *full_name)
{
	int num_space; //number of spaces in full name //Ex:souad gamal muhammed sabry ->3spaces
	int size;
	char **nam=&full_name;
	//*nam="fatt";
	printf("Enter your Full name :\n");
	scanf("%d",&nam);
	size =sizeof(*nam)/sizeof(*nam[0]);
	printf("size %d\n",size);
	for(int i=0;i<size;i++)
	{
		printf("%d",nam[i]);
	
	}
	
	
}