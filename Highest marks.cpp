#include<stdio.h>
int main()
{
	int marks[10];
	int max=0;

	printf("Enter your students marks:\n");
	for ( int i=0;i<10;i++)
	{
		scanf("%d", &marks[i]);
		
	}
	for(int i=0;i<10;i++)
	{
		
		if(marks[i]>max){
		max=marks[i];
		
	}
	
	}
	printf("Max Marks is %d ",max);
}

