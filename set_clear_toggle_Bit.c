//Operations on Bit (Toggle_Bit/Clear_Bit/Set_Bit)
//1- SET_BIT : OR-Operation (1 OR with any bit) shifted by the index of the bit
//				0|1=1    0-->1
//				1|1=1    1-->1
//2-Clear_Bit : AND-operation (0 AND any bit) shifted by index of the bit 
//				1&0 =0   1-->0
//				0&0=0    0-->0
//3-Toggle_Bit : XOR-oper (1 XOR anybit) shifted by index of bit
//				0|1=1   0-->1
//				1|1=0	1-->0
///Shift the result of the operation to nth-bit of binary_number
 //number=number (operation)<<nth(index of bit)

#include<stdio.h>
int setBit(int,int); //where number is the number that contains bits, n=index of bit that you want to clear, set or toggle bit 
int clearBit(int,int);
int toggleBit(int,int ); 

void main(void)
{
	int number =6; int n=1;
	int s_n=setBit(number,n);
	printf("%d\n",s_n);
	int c_n=clearBit(number,n);
	printf("%d\n",c_n);
	int t_n=toggleBit(number,n);
	printf("%d\n",t_n);
	
}
int setBit(int number,int n)
{
	return(number|(1<<(n-1)));
}
int clearBit(int number,int n)
{
	return(number&(~(1<<(n-1)))); //~1=0 shifted to the index of bit
}
int toggleBit(int number,int n)
{
	return (number^(1<<(n-1)));
}
/*
int getBit(int number,int n)
{
  return(number & (1 <<n));
}
*/