/*#include<stdio.h>
int Areal()
{
    int l,b,area;
    printf("Enter Lenght of Rectangle : ");
    scanf("%d",&l);
    printf("Enter width of Rectangle :");
    scanf("%d",&b);
    area = l*b;
    printf("Area of rectangle is %d",area);
    return area;
}
int main()
{
    Areal();

    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int squaroot()
{
    float x,result;
    printf("Enter value: ");
    scanf("%f",&x);
    result=sqrt(x);
    printf("Square root of %f is %f",x,result);
    return 0;
}
int main()
{
    squaroot();
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int man(char st[])
{
    int len;
    len = strlen(st);
    for(len;len>=0;len--)
    {
        putchar(st[len-1]);
    }
}
int main()
{
    char name[]="tesB ehT sI margorP C";
    man(name);
    return 0;
}*/

/*#include<stdio.h>
int Fibonacci(){
    int i,n;
    int t1 = 0;
    int t2 = 1;
    int nterm = t1 + t2;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);

    for (i=3 ; i<=n ; ++i)
    {
        printf("%d\t",nterm);
        t1 = t2;
        t2 = nterm;
        nterm = t1 +t2;
    }
    return 0;
}
int main(int t1,int t2)
{
    printf("Fibonacci Series: %d  %d ",t1,t2);
    Fibonacci();
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int squaroot()
{
    float x,result;
    printf("Enter value: ");
    scanf("%f",&x);
    result=sqrt(x);
    printf("Square root of %f is %f",x,result);
    return 0;
}
int main()
{
    squaroot();
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a,b=1,n;
    printf("Enter no. of star to make half pyramid :");
    scanf("%d",&a);
    for (n = 1; n<=a ; n++){
        for (b=1; b<=n ;b++){
         printf("* ");
        }
        printf("\n");

        }
    return 0;
}*/
/*TODAY'S TEST AND VIVA [ 16 - 12 - 21 ]  */
#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter no. of star to make half pyramid :");
    scanf("%d",&a);
    for (n = 1; n>=1 ; ++n){
        for (b=1; b<=n ;b++){
         printf("* ");
        }
        printf("\n");

        }
    return 0;
}

/*#include<stdio.h>
int main(){
    char grade;
    printf("Enter Your Grade to know your result\n");
    scanf("%c",&grade);

    switch(grade){
        case 'O':
        printf("You have scored above 97 percentile");
        break;
        case 'E':
        printf("You have scored above 91");
        break;
        case 'A':
        printf("you have scored above 87");
        break;
        case 'B':
        printf("you have scored above 78");
        break;
        case 'C':
        printf("You have scored below 70");
        break;
        case 'D':
        printf("You have scored below 50");
		break;	
        default:
        printf("YOU ARE FAIL GO REVISE THE SYLLABUS AND GIVE EXAMS AGAIN");
    }
    return 0;
}*/

/*#include<stdio.h>
int main(){
	int a,b,s=0,m=1;
	printf("Enter any three digit numric value");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		s=a+b;
		m=a*b;
		a=a/10;
	}
		if(s==m)
			printf("The No. is a spy number");
		
		else
			printf("The No. is Not a spy number");	
		
	return 0;
}*/

/*#include<stdio.h>
int main(){
	
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
