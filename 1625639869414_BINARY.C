#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,n,high,low,s,mid,pos;
	clrscr();
	printf("enter the limit\n");
	scanf("%d",&n);
	printf("\nenter the numbers\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the number to be searched\n");
	scanf("%d",&s);
	low=0;
	high=n;
	pos=-1;
	while(low<=high)
	{
	     mid=(high+low)/2;
	     if(a[mid]==s)
	     {
		    pos=mid;
		    printf("%d is found at %d",s,pos);
		    break;
	     }
	     else
	     {
		   if(a[mid]>s)
		   high=mid-1;
		   else
		   low=mid+1;
	     }

	}
	if(pos==-1)
	printf("\nelement not found");
	getch();
}