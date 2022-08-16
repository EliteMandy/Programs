// #include<stdio.h>
// int main(){
// 	int r,c,arr[r][c];
// 	printf("Enter the Rows and Coloumn: \n");
// 	scanf("%d %d",&r,&c);
// 	for(int i=0;i<=r;i++){
// 		for(int j=0;j<=c;j++){
// 			printf("arr[%d][%d] = ",i,j);
// 			scanf("%d",arr[i][j]);
// 		}
// 	for(int i=0;i<=r;i++){
// 		for(int j=0;j<=c;j++){
// 			printf("%d",arr[i][j]);
// 		    }
// 	    }
	
// 	}
// 	return 0;
// }
#include<stdio.h>
int main(){
	int N,A,B,Q,t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
		scanf("%d %d %d",&A,&B,&N);
		int a=0;
		int Z = N;
		while(Z>=N && Z>=N*10){
			if(Z%A==0 && Z%B!=0){
				printf("%d",Z);
				a=-1;
				break;
			}
			else{
				printf("NO");
			}
		}
		
		}
}
