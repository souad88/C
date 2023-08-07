#include <stdio.h>
#include <stdlib.h>
typedef struct node //values of node
{
	int val;
	struct node *next; //pointer of type node to point to the next pointer
	
}node_t;
int number_nodes;
void print_linked_list(node_t *);
void add_node_last(node_t *,int );
void add_node_first(node_t **,int );
void remove_by_index(node_t **,int);
void main(void)
{

    node_t *head=NULL; //head =null 1ST node
	head=(node_t *) malloc(sizeof(node_t)); //Pointer to another pointer with dynamic allocation	
	head->val=1;
	head->next=(node_t *)malloc(sizeof(node_t)); //2ND NODE
	head->next->val=2; //another node
	head->next->next=NULL; //it refers to the next third one
	add_node_last(head,4);
	number_nodes=number_nodes+1;
	add_node_first(&head,7);
	number_nodes=number_nodes+1;
	print_linked_list(head);
	remove_by_index(&head,0);
	number_nodes=number_nodes-1;
	printf("New linked list after removing 0 in the list\n");
	print_linked_list(head);
	remove_by_index(&head,1);
	number_nodes=number_nodes-1;
	printf("New linked list after removing 1 in the list\n");
	print_linked_list(head);
	printf("New linked list after removing 3 in the list\n");
	remove_by_index(&head,3);
	number_nodes=number_nodes-1;
	print_linked_list(head);
	
}
//print linked list
void print_linked_list(node_t *head)
{
	while(head !=NULL)
	{
		printf("%d\n",head->val);
		head=head->next;
		
	}
	
}
//add node to the end of the list
void add_node_last(node_t *head,int val)
{
	while(head->next !=NULL) //make head points to the last one
	{
		head=head->next;
	}
	//add a new node
	head->next=(node_t *)malloc(sizeof(node_t));
	head->next->val=val;
	head->next->next=NULL;
}
//add to begine of the list
void add_node_first(node_t **head,int val)
{
	
	node_t *node_first;
	node_first=(node_t *)malloc(sizeof(node_t));
	node_first->val=val;
	node_first->next=*head;
	*head=node_first;
	
}
//remove an element by it's index
 void remove_by_index(node_t **head,int n)
 {
	 
	 node_t *nw_node=NULL;		 	     	 
	 int index_val;
	 //if Node is in the head
	 if(n==0)
	 {
		 node_t *next_=NULL;
		 next_=(*head)->next;
		 free(*head);
		 *head=next_;
	
	 }
	 
	 node_t * current=*head;
	 		
	 
	 for(char i=0; i<n; i++)
	 {
		 
		 if(i<n-1)
		 {
			 current=current->next;
		 }
		 else
		 {
			 nw_node=current->next;
	         index_val=nw_node->val;
             current->next=nw_node->next;
	         free(nw_node);
			
		 }	 
	 } 
	
 }
 