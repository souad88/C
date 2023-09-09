//Auther :Souad Gamal
//------
//first username=souad
//first pass =12345
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <time.h>
#include "bank.h"

typedef struct 
{
	char full_name[200]; 
	char full_address[200];
	int national_id[14]; 
	float age;
	int bank_id[14]; 
	int guardian;  
	long double balance;	
	char password[10]; 
	//char Gaurdian_full_name[100];
	int  Gaurdian_national_id[14]; 
	char state_[100];
	bool account_active;
} Bank_Account;

void main(void)
{
	int nm; //pointer to full name
	int *p; //pointer to bank account id
	char * adrss; //pointer to address
	float age_;	 
	static bool age_is_less_than_21=false;
	char *rand_pass;
	int *National_ID_;
	int *Gaurdian_ID_;
	bool check_id;
	int k;
	int i=0; //first Bank Account
	int Admin_window; 
	int Open_existing_account_window;
	double long cash;
	int lenth=10;
	BankAccountNumber=100;
	int chose_window;   	
	// creating an array of bank account of size n
    Bank_Account *account= (Bank_Account*)malloc(sizeof(Bank_Account*) + BankAccountNumber * sizeof(int));
	
	//switch between modes admin and client

	
	printf("For Admin please enter 1 ,For Client please enter 0\n");
	int chos_admn_client;
	scanf("%d",&chos_admn_client);
	//1-admin switch
	if(chos_admn_client==1) 
	{
		printf("Welcome in Admin Window\n");
		//_ADMN_Window_info();
		chose_window=choose_admin_window();//return wich admin window 
		if(chose_window==1)
		{
				printf("Welcome in Creating Account Window\n");
			
				//1-creat new account()
				nm=Enter_Name();
				if(nm==1)
					{	
	        
						//bank id :
						p=bank_id_();	   //Assign Return value from func to A pointer     //copy in an array
						for(int j=0; j<14; j++)
						{	
							account[i].bank_id[j]=*p+j; //copy value of Pointer into bank_id of account number i
						}
		//age:
						age_=Enter_age(); 
						account[i].age=age_; 
						if(age_<21)
						{
							//age_is_less_than_21=true;
							printf("We need a guardian for this account \n");
							printf("Please Enter Gaurdian National Id\n");
							//Gaurdian_National_ID:
							Gaurdian_ID_=national_id();	   //Assign Return value from func to A pointer     //copy in an array
							for(int j=0; j<14; j++)
							{	
								account[i].Gaurdian_national_id[j]=*Gaurdian_ID_+j; //copy value of Pointer into bank_id of account number i
							}
			 
						}
						else
						{ 
								printf("Enter your National Id :\n");
								//National_ID:
								National_ID_=national_id();	   //Assign Return value from func to A pointer     //copy in an array
								for(int j=0; j<14; j++)
								{	
									account[i].national_id[j]=*National_ID_+j; //copy value of Pointer into bank_id of account number i
								}
						}	 
	   	
						//full address: 
						adrss=ful_address();
						for(int j=0; j<strlen(adrss); j++)
						{	
							account[i].full_address[j]=*p+j; //copy value of Pointer into bank_id of account number i
						}
						account[i].account_active=true; //Activate Account
						printf("Your Account has been activated\n");
						rand_pass=Random_Password();			
						account[i].balance=balancee();//copy Func_result into Bank_Account of Number i;
						//Random_Password				    	  
						for(int j=0; j<lenth; j++)
						{	
							account[i].password[j]=*rand_pass+j; //copy value of Pointer into full nam of account number i
						}
        					
	  
						BankAccountNumber++;
						i++; //increase number of accounts
					      
	 

         	 }
		}
		else if(chose_window==2)
		{
				printf("Welcome in Opening account window \n ");
				//2-open an existing account()
				printf("choose window :- 1- Make Transaction. 2-Change status. 3-Get_Cash. 4-Deposit_In_Account. 5-return to main menu\n");	
				scanf("%d",&Open_existing_account_window);
	
				if(Open_existing_account_window==1)
				{	
					for(int j=0; j<BankAccountNumber; j++) //Loop on Bank accounts_ID
						{  
      	
		    				check_id=check_id_(account[j].bank_id);
							if(check_id==true)
							{
								k=j; //store number of bank account of ID
								if((account[i].account_active=true)&&(account[k].account_active=true))
								{	  
									printf("Enter Money to transefer it to the Account\n");
									cash=balancee();
									if(account[k].balance<=cash)
									{
										account[k].balance+=cash;
										printf("Balance has been transefered\n");
									}
									else
									{
										printf("you cannot complete this transaction !\n");
										break;
									}		 		     		       
        
								}
								else
								{
									printf("One of this Accounts are not Active !\n");
								}		
		
								break;
							}//if_1	
							else if(check_id==false)
							{
								continue;
							}
	
						}	 //for loop
					}
				
 //////////////////////////////////////2-change acconut status/////////////
				else if(Open_existing_account_window==2)
				{
					int s=account_status();
					if(s==1)
					{
						printf("your account has been activated\n");
						account[i].account_active=true;
					}
					else if(s==2)
					{
						printf("your account has been Restricted\n");
						account[i].account_active=false;
					}
					else
					{
						printf("your account has been Closed\n");
						account[i].account_active=false;
			
					}			
				}
	//3-get cash
				else if(Open_existing_account_window==3)
				{
					printf("Enter your bank_id");
					for(int j=0; j<BankAccountNumber; j++) //Loop on Bank accounts_ID
					{	  
      	
						check_id=check_id_(account[j].bank_id);
						if(check_id==true)
						{
							k=j;
						}
						break;
					}
					printf("what Cash you want\n");
					cash=balancee();
					account[k].balance-=cash;
				}
		//4-Deposit_In_Account
				else if(Open_existing_account_window==4)
				{
		
					printf("Enter your bank_id");
					for(int j=0; j<BankAccountNumber; j++) //Loop on Bank accounts_ID
					{  
      	
						check_id=check_id_(account[j].bank_id);
						if(check_id==true)
						{
							k=j;
						}
						break;
					}
					printf("what Cash you want to add\n");
					cash=balancee();
					account[k].balance+=cash;
				}
//5-Return main menu 
				else if(Open_existing_account_window==5)
				{
					////
				}	
			
			
		}
		else if(chose_window==3)
		{
					printf("You will exit the system now\n");
					//3-Exit_system()
						//exit
			        printf("Exiting Program\n");
		        	exit(0);
		} 		
	}
	
    //2-client switch
	else if(chos_admn_client==0) //client
	{
		printf("Welcome in Client window \n");
	}
	else
	{
		printf("Try Again\n");
		
	}

 }
