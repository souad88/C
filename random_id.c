//Auther Souad Gamal
#include <stdio.h>
void id_random();
void main(void) 
{
   id_random();
	
}
void id_random()
{
	static int i=13;
    static int id[14]={1,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	//id[0]=1;
	 
    id[i]=id[i]+1;
    if(id[i]==9)
	 {
		--i;
	 }
	
	printf("your Bank ID is : ");
	for(int i=0; i<14;i++)
	{		
	   printf("%d",id[i]);
	}
	
}

