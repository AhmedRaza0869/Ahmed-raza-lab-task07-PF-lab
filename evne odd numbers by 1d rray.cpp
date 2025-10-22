#include<stdio.h>
int main()
{
	int id[10];
	printf("Enter Student IDs:-\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d", & id[i]);
	}
for(int i=1;i<10;i++)
{
	if(id[i]%2==0)
	{
		printf("Following even numbers are : %d\n",id[i]);
	}
}
for(int i=1;i<10;i++)
{
	if(id[i]%2==1)
	{
		printf("Following odd numbers are : %d\n",id[i]);
	}
}
return 0;
}

