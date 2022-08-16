/*#include<stdio.h>
int main(){
    char E = 100;
    printf("%c\n",E);
    return 0;
}*/
//Important Type::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

/*#include<stdio.h>
int main(){
    char grade;
    printf("Enter Your Grade to know your result\n");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
        printf("Give him a applose");
        break;
        case 'B':
        printf("You did good!");
        break;
        case 'C':
        printf("You did okay!");
        break;
        case 'D':
        printf("Atleast It's not E grade");
        break;
        case 'E':
        printf("Sorry to say you have to give another shot to go forward");
        break;
        default:
        printf("Please enter a valid grade");
    }
    return 0;
}*/
//****************************************************** TODAYS WORK 02-11-21*****************************************************************************************************************************
/*#include<stdio.h>
int main(){
    int x;
    printf("Enter a number to check it is divisible by 5 and 11 or not");
    scanf("%d",&x);
    if(x%5==0 && x%11==0)
    {
        printf("This number is divisible by 5 as well as by 11 too");
    }
    return 0;


}*/

/*#include<stdio.h>
int main(){
    char m;
    printf("Enter any Character\n");
    scanf("%c",&m);
    if(m>='a' && m<='z' || m>='A' && m<='Z')
    {
        printf("%c is alphabet\n",m);
    }
    else if(m>='0' && m<='9')
    {
        printf("%c is Digit\n",m);
    }
    else
    {
        printf("%c is a special character\n",m);
    }
    return 0;
    
}*/

/*#include<stdio.h>
int main(){
    int s,c,p;
    printf("Enter Selling price");
    scanf("%d",&s);
    printf("Enter Cost price");
    scanf("%d",&c);
    if(s>c){
        p=((s-c));
        printf("%d is profit",p);
    }
    else if(s<c){
        p=((s-c));
        printf("%d is loss",p);
    }
    else
    {
      printf("Nothing gain or loss");

    }
    return 0;
}*/

//**************************************
/*#include<stdio.h>
int main(){
    int a,b,per;
    printf("Enter selling price");
    scanf("%d",&a);
    printf("Enter Costing Price");
    scanf("%d",&b);
    if(a>b)
}*//********************************************

/*#include<stdio.h>
int main(){
	int a,b; int pp,lp;
	printf("enter the selling price");
	scanf("%d",&a);
	printf("enter the cost price");
	scanf("%d",&b);
	if(a>b)
	{
		pp=((a-b)*100)/b;
		printf("%d is profit percentage\n",pp);
	}
	else if(b>a)
	{
		lp=((b-a)*100)/b;
		printf("%d is loss percentage\n",lp);
	}
	else 
	printf("neither profit nor loss");
}*/

/*#include<stdio.h>
int main(){
    char grade;
    printf("Enter Your Grade to know your result\n");
    scanf("%c",&grade);

    switch(grade){
        case 'O':
        printf("you scored 97 above");
        break;
        case 'E':
        printf("you scored 85 above");
        break;
        case 'A':
        printf("you scored 77 above");
        break;
        case 'B':
        printf("you scored 66 above");
        break;
        case 'D':
        printf("you scored 55 above ");
        break;
        case 'F':
        printf("You Scored below 50 you are fail");
        default:
        printf("Please enter a valid grade");
    }
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st value:\n");
    scanf("%ld",&a);
    printf("Enter 2nd value:\n");
    scanf("%ld",&b);
    if(a>b)
    {
        printf("%ld is bigger than %ld ",a,b);
    }
    else if(a<b)
    {
        printf("%ld is bigger than %ld ",b,a);
    }
    else
    {
        printf("Enter only integers");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a;
    printf("Please Enter a number:\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is a +ve Number",a);
    }
    else if(a<0)
    {
        printf("%d is a -ve Number",a);
    }
    else
    {
        printf("%d is ZERO",a);
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter value for num1",num1);
    scanf("%d",&num1);
    printf("enter value for num2",num2);
    scanf("%d",&num2);
    printf("enter value for num3",num3);
    scanf("%d",&num3);
    if(num1<num2 && num1<num3)
    {
        printf("%d in smallest",num1);
    }
    else if(num2<num3)
    {
        printf("%d is smallest",num2);
    }
    else
    {
        printf("%d is smallest",num3);
    }
    return 0;
}*/
/****************************************************************  09-12-21 Thursday ***********************************************************************************************************************
/*#include<stdio.h>
int main(){
    int i,n;
    int t1 = 0;
    int t2 = 1;
    int nterm = t1 + t2;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("Fibonacci Series: %d  %d ",t1,t2);

    for (i=3 ; i<=n ; ++i)
    {
        printf("%d\t",nterm);
        t1 = t2;
        t2 = nterm;
        nterm = t1 +t2;
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int i,sum=0;
    do{
        printf("Enter Number to add \n");
        scanf("%d",&i);
        sum=sum + i;
    }while(i!=0);
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter no. of star to make half pyramid :");
    scanf("%d",&a);
    for (n = 1; n>=a ; n++){
        for (b=1; b<=n ;b++){
         printf("* ");
        }
        printf("\n");

        }
    return 0;
}*/

// #include<stdio.h>
// int main(){
//     int i,a,b=1;
//     printf("Enter Number: \n");
//     scanf("%d",&a);
//     for(i=1; i<=a; ++i){
//         b*=i;
//     }
//     printf("enter Factorial %d ",b);
//     return 0;

// }

/*#include<stdio.h>
int main(){
    int i,x,y=1;
    printf("ENTER A NUMBER TO FIND FACTORIAL: \n");
    scanf("%d",&x);
    for(i=1; i<=x; i++){
        y*=i;
    }
    printf("The factorial of entered number is %d",y);
    return 0;
}*/
#include <stdio.h>
int main(){
    int i;
    for (i = 0; i < 10; i++)
    {
    printf(i);
    }
    
}