#include<stdio.h>
int main(){
	int pos,r;
	printf("Enter the no. of elemets: ");
	scanf("%d",&r);
	int arr[r];
	for(int i=0;i<r;i++){
		printf("arr[%d]:",i );
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<r;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Enter the position: ");
	scanf("%d",&pos);
	if(pos>r || pos<=0){
		printf("Enter a Valid Position %d is no the one:: ......",pos);
		}
	else{
		for(int i=r;i>=pos;i--){
			arr[i]=arr[i+1];
		}
		
		for(int i=0;i<r-1;i++){
			printf("%d ",arr[i]);
		}
		
	}	
	return 0;
}
