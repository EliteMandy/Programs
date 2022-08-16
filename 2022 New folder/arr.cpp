// ** Ascending Order ARRAY **
#include<stdio.h>
void del(int);
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
	printf("Enter the position to be deleted: ");
	scanf("%d ",&pos);
	void del(int pos){
	}
	return 0;
}


//	printf("\n");
//	for(int s=0;s<n;s++){
//		printf("%d ",arr[s]);
//	}
