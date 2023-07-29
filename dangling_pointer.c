//dangling pointer when variable is not static
//not dangling when pointer return with static variable
#include <stdio.h>
int *fun_dangling()
{
	//x is local variable _not static
	int x=5;
	return &x;

}
int *fun_not_dangling()
{
	static int y=3;
	return &y;
}
void main(void)
{
	int *p_dang=func_dangling();// dangling because local
 	printf("%d",*p_dang);
	int *p_not_dang=fun_not_dangling();// not dsngling because static var
	printf("%d",*p_not_dang);
}
