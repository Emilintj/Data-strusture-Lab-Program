#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,n,s;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
		printf("the element %d is in the location of %d",s,i+1);
		break;
		}
	}
		if(i==n)
		{
		printf("not  found");
		}
		getch();
}

