//with return type without parameter
#include<stdio.h>
int add();int main()
{
	int c;
	c=add();
	printf("c=%d",c);
	return 0;
}
int add()
{
int a,b,sum;
printf("");
scanf("%d%d,&a,&b");
sum=a+b;
return sum;
}