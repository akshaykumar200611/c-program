#include <stdio.h>

int main() {
	int cigers,weekend;
	printf("enter the number of cigers :\n");
	scanf("%d",&cigers);
	printf("enter T for not weeekend\n enter F for weekend");
	scanf("%d",&weekend);
	if (weekend)
	{
	    if(cigers>=40)
	    {
	        printf("sucess");
	    }
	    else
	    {
	        printf("fail");
	    }
	}
	else
	{
	    if(cigers>=40&&cigers<=60)
	    {
	        printf("sucess");
	    }
	    else
	    {
	        printf("fail");
	    }
	}