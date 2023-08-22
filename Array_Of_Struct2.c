//Auther Souad Gamal
#include <stdio.h>
#include<stdlib.h>
// defining struct
void n_st();
void enter_name(char *);
   int n_element=1;
   int i=0;
typedef struct 
{
    int id;
	int num;
    char nam[100]; 	
} array_struct;
 void pass_struct(array_struct **); 
int main()
{
	
	n_st();
    return 0;
}
void n_st()
{   


	n_element++;
	
      // creating an array mebmer of size 10
    array_struct *arr_str= (array_struct*)malloc(sizeof(array_struct*) + n_element * sizeof(int));
      pass_struct(**arr_str);
    //increase elements
	n_element++;
	arr_str+=n_element*sizeof(int);
	printf("enter name");
	enter_name(arr_str[i].nam);
    // inserting elements
    //
	/*for (int i = 0; i < n_element; i++)
		{
        
		arr_str[i].num=i;
		arr_str[i].id=i+100;		
	    }
  */
    //  printing elements
    
    printf("Array of dynamic array of size %d:\n",n_element);
    for (int i = 0; i < n_element; i++)
		{
        printf("%d,\n", arr_str[i].num);
		printf("%s\n",arr_str[i].nam);		
        }
	 printf("Array of ID :\n");
    for (int i = 0; i < n_element; i++) 
	{
		printf("%d,",arr_str[i].id);	
    }
	i++;
}
void enter_name(char *n)
{
	*n='h';	
}