/*  FINDING AREA OF RECTANGLE USING FUNCTION ****************************************************************************************************/
/*#include<stdio.h>
int Areal()
{
    int l,b,area;
    printf("Enter Lenght of Rectangle : ");
    scanf("%d",&l);
    printf("Enter width of Rectangle :");
    scanf("%d",&b);
    area = l*b;
    printf("Area of rectangle is %d",area);
    return area;
}
int main()       
{
    Areal();

    return 0;
}*/
/* SQUARE ROOT OF GIVEN NUMBER USING FUNCTION ********************************************************************************************/
/*#include<stdio.h>
#include<math.h>
int squaroot()
{
    float x,result;
    printf("Enter value: ");
    scanf("%f",&x);
    result=sqrt(x);
    printf("Square root of %f is %f",x,result);
    return 0;
}
int main()
{
    squaroot();
    return 0;
}*/
/*  REVERSING A STRING USING FUNCTIONS ************************************************************************************************************/
/*#include<stdio.h>
#include<string.h>
int man(char st[])
{
    int len;
    len = strlen(st);
    for(len=0;len>=0;len--)
    {
        putchar(st[len-1]);
    }
}
int main()
{
    char name[]="tesB ehT sI margorP C";
    lent(name);
    return 0;
}*/
/*  MAKE FIBONACCI SERIES USING STRING************************************************************************************************************/
/*#include<stdio.h>
int Fibonacci(){
    int i,n;
    int t1 = 0;
    int t2 = 1;
    int nterm = t1 + t2;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);

    for (i=3 ; i<=n ; ++i)
    {
        printf("%d\t",nterm);
        t1 = t2;
        t2 = nterm;
        nterm = t1 +t2;
    }
    return 0;
}
int main(int t1,int t2)
{
    printf("Fibonacci Series: %d  %d ",t1,t2);
    Fibonacci();
    return 0;
}*/

/*#include<stdio.h>
int main(){
    int n,sum=0,rem,pro=1;
    printf("enter no.");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;

        n/=10;
    }
    printf("Sum of digits = %d\n",sum);
    printf("Product of digits is = %d\n",pro);
    return 0;
}*/

// #include<stdio.h>
// int main(){
// 	int i,j,r;
// 	printf("Enter Any No.");
// 	scanf("%d",&r);
// 	for(i=1;i<=r;i++){
// 		for(j=1;j<=i;j++)
// 		printf("* ");
// 		printf("\n");
			
// 	}
// 	return 0;
	
	
// }
//          ****WITH RETURN AND WITH ARGUMENT****
// #include<stdio.h>
// int add(int x, int y){
//     int c = x+y;
// }
// int main(int a,int b){
//     printf("Enter 1st no.: \n");
//     scanf("%d%d",&a,&b);
//     int z = add(a,b);
//     printf("The sum is %d",z);
    
//     return 0;
// }
//          ****WITHOUT RETURN AND WITH ARGUMENT****
// #include<stdio.h>
// int add(int x , int y){
//     x,y;
//     int z = x+y;
//     return z;
// }
// void main(int a,int b){
//     a,b;
//     printf("Enter the Values:\n");
//     scanf("%d%d",&a,&b);
//     int c = add(a,b);
//     printf("The sum is %d",c);

// }
// #include<stdio.h>
//  int fact(int x,int y){
//     y=1;
//     for(int i=1; i<=x; ++i){
//          y*=i;
//      }
//      return y;
//  }
//  int main(int f,int x){
//     x=1;
//     printf("Enter the Value:\n");
//     scanf("%d",&f);
//     int factorial = fact(f,x);
//     printf("The Factorial is %d\n",factorial);
//     printf("%d! = %d",f,factorial);
//     return factorial;

//  }
//              ** without return with arguments **
#include<stdio.h>
void fact(int x){

}