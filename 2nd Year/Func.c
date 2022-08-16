//                         **ADDITION**
//          ****WITH RETURN AND WITH ARGUMENT****
// #include<stdio.h>
// int add(int x, int y){
//     int c = x+y;
// }
// int main(int a,int b){
//     printf("Enter 1st no.: \n");
//     scanf("%d%d",&a,&b);
//     int z = add(a,b);
//     printf("The sum is %d",z);
    
//     return 0;
// }
//          ****WITHOUT RETURN AND WITH ARGUMENT****
// #include<stdio.h>
// int add(int x , int y){
//     x,y;
//     int z = x+y;
//     return z;
// }
// void main(int a,int b){
//     a,b;
//     printf("Enter the Values:\n");
//     scanf("%d%d",&a,&b);
//     int c = add(a,b);
//     printf("The sum is %d",c);
// }
//           ****without return and without arguments****
// #include<stdio.h>
// void add(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     int c = x+y;
//     printf("The sum is %d",c);
// }
// void main(){
//     printf("Enter the Values: \n");
//     add();
// }
//          ****with return Without argument****with
// int add(){
//     int x,y;
//     scanf("%d%d",&x,&y);
//     int c = x+y;
//     printf("The sum is %d",c);
// }
// int main(){
//     printf("Enter the Elements: \n");
//     return add();
// }
//          ****with RETURN AND WITH ARGUMENT****
//                         **FACTORIAL**
// #include<stdio.h>
//  int fact(int x,int y){
//     y=1;
//     for(int i=1; i<=x; ++i){
//          y*=i;
//      }
//      return y;
//  }
//  int main(int f,int x){
//     x=1;
//     printf("Enter the Value:\n");
//     scanf("%d",&f);
//     int factorial = fact(f,x);
//     printf("The Factorial is %d\n",factorial);
//     printf("%d! = %d",f,factorial);
//     return factorial;

//  }
//              ****without return without arguments****
// void fact(){
//     int b=1,a;
//     scanf("%d",&a);
//     for(int i=1; i<=a; ++i){
//         b=b*i;
//     }
//     printf("The Factorial is %d \n",b);
// }
// void main(){
//     int A;
//     printf("Enter the no. of time it should me itarate: \n");
//     scanf("%d",&A);
//     printf("Enter the NO.: \n");
//     for(int i=0; i<5;++i){
//         fact();
//     }
// }
//          ****With return Without arguments****
// #include<stdio.h>
// int fact(){
//     int b=1,a;
//     printf("Enter the No.: ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;++i){
//         b*=i;
//     }
//     printf("The factorial is %d",b);
// }
// int main(){
//     return fact();
// }
//         ****without return with arguments****
// void fact(int a,int b){
//     b=1;
//     for(int i=1;i<=a;i++){
//         b*=i;
//     }
//     printf("Factorial is %d\n",b);
// }
// void main(int X,int f){
//     for(int i=0;i<4;i++){
//         printf("Enter the Number: \n");
//         scanf("%d",&X);
//         fact(X,f);
//     }
// }
//       ****with RETURN AND WITH ARGUMENT****
//                  *MULTIPLICATION*
// #include<stdio.h>
// int mul(int a,int b,int c){
//     int M = a*b*c;
//     printf("%d",M);
// }
// int main(x,y,z){
//     scanf("%d%d%d",&x,&y,&z);
//     mul(x,y,z);
//     return 0;
// }
//       ****without return without arguments****
// #include<stdio.h>
// void mul(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int M = a*b*c;
//     printf("%d",M);
// }
// void main(){
//     mul();
// }
//     ****with return without arguments****
// #include<stdio.h>
// int mul(){
//     int x,y,z;
//     scanf("%d %d %d",&x,&y,&z);
//     int M = x*y*z;
//     printf("%d",M);
//     return M;
// }
// int main(){
//     printf("Enter the Number: \n");
//     mul();
//     return 0;
// }
//     ****without return with arguments****
// #include<stdio.h>
// void mul(int x,int pro){
//     pro=1;
//     do{
//         scanf("%d",&x);
//         pro = pro * x;
//         printf("%d\n",pro);
//     }while(x != 0);
// }
// void main(int Num,int P){
//     printf("Enter the Number: \n");
//     mul(Num,P);
// }

