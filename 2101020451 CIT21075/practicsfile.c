#include<stdio.h>
int main(){
    int num1,num2,num3,num4,num5;
    printf("Your 1st no.\n");
    scanf("%d",&num1);
    printf("Your 2nd no.\n");
    scanf("%d",&num2);
    printf("Your 3rd no.\n");
    scanf("%d",&num3);
    printf("Your 4th no.\n");
    scanf("%d",&num4);
    printf("Your 5th no.\n");
    scanf("%d",&num5);

    int sum = num1+num2+num3+num4+num5;
    int Average = (num1+num2+num3+num4+num5)/5;

    printf("The sum of 5 numbers is %d\n",sum);
    printf("The Average of 5 numbers is %d\n",Average);


    return 0;
}
