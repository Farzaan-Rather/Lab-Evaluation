#include <stdio.h>
int main () {
int num1,num2;
char c;
printf("\nEnter +,-,%,/,*");
scanf("%c",&c);
printf("\nEnter num1");
scanf("%d",&num1);
printf("\nEnter num2");
scanf("%d",&num2);
switch (c) {
case '+' : printf("\n%d + %d = %d",num1,num2,num1+num2);
break;
case '-' : printf("\nAddition of two numbers : ",num1-num2);
break;
case '%' : printf("\nAddition of two numbers : ",num1%num2);
break;
case '/' : printf("\nAddition of two numbers : ",num1/num2);
break;
case '*' : printf("\nAddition of two numbers : ",num1*num2);
break;
defaul:
    printf("Nothing or wrong operator ");
}
return 0;
}
