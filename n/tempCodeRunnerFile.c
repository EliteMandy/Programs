#include<stdio.h>
int main(){
	int r,c,arr[r][c];
	printf("Enter rows and coloumn: \n");
	scanf("%d%d",&r,&c);
	printf("Enter the Elements: ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}	
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}	
}