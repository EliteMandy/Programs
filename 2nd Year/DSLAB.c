// #include<stdio.h>
// #define max 5
// int Array(){
//     int STACK[max];
//     for(int i=0;i<max;i++){
//         printf("STACK[%d]=",i);
//         scanf("%d",&STACK[i]);
//     }
//     for(int i=0;i<max;i++){
//         printf("%d ",STACK[i]);
//     }
//     return 0;
// }
// int main(){
//     Array();
//     return 0;
// }
#include<stdlib.h>
#include<stdio.h>
#define max 5
void push();
void pop();
void display();
void peep();
int top=-1,item,STACK[max]=[1,2,4,5,7];
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
                break;
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
        return 0;
    }
    item = STACK[top];
    top=top-1;
    printf("\n***Deletion Operation is done***\n");
}
void display(int top2){
    while(top2!=-1){
        printf("%d ",STACK[top2]);
        top2--;
    }
}
void peep(){
    if(top==-1){
        printf("Nothing to show here!!!");
    }
    for(int i=0;i>=max-1;i--){
        printf("%d ",i);
        break;
    }
}