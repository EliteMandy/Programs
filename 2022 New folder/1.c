/*#include<stdio.h>
int main(){
    int grade;
    printf("Welcome mother fucker: \n");
    while(1){
	scanf("%d",&grade);
    switch(grade){
        case 1:
        {
            char a;
            printf("Add loda:\n");
            scanf("%f",&a);
            printf("name Added Successfully\n");
            break;

        }
        case '2':
        {
            char a;
            printf("Enter Doctor's name: \n");
            scanf("%f",&a);
            printf("Name Added Successfully\n");
            break;
        }
        case 3:
        {
            char a;
            printf("Enter Your Specilization: \n");
            scanf("%f",&a);
            printf("Added Successfully\n");
            break;

        }
        default:
        printf("Invalid grade");
        break;
    }
    return 0;
}
*/
/*#include <stdio.h> 
int input(); 
void output(float); 
int main() 
{ 
	float result; 
	int choice, num; 
	printf("Press 1 to calculate area of circle\n"); 
	printf("Press 2 to calculate area of square\n"); 
	printf("Press 3 to calculate area of sphere\n"); 
	printf("Enter your choice:\n"); 
	choice = input(); 
	switch (choice) { 
	case 1: { 
		printf("Enter radius:\n"); 
		num = input(); 
		result = 3.14 * num * num; 
		printf("Area of sphere="); 
		output(result); 
		break; 
	} 
	case 2: { 
		printf("Enter side of square:\n"); 
		num = input(); 
		result = num * num; 
		printf("Area of square="); 
		output(result); 
		break; 
	} 
	case 3: { 
		printf("Enter radius:\n"); 
		num = input(); 
		result = 4 * (3.14 * num * num); 
		printf("Area of sphere="); 
		output(result); 
		break; 
	} 
	default: 
		printf("wrong Input\n"); 
	} 
	return 0; 
} 
int input() 
{ 
	int number; 
	scanf("%d", &number); 
	return (number); 
} 
void output(float number) 
{ 
	printf("%f", number); 
} */

//#include <stdio.h>
//#include<stdlib.h>
//int main(){
//    int choice,i,num; 
//    unsigned long int fact,sum;
//    while(1){
//        printf("MENU\n\n\n");
//        printf("1 to find Factorial \n");
//        printf("2 to add two numbers \n");
//        printf("3 to find the no. is even or odd \n");
//        printf("4 to convert fahrenheit to celsius \n");
//        printf("5 to find the largest no. amoung 3 numbers \n");
//        printf("6 TO QUIT\n");
//        printf("Enter Choice:\n");
//        scanf("%d",&choice);
//
//
//        switch(choice){
//            case 1: 
//            printf("Enter Any number: \n");
//            scanf("%d",&num);
//            int y=num;
//            fact = 1;
//            for (i=1; i<=num ; ++i)
//            { 
//                num*=i;
//            }
//            printf("Factorial of %d is %d",y,num);
//            break;
//
//            case 2:
//            printf("Enter Any numbers to add :\n");
//            scanf("%d",&num);
//            
//            do
//            {
//				printf("Enter Any numbers to add :\n");
//							            scanf("%d",&num);
//							            
//				                sum+=num;
//				            } while (num!=0);
//				           printf("The sum is %d \n\n\n",sum);
//
//            break;
//
//            case 3:
//            printf("Enter Any number:\n");
//            scanf("%d",&num);
//            if(num%2==0){
//                printf("Number is even");
//            }
//            else
//            printf("Number is odd");
//
//            break;
//
//            case 4:
//            printf("Enter any number :\n");
//            scanf("%d",&num);
//            fact = num * (9/5) + 32;
//            printf("Fahrenheit is %d",fact);
//
//            break;
//
//            case 5:
//            printf("Enter any number to find the largest amoung them");
//            scanf("%d%d%d",&fact,&i,&num);
//            if(num>fact && num>i){
//                printf("The %d largest amoung them",num);
//            }
//            else if(fact>i){
//                printf("The %d lagest amoung them",fact);
//            }
//            else
//            printf("%d is largest amoung them",&num);
//
//            case 6:
//            exit(0);
//            
//                    }
//    }return 0;
//}




// ** Ascending Order ARRAY **
#include<stdio.h>
int main(){
	int n,arr[n],e,s,p=0,pos;
	printf("enter the size: \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
	for(int i=0;i<n;i++){
		for(int a=i+1;a<=n;a++){
			if(arr[i]>arr[a]){
				e = arr[i];
				arr[i] = arr[a];
				arr[a] = e;
			}
		}
	}
	printf("Enter element to search:-- ");
	scanf("%d",&s);
	for(int i=0;i<=n;i++){
		if(arr[i]==s){
			p=1;
			printf("%d",i);
			break;
		}
	}
//	printf("Enter the position to be deleted: ");
//	scanf("%d ",&pos);
//	void del(int pos){
//		for(int i=pos;i<n-1;i++){
//			arr[i] = arr[i+1];
//		}
//		n=n-1;
//	for(int i=0;i<n;i++){
//		printf("%d",arr[i]);
//	}	
//	}
	return 0;
}


//	printf("\n");
//	for(int s=0;s<n;s++){
//		printf("%d ",arr[s]);
//	}
