#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if('a'>=65&&'a'<=90)
	{
		printf("Upper case letter");
		if('a'>=97&&'a'<=122)
	{
		printf("Lower case letter");
	}
	if('a'>=48&&'a'<=57)
	{
		printf("Digit");
	}
	else if('a'==32)
	{
		printf("Space");
	}
}
}
