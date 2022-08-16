//#include<stdio.h>
//int main(){
//    int r,arr[r],sum=0,max;
//    printf("Enter the no. of element: ");
//    scanf("%d",&r);
//    for(int i=0;i<r;i++){
//        printf("arr[%d] : ",i);
//        scanf("%d",&arr[i]);
//    }
//    for(int i=0;i<r;i++){
//        printf("%d ",arr[i]);
//    }
//    for(int i=0;i<r;i++){
//		sum = sum + arr[i];
//	}
//	printf("\n");
//	printf("THE SUM IS %d",sum);
//	max = arr[0];
//	for(int i=0;i<r;i++){
//		if(max<=arr[i]){
//			max = arr[i];
//		}
//	}printf("\nThe greatest no. is %d\n",max);
//}

//#include<stdio.h>
//int main(){
//	int pos,r;
//	scanf("%d",&r);
//	int arr[r];
//	for(int i=0;i<r;i++){
//		printf("enter arr[%d]:",i);
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<r;i++){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	printf("Enter the position: ");
//	scanf("%d",&pos);
//	if(pos>=r || pos<=0){
//		printf("Enter valid Position %d is not the valid position...",pos);
//	}
//	else{
//		int num;
//		printf("Enter no, to be inserted: ");
//		scanf("%d",&num);
//		for(int i=r-1;i>=pos;i--){
//			arr[i+1]=arr[i];
//		}
//		arr[pos]=num;
//		for(int i=0;i<r+1;i++){
//			printf("%d ",arr[i]);
//		}
//	}
//}
#include<stdio.h>
int insert(){
	int pos,r;
	scanf("%d",&r);
	int arr[r];
	for(int i=0;i<r;i++){
		printf("enter arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<r;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Enter the position: ");
	scanf("%d",&pos);
	if(pos>=r || pos<=0){
		printf("Enter valid Position %d is not the valid position...",pos);
	}
	else{
		int num;
		printf("Enter no, to be inserted: ");
		scanf("%d",&num);
		for(int i=r-1;i>=pos;i--){
			arr[i+1]=arr[i];
		}
		arr[pos]=num;
		for(int i=0;i<r+1;i++){
			printf("%d ",arr[i]);
		}
	}
}

int main(){
	insert();
}
