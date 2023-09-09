#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <time.h>

/////////////////
/*
void _ADMN_Window_info()
{
	int admin_pass=12345;
	int pass;
	char admin_username[50]="souad";
	char username[50];
	char choose;
	
	printf("Enter Admin user name and paswword\n");
	bool nm_correct=check_ADMN_nam(admin_username);
		if(nm_correct)
		{
		  bool pas_correct=check_ADMN_pass(admin_pass);
		  if(pas_correct)
		  {
			  printf("Welcome in Admin mode");
			  
		  }
		  else
		  {
			  printf("Invalide Password");
			  printf("for try again press 0,for End press 1");
			  scanf("%d",&choose);
			  if(choose==0)
			  {
				  _ADMN_Window_info();
			  }
			  else
			  {
				 printf("End");
				  ////nothing
			  }  
		  }  
			
		}
		else
		{
			printf("Invalide User name");
		    printf("for try again press 0,for End press 1");
		
			scanf("%d",&choose);
			  if(choose==0)
			  {
				  _ADMN_Window_info();
			  }
			  else
			  {
				 printf("End");
				  ////nothing
			  }  
		
		}
	
}
bool check_ADMN_nam(char admin_username[])
{
	bool is_correct;
	char username[50];	
	printf("Admin_Username:");	
	scanf("%s",&username);
	int o= strcmp(admin_username,username);
	if(o==0)
	{
		is_correct=true; 
	}
	else
	{
		is_correct=false;
	}
 return is_correct;	
}
////ADMIN PASSWORD
bool check_ADMN_pass(int admin_pass)
{
	bool is_correct;
	int pass;
	printf("Admin_password:");	
    scanf("%d",&pass);		
	if(admin_pass==pass)
	 {
		is_correct=true;			
	 }
	else
	{
	     printf("Enter try again\n");
		is_correct=false;										
	}	
	
return is_correct;
}
*/
int choose_admin_window()
{
	int chos_window;
	printf("Press 1 for Create New Account\n");
	printf("Press 2 for Open An Existing Account\n");
	printf("Press 3 for Exit System\n");
	scanf("%d",&chos_window);
	return chos_window;
}
////////////////////
int Enter_Name()
{    
    	
	char nam[200];
	int length;
	int space=0;

	printf("Enter full name first four name\n");
	gets(nam);
	//scanf("%c",nam);
	scanf("%[^\n]s",nam);
	
	length=strlen(nam);
    for(int i=0; i<length;i++)
	   { 			
		  if(nam[i]==' ')
		   {
		    	space++;
			
		   }
		
	    }

    if (space==3)
    {
	   return 1;
    }
    else
    {
	   printf("not valid  try again\n");
	   return 0;
	}	
 
}

char* ful_address()
{
	
	
	static char n[200];
	//printf("Enter your Full Address , your street and city\n ");
	printf("Your Full address :\n");
	scanf("%s",n);
	return n;
}	
int * national_id()
{
	int n=1;
	//printf("Enter your national id\n");
	static int id[14];
	
	for(int i=0; i<14; i++)
	{
		printf("number %d:\n",n);
        scanf("%d",&id[i]);
		n++;
	}
	

	return id;
	
}
float Enter_age()
{
	static float age;
	 
	static bool age_is_less_than_21=false;
	 
	 printf("Enter your age\n");
	 scanf("%f",&age);
	 return age; 
	
}
 
long double balancee()
{
	long double balanc;
	printf("Enter your Balance\n");
	scanf("%Lf",&balanc);
	return balanc; //copy bank account
	
}
char *Random_Password()
 {
	
   int desired_length=10;
   char random_chars[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
   char random_pass[desired_length+1];
   srand(time(0));
   
    for(int i=0; i<desired_length; i++)
	{
		int random_index=rand()%(sizeof(random_chars)-1);
		random_pass[i]=random_chars[random_index];
	}
   
   random_pass[desired_length]='\0';
   printf("your Password : %s\n",random_pass);
   char *pas=random_pass;
   //pass=*pas;
   return pas;
  }
int *bank_id_()///////////////////////////////////////////////////
{
	static int i=13;
    static int id[14]={1,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	//id[0]=1;
	 
    id[i]=id[i]+1;
    if(id[i]==9)
	 {
		--i;
	 }
	printf("your Bank ID is : \n");
	for(int i=0; i<14;i++)
	{		
	   printf("%d",id[i]);
	}
	printf("\n");
 return id;
}


bool check_id_(int id[])
{
	int id_new[14];
	char flag=0;
	printf("Enter Bank _ID to transfer money \n");
	for(char i=0; i<14; i++)
	{
		printf("Enter number %d:\n",i);
        scanf("%d",&id_new[i]);
		
	}
	for(char i=0; i<14; i++)//Check ID
		{
			if(id_new[i]==id[i])
			{
			  flag++;
			}
		
		}
	if(flag==14)
	{   
         printf("ID is Exist\n");
		return true;
	}
	else
	{
		printf("ID Cannnot be Found try in another time \n");
		return false;
	}
}	
int account_status()
{    
    int s;
	printf("change status of your account to 1-Active. 2-Restricted. 3-closed\n");
	scanf("%d",&s);
	return s;
}