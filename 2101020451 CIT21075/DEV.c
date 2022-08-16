/*#include<stdio.h>
int main(){
    
    float fahrenheit,celsius;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);

    fahrenheit = (celsius * 9/5) + 32;     //Celsius to Fahrenheit Conversion formula//

    printf("%f fahrenheit = %f celsius",fahrenheit,celsius);

    return 0;
}*/

/*#include<stdio.h>
int main(){
	char m;
	printf("Enter any value to know the character\n");
	scanf("%c",&m);
	if('a'<=m && 'z'>=m || 'A'<=m && 'Z'>=m){
		printf("It's a Alphabet");
	}
	else if('0'<=m && '9'>=m){
		printf("It's a Digit");
	}
	else{
	printf("It's is a speacial character");
	}
	return 0;
	
}*/

/*#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter a no. to form a half pyramid");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf("@@@ ");
			printf("\n");
		
		
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i,sum=0;
	do{
		printf("Enter no. to add");
		scanf("%d",&i);
		sum= sum + i;
	}while(i!=0);
	printf("Sum is %d",sum);
	return 0;
}*/

/*#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter value for num1\n",num1);
    scanf("%d",&num1);
    printf("enter value for num2\n",num2);
    scanf("%d",&num2);
    printf("enter value for num3\n",num3);
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
	int num1,num2,num3;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	printf("enter num3");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3){
		printf("%d is largest",num1);
	}
	else if(num2>num3){
		printf("%d is largest",num2);
	}
	else{
		printf("%d is largest",num3);
	}
	return 0;
}*/

/*1. )  Write a Program to calculate and display the volume of a CUBE having its height (h=10cm),
width (w=12cm) and depth (8cm).*/

/*#include <stdio.h>
#include <math.h>
 
int main()
{
    float width=12, length=8, height=10;
    float volume;
   
    volume = width * length * height;
  
    printf("\n Volume of cuboids is : %.3f", volume);
    
    return 0;
}*/

/*Q2. Write a program to take input of name, rollno and marks obtained by a student in 5 subjects
each have its 100 full marks and display the name, rollno with percentage score secured.*/
/*#include<stdio.h>
#include<conio.h>

int main ()
{
    
char name[20];
int roll;
float sub1,sub2,sub3,sub4,sub5,roll_no,per,total;

printf("enter the name of student");
gets(name);
    printf("Enter the student's, roll number and marks in five subjects:");
    scanf("%d %f %f %f %f %f",&roll,&sub1,&sub2,&sub3,&sub4,&sub5);
     total=sub1+sub2+sub3+sub4+sub5;
     per=100*total/500;
     printf("percentage scored by student %f :\n",per);


return 0;

 }
*/
/*Q3. Write a program to take a character input from keyboard and check if it is a number or
alphabet or special character*/

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
    
}
*/

/*Q4. Write a program to read two matrices of order 3 * 2, add them and display the resultant
matrix in matrix form.*/
// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }

//   printf("Enter elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }

//   // adding two matrices
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] = a[i][j] + b[i][j];
//     }

//   // printing the result
//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }

//   return 0;
// }
/*#include<stdio.h>
int main(){
  int i,n,pow;
  printf("Enter value: \n");
  scanf("%d",&i);
  printf("enter value: \n");
  scanf("%d",&n);
  pow=i*n;
  printf(pow);
  return 0;
}*/