//       ****with RETURN AND WITH ARGUMENT****
//                  *GREATEST OF THREE NO.*
// #include <stdio.h>
// int func(int x,int y,int z){
//     if(x>=y && x>=z){
//         printf("%d is greatest",x);
//     }
//     else if(y>=z){
//         printf("%d is greatest",y);
//     }
//     else{
//         printf("%d is greatest",z);
//     }
// }
// int main(int a,int b,int c){
//     printf("Enter the Number: \n");
//     scanf("%d %d %d",&a,&b,&c);
//     func(a,b,c);
//     return 0;
// }
//       ****without return without arguments****
// #include<stdio.h>
// void Max(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c){
//         printf("%d is greatest",a);
//     }
//     else if(b>=c){
//         printf("%d is greatest",b);
//     }
//     else{
//         printf("%d is greatest",c);
//     }
// }
// void main(){
//    printf("Enter the No: ");
//     Max();
// }
//     ****with return without arguments****
// #include<stdio.h>
// int Max(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c){
//         printf("%d is greatest",a);
//     }
//     else if(b>=c){
//         printf("%d is greatest",b);
//     }
//     else{
//         printf("%d is greatest",c);
//     }
// }
// int main(){
//    printf("Enter the No.: ");
//     return Max();
// }
//     ****without return with arguments****
// #include <stdio.h>
// void Max(int x,int y,int z){
//     if(x>=y && x>=z){
//         printf("%d is greatest",x);
//     }
//     else if(y>=z){
//         printf("%d is greatest",y);
//     }
//     else{
//         printf("%d is greatest",z);
//     }
// }
// void main(int a,int b,int c){
//     printf("Enter the Number: \n");
//     scanf("%d %d %d",&a,&b,&c);
//     Max(a,b,c);
// }
//            ****REVERSE OF NUMBER****
//            **With return with arguments**
// #include<stdio.h>
// int REVERSE(int n,int remainder,int rev){
//     rev=0;
//     while(n!=0){
//         remainder = n%10;
//         rev = rev*10 + remainder;
//         n=n/10;
//     }
//     printf("%d",rev);
//     return rev;
// }
// int main(int Num,int REM,int REV){
//     REV = 0;
//     printf("Enter the NUMBER: ");
//     scanf("%d",&Num);
//     REVERSE(Num,REM,REV);
// }
//                ***without return without arguments***
// #include<stdio.h>
// void REVERSE(){
//     int n,remainder,rev=0;
//     scanf("%d",&n);
//     while(n!=0){
//         remainder = n%10;
//         rev = rev*10 + remainder;
//         n=n/10;
//     }
//     printf("%d",rev);
// }
// void main(){
//     printf("Enter the Number:\n");
//     REVERSE();
// }





#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push();
void pop();
void display();
void peep();
int STACK[MAX],top=-1,item;
int main(){
	int choice;
	while(1){
		
			printf("1.Push\n");
			printf("2.Pop\n");
			printf("3.Display\n");
			printf("4.Peep\n");
			printf("5.Exit\n");
         printf("Enter your CHOICE:\n");
			scanf("%d",&choice);
			switch (choice) {
				case 1:
					push();
					break;
				case 2:
					pop();
					break;
				case 3:
					display();
				case 4:
					peep();
					break;	
				case 5:
					exit(0);	
				default:
					printf("Enter the Valid Choice !!!");
					break;
			}
		}
		return 0;
}
void push(){
	if(top==MAX-1){
		printf("\nSTACK OVERFLOW\n");
		return;
		}
		printf("Enter the Item: \n");
		scanf("%d",&item);
		top+=1;
		STACK[top] = item;
		printf("\n PUSH SUCCESFULLY DONE\n");
			}
void pop(){
	if(top==MAX-1){
		printf("Under Flow\n");
		return;
		}
		item = STACK[top];
		top-=1;
		printf("\n%d has been deleted succesfully!\n");
			}
void display(int top1){
		while(top1!=-1){
			printf("%d\n",STACK[top1]);
			top1--;			}
				
}
void peep(int top2){
	if(top2==-1){
		printf("\nNOTHING TO SHOW (EMPTY)");
		while(top2!=-1){
			printf("%d\n",STACK[top2]);
		}
		printf("%d\n",STACK[top2]);
	}
}
