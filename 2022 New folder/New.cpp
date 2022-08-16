#include<stdio.h>
int add(int x, int y){
    int c = x+y;
}
int main(int a,int b){
    printf("Enter 1st no.: \n");
    scanf("%d%d",&a,&b);
    int z = add(a,b);
    printf("The sum is %d",z);
    
    return 0;
}
