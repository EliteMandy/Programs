#include<stdlib.h>
#include<stdio.h>
#define max 5
void push();
void pop();
void display();
void peep();
int top=-1,item,STACK[max];
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
        switch(choice){
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
                printf("Enter a Valid Choice !!!");            
        }
    }
    return 0;
}
void push(){
    if(top==max-1){
        printf("STACK OVERFLOW !!!");
        return;
    }
    printf("Enter the ITEM to push onto the STACK: \n");
    scanf("%d",&item);
    top=top+1;
    STACK[top] = item;
    printf("\n***Element has been Inserted***\n");
}
void pop(){
    if(top==-1){
        printf("STACK UNDERFLOW !!!");
        return;
    }
    item = STACK[top];
    top=top-1;
    printf("\n***Deletion Operation is done***\n");
}
void display(){
	int top2=top;
    while(top2!=-1){
        printf("%d\n",STACK[top2]);
        top2--;
    }
}
void peep(){
    if(top==-1){
        printf("Nothing to show here!!!");
    }
    int top1=top;
    while(top1!=0){
		printf("\n%d\n\n",STACK[top1]);
		break;
	}
    }
