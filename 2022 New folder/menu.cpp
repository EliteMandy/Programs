#include <stdio.h>
#include<stdlib.h>
void gotoxy (int x, int y);
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
    int choice,i,num,a; 
    unsigned long int fact,sum;
    while(1){
        printf("MENU\n\n\n");
        printf("1 to find Factorial \n");
        printf("2 to add two numbers \n");
        printf("3 to find the no. is even or odd \n");
        printf("4 to convert fahrenheit to celsius \n");
        printf("5 to find the largest no. amoung 3 numbers \n");
        printf("6 TO QUIT\n");
        printf("Enter Choice:\n");
        scanf("%d",&choice);


        switch(choice){
            case 1: 
            printf("Enter Any number: \n");
            scanf("%d",&a);
            num=1;
            for (i=1; i<=a ; i++)
            { 
                num*=i;
            }
            printf("Factorial of is %d\n\n\n",num);
            break;

            case 2:
			
           sum=0;
            do
            {
				printf("Enter Any numbers to add :\n");
			            scanf("%d",&num);
			            
                sum+=num;
            } while (num!=0);
           printf("The sum is %d \n\n\n",sum);

            break;

            case 3:
            printf("Enter Any number:\n");
            scanf("%d",&num);
            if(num%2==0){
                printf("Number is even");
            }
            else
            printf("Number is odd\n\n\n");

            break;

            case 4:
            printf("Enter any number :\n");
            scanf("%d",&num);
            fact = num * (9/5) + 32;
            printf("Fahrenheit is %d\n\n\n",fact);

            break;

            case 5:
            printf("Enter any number to find the largest amoung them");
            scanf("%d%d%d",&fact,&i,&num);
            if(num>fact && num>i){
                printf("The %d largest amoung them",num);
            }
            else if(fact>i){
                printf("The %d lagest amoung them",fact);
            }
            else
            printf("%d is largest amoung them\n\n\n",&num);
            break;

            case 6:
            exit(0);
            
                    }
    }return 0;
}
