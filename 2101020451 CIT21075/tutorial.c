#include<stdio.h>
int main(){
    int i,x,y=1;
    printf("ENTER A NUMBER TO FIND FACTORIAL: \n");
    scanf("%d",&x);
    for(i=1; i<=x; i++){
        y*=i;
    }
    printf("The factorial of entered number is %d",y);
    return 0;
}