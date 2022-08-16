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
		
			printf("\n1.Push\n");
			printf("\n2.Pop\n");
			printf("\n3.Display\n");
			printf("\n4.Peep\n");
			printf("\n5.Exit\n");
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
					break;
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
	}
}
