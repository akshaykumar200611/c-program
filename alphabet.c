#include <stdio.h>

int main() {
char a;
printf("enter the value :/n");
scanf("%c",&a);
int result=(a>='A'&&a<='Z');
printf("the %d is in range of  A to Z is %d",a,result);
}