#include <stdio.h>
#include <stdlib.h>
  
// defining struct
typedef struct 
{
    int id;
	int num;	
} array_struct;
  
int main()
{
	int n_element=4;
	n_element++;
	
      // creating an array mebmer of size 10
    array_struct *arr_str= (array_struct*)malloc(sizeof(array_struct*) + n_element * sizeof(int));
      
    //increase elements
	n_element++;
	arr_str+=n_element*sizeof(int);
    // inserting elements
    for (int i = 0; i < n_element; i++)
		{
        
		arr_str[i].num=i;
		arr_str[i].id=i+100;		
	    }
  
    //  printing elements
    
    printf("Array of dynamic array of size %d:\n",n_element);
    for (int i = 0; i < n_element; i++)
		{
        printf("%d,\n", arr_str[i].num);
				
        }
	 printf("Array of ID :\n");
    for (int i = 0; i < n_element; i++) 
	{
		printf("%d,",arr_str[i].id);	
    }
    return 0;
}