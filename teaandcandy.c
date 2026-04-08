#include <stdio.h>

int main() {
	int candy,tea;
	printf("enter the amount of tea and candy /n");
	scanf("%d%d",&candy,&tea);
	if(candy<5||tea<5)
	{
	    printf("0");
}
else if(tea>=2*candy||candy>=2*tea)
{
    printf("2");
}
else
{
    printf("1");
    
}
}