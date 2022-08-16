//Program 1// 
/*#include<stdio.h>
int main()
{
    printf("");
    return 0;
}*/
//Program 2// 
/*#include<stdio.h>
int main(){
    int x;
    x=123;
    printf("my age is %d years old",x);
    return 0;
}*/
//Program 3 //
/*#include<stdio.h>
int main(){
    printf("my name is mannu \n");
    printf("and your phone number is 800xxxxxx7");
}*/
//Program 4//
/*#include<stdio.h>
int main(){
    int x=19;
    int y=22;
    char name[] ="Mahendra Singh";
    char* grade ="A";
    printf("Your name is %s \n",name);
    printf("and your age is %d thats right\n",x);
    return 0;
}*/
//PROGRAM 5//
/*#include<stdio.h>
int main(){
    char name[]="Mahendra singh";
    int x=21;
    char* grade="A";
    int age=19;

    printf("My name is %s\n",name);
    printf("and my age is %d years old\n",age);
    return 0;
}*/


/*#include<stdio.h>
int main(){
    int year;
    printf("The year is leap year or not\n");
    scanf("%d",&year);
    (year%4==0 && year%100!=0) ? (printf("The year is leap year")):(printf("Year is not leap year"));
     return 0;
}*/



/*#include<stdio.h>
int main(){
    float x,y,a;
    printf("Enter two Variables :\n");
    scanf("%f%f",&x,&y);
   
    printf("Afer Swaping variable 1st is %f and variable 2nd is %f\n",x,y);
    a=x;
    x=y;
    y=a;
    printf("Before Swapping Variable 1st is %f and Vriable 2nd is %f\n",x,y);

    return 0;


}*/

/*#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two Variable\n");
    scanf("%d%d",&a,&b);

    printf("Afer Swaping variable 1st is %d and variable 2nd is %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Before swapping variable 1st is %d and variable 2 is %d\n",a,b);
    return 0;
}*/


/*#include<stdio.h>
int main(){
    int num;
    printf("Enter Number to check weither number is odd or even");
    scanf("%d",&num);
    (num%2==0) ? (printf("This number is even")):(printf("This number is odd"));
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value two value ");
    scanf("%d%d%d",&a,&b,&c);
    

}*/

// #include<stdio.h>
// int main(){
//     int a,b,c=0;
//     printf("Enter first number:",a);
//     scanf("%d",&a);
//     printf("Enter second number:",b);
//     scanf("%d",&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("After swapping \n");
//     printf("a=%d\n",a);
//     printf("b=%d\n",b);

//     return 0;
// }

/*#include<stdio.h>
int main(){
    int number;
    printf("enter a number:",number);
    scanf("%d",&number);
    if(number%2==0)
    printf("%d is even",number);
    else
    printf("%d is odd",number);

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
/*#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("enter value for a :",a);
    scanf("%d",&a);
    printf("enter valyue for a :",b);
    scanf("%d",&b);
    printf("Before swapping \n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    c=a+b;
    a=c-b;
    b=c-b;
    printf("After swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;

}*/

#include<stdio.h>
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
}
