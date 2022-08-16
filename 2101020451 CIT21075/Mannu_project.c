//Question.1//
//%d for integer,
//%c for A-Z character,
//%s for string denoted by char[],
//%u for undefined data,
//%LD for long double and double,
//%f for floating points
/*#include<stdio.h>
int main(){
    char name[]="Mahendra Singh"; 
    int age=19;                
    char rollno[]="CIT21075";          
    char branch[]="CS and IT";          
    char Play[]="I love to play football";       

    printf("My name is %s\n",name);
    printf("I am %d years old\n",age);
    printf("My alloted roll number is %s as CIT is to mention that ",rollno);
    printf("I am in %s branch\n",branch);
    printf("%s because I enjoy Playing football",Play);

    return 0;
}*/
//Question 2//
/*#include<stdio.h>
int main(){
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    printf("ASCII value of c=%d",c);
    return 0;

}*/
//Question 3//
/*#include<stdio.h>
int main(){
    
    float celsius,fahrenheit;
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius*9/5) + 32;     //Celsius to Fahrenheit Conversion formula//

    printf("%f celsius = %f fahrenheit",celsius,fahrenheit);

    return 0;
}*/






//Question 4//
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter a number\n");
    scanf("%d",&num1);
    printf("enter another number");
    scanf("%d",&num2);
    int sum= num1 + num2;
    int sub = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;

    printf("sum of num1 and num2 = %d\n",sum);
    printf("substraction of num1 and num2 = %d\n",sub);
    printf("multiplication of num1 and num2 = %d\n",multiplication);
    printf("division of num1 and num2 = %d\n",division);

    return 0;
}
