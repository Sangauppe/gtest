#include<stdio.h>
void big2()
{
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	if(num1 > num2)
	{
		printf("%d is bigger\n",num1);
	}
	else
	{
		printf("%d is bigger\n",num2);
	}
}
