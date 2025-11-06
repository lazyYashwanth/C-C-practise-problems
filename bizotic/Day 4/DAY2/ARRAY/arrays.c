//dynamic declaration using for loop in array 
// #include <stdio.h>
// int main(){
//     int marks[5];
//     for(int i = 0;i<5;i++){
//         printf("Enter marks of subject %d: ",i+1);
//         scanf("%d",&marks[i]);
//     }
//     for(int i = 0;i<5;i++){
//        for(int j = 0;j<5;j++){
//         printf()
//        }
// }
// finding the number of occurance of number in array
// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter the number of array:");
//     scanf("%d",&n);
//     int arr[n];

//     for(int i = 0;i<n;i++){
//         printf("enter the value of array %d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//    int count = 0;
//    for(int i = 0;i < n; i++){
//     if(arr[i] == arr[i+1]){
//         count++;
//    }
//    printf("the number of occurance is :%d",count);

// }
// }

// #include<stdio.h>
// int main(){
//     float stocks[7];
//     for(int i = 0;i<7;i++){
//         printf("Enter the stock value of day %d: ",i+1);
//         scanf("%f",&stocks[i]);
//     }
//     float maximum = 0;
//     for(int i = 0;i<7;i++){
//         if(stocks[i]>maximum){
//             maximum = stocks[i];
//         }
//     }
//     printf("the maximun of the stocks is :%.2f",maximum);

//     float minimum = 0;
//     for(int i = 0;i<7;i++){
//         if(stocks[i]<minimum){
//             minimum = stocks[i];
//         }
//     }
//     printf("the minimum of the stocks is :%.2f",minimum);
//     return 0;
// }

// party.c
//[7,0,5,1,3]
//[1,2,1,3,4]
//[6,4,8,6,5]
// using multi dimensional arrays, arrays as function arguments
// and finding the maximum number of people at the party at any time

// #include<stdio.h>
// int main(){
//     int i;
//     int enteries[5] = {7,0,5,1,3};
//     int exit[5] = {1,2,1,3,4};
//     int total[5];
//     for(int i = 0;i<5;i++){
//         total[i] = enteries[i] - exit[i];
//     }
//     int max = 0;
//     for(int i = 0;i<5;i++){
//         if(total[i]>max){
//             max = total[i];
//         }
//     }
//     printf("the maximun number of people at the party at time %d is :%d",total[i],max);
//     return 0;  
// }
                //    or
// #include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     int E[t],L[t];
//     for(int i=0;i<t;i++){
//         scanf("%d",&E[i]);
//     }
//     for(int i=0;i<t;i++){
//         scanf("%d",&L[i]);
//     }
//     int current_guest = 0;
//     int max_guest = 0;
//     int time = 0;
//     for(int i=0;i<t;i++){
//         current_guest += E[i] - L[i];
//         if(current_guest > max_guest){
//             max_guest = current_guest;
//         }
//         time++;
//     }
//     printf("the %d time has %d guest ",time,max_guest);
//     return 0;
// }                

//
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int matrix[n][n];

//     for(int i = 0; i< n;i++){
//         for(int j = 0; j < n; j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         int age = matrix[i][i];
//         if(age>18 && age<60){
//             count++;
//         }
//     }
//     printf("the number of people in the age group 18-60 is :%d",count);
// }

// sorting using auxilary array
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i < n;i++){
//         scanf("%d",&arr[i]);
//     }

// int count0 = 0,count1 = 0,count2 = 0;
// for(int i = 0;i < n;i++){
//     if(arr[i] == 0){
//         count0++;
//     }
//     else if(arr[i] == 1){
//         count1++;
//     }
//     else if(arr[i] == 2){
//         count2++;
//     }
// }

//     for(int i = 0; i < count0; i++){
//         printf("0 ");
//     }
//     for(int i = 0; i < count1; i++){
//         printf("1 ");
//     }
//     for(int i = 0; i < count2; i++){
//         printf("2 ");
//     }

//
// rotation of array [1,2,3,4,5] k=2
// new array will be [3,4,5,1,2]
// DO IT ONLY  for k = 2 coz we are rotating it by 2 
#include<stdio.h>
int main(){
    int n,k = 2;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    int rotated[n];
    for(int i = 0;i < n;i++){
        rotated[(i + n - k) % n] = arr[i];
    }
    for(int i = 0;i < n;i++){
        printf("%d ",rotated[i]);
    }
    return 0;
}
