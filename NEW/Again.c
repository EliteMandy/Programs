//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//	   char str[20];
//	   gets(str);
//	   printf("%s", str);
//	   return 0;
//}

//#include<stdio.h>
//int main(){
//	int arr[20],n,n1;
//	printf("Enter the Range: \n");
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		printf("Arr[%d]=",i);
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	printf("Enter No. to search: ");
//	scanf("%d",&n1);
//	for(int i=0;i<n;i++){
//		if(n1==arr[i]){
//			printf("The Index no. is %d",i);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int arr[20],n,n1,temp;
//	printf("Enter the Range: \n");
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		printf("Arr[%d]=",i);
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",arr[i]);
//	}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]<arr[j]){
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	printf("ARRAY AFTER DESCENDING IS : \n");
//	for(int i=0;i<n;++i){
//			printf("Arr[%d] = %d \n",i,arr[i]);
//		}
////	printf("Enter No. to search: ");
////	scanf("%d",&n1);
////	for(int i=0;i<n;i++){
////		if(n1==arr[i]){
////			printf("The Index no. is %d",i);
////			break;
////		}
////	}
//	return 0;
//}

//                                        ***STACK***
/*#include<stdio.h>
#include<stdlib.h>
#define max 5
void push();
void pop();
void display();
void search();
void peep();
int STACK[max],top=-1,n,n1;
int main(){
	int choice;
	while(1){
		printf("\n1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY\n");
		printf("4.SEARCH\n");
		printf("5.PEEP\n");
		printf("6.EXIT\n");
		printf("Enter your Choice: \n");
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
				search();
				break;
			case 5:
				peep();
				break;
			case 6:
				exit(0);			
		}
	}
	return 0;
}
void push(){
	if(top==max-1){
		printf("STACK OVERFLOW!! :-(\n");
		return;
	}
	top=top+1;
	printf("Enter the element to insert:\n");
	scanf("%d",&n);
	STACK[top]=n;
	printf("OPERATION SUCCESSFULLY DONE **:-)**\n");
}
void pop(){
	if(top==-1){
		printf("STACK UNDERFLOW !! :-(\n");
		return;
	}
	n=STACK[top];
	top=top-1;
	printf("OPERATION SUCCESSFULLY DONE **:-)**\n");
}
void display(){
	while(top!=-1){
		printf("%d\n",STACK[top]);
		top--;
	}
}
void search(int n1){
	printf("Enter any element \n");
	scanf("%d",&n1);
	for(int i=0;i<top;i++){
		if(n1==STACK[top]){
			printf("In this %d index %d is present\n",top,STACK[top]);
		}
		break;
	}
}
void peep(){
	while(top!=-1){
		printf("PEEPED ITEM IS %d",STACK[top]);
		break;
	}
}*/

//                                                ***QUEUE***
//#include<stdio.h>
//#include<stdlib.h>
//#define max 5
//void enqueue();
//void dequeue();
//void disp();
//int QUEUE[max],front=-1,rear=-1,n;
//int main(){
//	int choice;
//	while(1){
//			printf("\n1.Enqueue \n");
//			printf("2.Dequeue\n");
//			printf("3.Display\n");
//			printf("Enter your Choice");
//			scanf("%d",&choice);
//			switch (choice) {
//				case 1:
//					enqueue();
//					break;
//				case 2:
//					dequeue();
//					break;
//				case 3:
//					disp();
//					break;
//				case 4:
//					exit(0);		
//				default:
//					printf("\nEnter Valid Choice\n");
//					break;
//			}
//	}
//}
//void enqueue(){
//	if(rear==max-1){
//		printf("\nQUEUE OVERFLOW !!!\n");
//		return;
//	}
//	else{
//		if(front==-1){
//			front=0;
//		}
//		printf("Enter the Data to enqueue: \n");
//		scanf("%d",&n);
//		rear++;
//		QUEUE[rear] = n;
//	}
//}
//void dequeue(){
//	if(front==-1 || front>rear){
//		printf("QUEUE UNDERFLOW !!!\n");
//		return;
//	}
//	else{
//		n=QUEUE[front];
//		printf("The Item DEQUEUED IS %d",QUEUE[front]);
//		front++;
//	}
//}
//void disp(){
//	if(front==-1){
//		printf("!!@!! Nothing is here !!@!!\n");
//		return;
//	}
//	else{
//		printf("The ELEMENTS ARE: \n");
//		for(int i=front;i<=rear;i++){
//			printf("%d \n",QUEUE[i]);
//		}
//	}
//}
