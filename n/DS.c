/*#include <stdio.h>
int main() {
    int size;
  int values[size];
  printf("Enter the Size of an array: ");
  scanf("%d",&size);
  printf("Enter inputs: ");
  for(int i = 0; i < size; ++i) {
     scanf("%d", &values[i]);
  }
  printf("Displaying integers: ");
  for(int i = 0; i < size; ++i) {
     printf("%d ", values[i]);
  }
  return 0;
}*/
// #include<stdio.h>
// int main(){
//     int arr[5] = {-8,2,3,4,5};
//     int min=arr[0];
//     int min1;
//     for(int i = 0; i < 5;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }

//     }
//     printf("Smallest no. is %d", min);
//     return 0;
// }
#include<stdio.h>
int main(){
    int size;
    int arr[size];
    printf("Enter the Size: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }


}