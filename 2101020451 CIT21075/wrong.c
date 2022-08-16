#include<stdio.h>
int main(){
    int number,i;
    printf("Enter the number to find the multiplication table: ");
    scanf("%d",&number);
    printf("The multiplication of number %d ",number);
    printf("\n");
    for (i = 1; i<=10 ; i++){
        printf("%d x %d = %d",number,i,number*i);
        printf("\n");
    }
    return 0;
}