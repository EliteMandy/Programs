//#include<stdio.h>
//int main(){
//	int t,A,B,N,Q=-1;
//	scanf("%d",&t);
//	
//	for(int i=0;i<t;i++){
//		scanf("%d %d %d",&A,&B,&N);
//		for(int i=N;i<N*10;i++){
//			if(i%A==0 && i%B!=0){
//				printf("%d\n",i);
//				break;
//			}
//			else if(A==B){
//				printf("%d\n",Q);
//				break;
//			}
//			
//		}
//	}
//}

//#include<stdio.h>
//int main(){
//	int t,A,B,N,Q=-1;
//	scanf("%d",&t);
//	for(int i=0;i<t;i++){
//		scanf("%d %d %d",&A,&B,&N);
//		for(int i=N;i<N*5;i+=2){
//			if(i%A==0 && i%B!=0){
//				printf("%d\n",i);
//				break;
//				}
//			else if(A==B){
//				printf("%d\n",Q);
//				break;
//				}
//			}
//		}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	string name;
//	cout<<"Hello Mothafouka";
//	cin>>name;
//	for(int i=0;i<name.length();i++){
//		cout<<name<<'\n';
//	}
//	
//}
//#include<stdio.h>
//int main(){
//    int t,a,b,c,d;
//    scanf("%d",&t);
//    for(int i=0;i<t;i++){
//        scanf("%d %d %d %d",&a,&b,&c,&d);
//        if(a>=b && c>=d){
//			int A=a+c;
//			printf("%d",A);
//		}
//		else if(a>=b && d>=c){
//			int B = a+d;
//			printf("%d",B);
//		}
//		else if(b>=a && c>=d){
//			int C = b+c;
//			printf("%d",C);
//		}
//		else if(b>=a && d>=c){
//			int D = b+d;
//			printf("%d",D);
//		}
//		printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//void Max(int a,int b,int c){
//    if(a>=b && a>=c){
//        printf("%d is greatest",a);
//    }
//    else if(b>=c){
//        printf("%d is greatest",b);
//    }
//    else{
//        printf("%d is greatest",c);
//    }
//}
//void main(int x,int y,int z){
//    scanf("%d %d %d ",&x,&y,&z);
//    Max(x,y,z);
//}




#include<stdio.h>
void insert(int,int);
void del(int);
void dis();
int a[20],n;
int main(){
	int i,pos,num;
	printf("Enter the values: ");
	scanf("%d",&n);
	printf("Enter values: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is :");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("Enter the pos and number to insert: ");
	scanf("%d %d ",&pos,&num);
	insert(pos,num);
	printf("The array after inserting: ");
	dis();
	printf("Enter the pos and number to Deleting: ");
	scanf("%d ",&pos);
	del(pos);
	printf("The array after inserting: ");
	dis();
	return 0;
}//**main close**
void dis(){// :::DISPLAYING THE ARRAY:::
	int i;
	printf("Enter the value: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void insert(int pos,int num){
	int i;
	for(int i=n;i>=pos;i--){
		a[i+1]=a[i]; // :::Assigning the increased array [1+index] to the previous one:::
	}
	a[pos]=num;
	printf("Insertion successful\n");
	n=n+1;// :::Increasing the Size of the array by 1(one):::
}
void del(int pos){
	int i;
	for(i=pos;i<n-1;i++){
		a[i]=a[i+1];//::: Assigning The decreased array to the previous one:::
	}
	n=n-1;// :::Substraction of Element means decrease in Array size by 1(One) -- One elemnet is deleted:::
	printf("\n Deletion Successful\n");
}
