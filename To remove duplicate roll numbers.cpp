#include<stdio.h>
int main()
{
	int rollno[10]={1,1,2,3,4,5,5,6,6,7};
	for(int i=0;i<10;i++)
	{
		if(rollno[i]==rollno[i+1])
		{
			continue;
		}
	printf("%d\n",rollno[i]);
	
	}
	}

