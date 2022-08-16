/*#include<stdio.h>
#include<string.h>
int main(){
    char name[25];
    printf("Enter your Name : \n");
    scanf("%s",&name);
    printf("Hello %s",name);
    while(strlen(name) == 1){
        printf("you Dumb Enter Your Name:::==== \n");
        printf("Enter your Name: ");
        scanf("%s",&name);
        printf("Hello %s",name);

    }
    return 0;
}*/
//                             Taking Input in 1-D Array;
/*#include <stdio.h>
int main(){
	int a;
	printf("Enter the size: ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;++i){
		scanf("%d",&arr[i]);		
	}
	for(int i=0;i<a;++i){
		printf("[ %d ]",arr[i]);
	}
	return 0;
	
}*/
/*#include<stdio.h>
int main(){
	int a,b;
	printf("Rows: ");
	scanf("%d",&a);
	printf("Coloumn: ");
	scanf("%d",&b);
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
			}
			printf("\n");
			
		}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",&arr[i][j]);
		}
		printf("\n");	
		}
	return 0;
}*/
//#include <stdio.h>
//int main(){
//   int num[20];
//   int i, j, a, n;
//   printf("enter number of elements in an array\n");
//   scanf("%d", &n);
//   printf("Enter the elements\n");
//   for (i = 0; i < n; ++i)
//      scanf("%d", &num[i]);
//   for (i = 0; i < n; ++i){
//      for (j = i + 1; j < n; ++j){
//         if (num[i] > num[j]){
//            a = num[i];
//            num[i] = num[j];
//            num[j] = a;
//         }
//      }
//   }
//   printf("The numbers in ascending order is:\n");
//   for (i = 0; i < n; ++i){
//      printf("%d\n", num[i]);
//   }
//}

/*#include<stdio.h>
int main(){
	int s,arr[s];
	printf("gc");
	scanf("%d",&s);
	for(int i=0;i<s;++i){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<s;i++){
		printf("%d ",arr[i]);
	}
	for (int j=0;j<s-1;j++) {
		for (int i=0;i<s-j-1;i++) {
			if (arr[i]>arr[i+1]) {
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	for(int i=0;i<s;i++){
		printf("%d",arr[i]);
	}
}*/
/*#include<stdio.h>
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
}*/
/*#include<stdio.h>
int main(){
	int i,arr[i];
	int ANS=0;
	printf("Enter no. of problems done in each week: ");
	for (int i=1;i<=4;i++){
		printf("P%d = ",i);
		scanf("%d",&arr[i]);	
		}
	for(int i=0;i<5;i++){
		if(arr[i]>=10){
			ANS=ANS+1;
			}
			
		}
	printf("%d",ANS);
	return 0;	
}*/
/*#include<stdio.h>
#include<string.h>
int main(){
	char str[40],str1[40],A;
	str1[40] = str[40];
	printf("Enter the Word: ");
	scanf("%s",&str);
	A = strrev(str);
	printf("The Reverse is %s",A);
}*/

/*#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str1[40];
	char str[40],a;
	printf ("string: \n");  
    scanf ("%s", str1);  
    printf("%s",str);
	if(strrev(str1)==str){
		printf("YES");
	} 
	else{
		printf("NO");
	}
	
    return 0;  
}*/
/*#include<stdio.h>
int main(){
	int t;
	long int X1,X2,Y1,Y2;
	printf("Enter Price: \n");
    scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%ld %ld %ld %ld",&X1,&Y1,&X2,&Y2);
		if(X1<X2 && Y1<Y2){
					printf("%ld",X1+Y1);
					}
			if(X2<X1 && Y2<Y1){
				printf("%ld",X2+Y2);
			}
			if(X1<X2 && Y1>Y2){
						printf("%ld",X1+Y2);
						}
			if(X1<X2 && Y1>Y2){
						printf("%ld",X1+Y2);
						}
		
	}
				
}*/
//#include<stdio.h>
//int main(){
//	int t;
//	scanf("%d",&t);
//	int X1,Y1,X2,Y2,TOT1,TOT2;
//	for(int i=0;i<t;i++){
//		scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
//		TOT1=X1+Y1;
//		TOT2=X2+Y2;
//		if(TOT1<TOT2){
//			printf("%d",TOT1);
//		}
//		else{
//			printf("%d",TOT2);
//		}
//		
//		
//		TOT1=0;
//		TOT2=0;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int t,a,n;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//		scanf("%d %d",&a,&n);
//		printf("%d\n",a-n);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int r,c,arr[r][c];
//	printf("Enter rows And colounm: \n");
//	scanf("%d%d",&r,&c);
//	int t=r,p=c;
//	
//	for(int i=0;i<=t;i++){
//		printf("\n");
//		for(int j=0;j<p;j++){
//			printf("arr[%d][%d] : ",i,j);
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(int i=0;i<t;i++){
//		for(int j=0;j<p;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//                                          20-07-2022                               
//#include<stdio.h>
//int main(){
//	int N,K,t;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//		scanf("%d",&N);
//		scanf("%d",&K);
//		if(N>=K){
//			printf("NO");
//		}
//		if(N<K){
//			printf("YES");
//		}
//		printf("\n");
//		}
//		return 0;
//}
//#include<stdio.h>
//int main(){
//	int t,N,K,M;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//		scanf("%d",&N);
//		scanf("%d",&K);
//		scanf("%d",M);
//		int R = K*M;
//		if(N>R && N%R == 0){
//			printf("%d",N/R);
//		}
//		else{
//			printf("%d",(N/R)+1);
//		}
//	}
//}
//#include<stdio.h>
//int main(){
//	int arr[3][3];
////	printf("Enter the no. of ROWS AND COLOUMN: \n");
////	scanf("%d",&r);
////	scanf("%d",&c);
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("Arr[%d][%d]=",i,j);
//			scanf("%d",&arr[i][j]);
//		}
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			printf("%d",arr[i][j]);
//		}
//	}
//	return 0;
//	}
//
