/*Auther :Souad gamal */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Enter_Name(char*);
void creat_new_account();
typedef struct 
{
    char full_name[50]; //four name
	
} Bank_Account;

void main (void)
{
	creat_new_account();
	
}
void creat_new_account()
{
	int BankAccountNumber=1;
	Bank_Account *account= (Bank_Account*)malloc(sizeof(Bank_Account*) + BankAccountNumber * sizeof(int));
    BankAccountNumber++;
    //account->account_status="Available";
    Enter_Name(account->full_name);
}
void Enter_Name(char *full_name)
{
	char nam[50];
	int length;
	int space=0;
	printf("Enter full name first four name\n");
	scanf("%[^\n]",nam);
	//scanf("%s",nam);
	length=strlen(nam);
	///
	strcpy(full_name,nam);
    for(int i=0; i<length;i++)
	   { //calc_space
			
		  if(nam[i]==' ')
		  {
			space++;
			
		   }
		
	    }
		for(int i=0; i<length;i++)
	    { 
		   printf("%c\n",*(nam+i));
	      
	    }
		
	 for(int i=0; i<length;i++)
	   { 
		
	       printf("%c\n",*(full_name+i));
	    }
printf("%d\n",space);
}