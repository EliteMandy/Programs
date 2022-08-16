#include<stdio.h>
#include<stdlib.h>
#define max 5
void enqueue();
void dequeue();
void display();
int Q[max],front=-1,rear=-1,data;
int main(){
	int choice;
	while(1){
		printf("\n1.Enqueue \n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("Enter your Choice");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;		
		}
	}
	return 0;
}
void enqueue(){
	if(rear==max-1){
		printf("\nQueue is Overflow !\n\n");
		return;
	}
	else{
		if(front==-1){
			front=0;
		}
		printf("Enter data to insert: \n");
		scanf("%d",&data);
		rear++;
		Q[rear]=data;
	}
}
void dequeue(){
	if(front==-1 || front>rear){
		printf("\nQueue is Underflow !\n\n");
	}
	else{
		printf("\nDEQUEUED ITEM IS %d\n\n",Q[front]);
		data=Q[front];
		front++;
	}
}
void display(){
	if(front==-1){
		printf("\nNothing to show here !\n");
		return;
	}
	else{
		printf("The Elements are: \n");
		for(int i=front;i<=rear;i++){
			printf("%d\n",Q[i]);
		}
	}
}
