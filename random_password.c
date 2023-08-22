#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <time.h>
void Random_Password();
 
void main (void)
{
	Random_Password();
	
}
void Random_Password()
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
   pass=*pas;
  
  }