// #include<stdio.h>


// int sum(int num1, int num2){
//     return num1 + num2;
// }
// int subtract(int num1, int num2){
//     return num1 - num2;
// }
// int multiply(int num1, int num2){
//     return num1 * num2;
// }
// int divide(int num1, int num2){
//     if(num2 != 0){
//         return num1 / num2;
//     }
//     else{
//         printf("invalid division");
//     }
// }

// int main(){
//     int a = 10, b = 5;
//     int choice;
//     printf("Select operation:\n1. Sum\n2. Subtract\n3. Multiply\n4. Divide\n");
//     scanf("%d", &choice);
//     switch(choice){
//         case 1:
//             printf("Sum: %.2f\n", (float)sum(a, b));
//             break;
//         case 2:
//             printf("Subtract: %.2f\n", (float)subtract(a, b));
//             break;
//         case 3:
//             printf("Multiply: %.2f\n", (float)multiply(a, b));
//             break;
//         case 4:
//             printf("Divide: %.2f\n", (float)divide(a, b));
//             break;
//         default:
//             printf("Invalid choice\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int countway(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     else{
//         return countway(n-1)+countway(n-2);

//     }
// }
// int main(){
//     int n;
//     printf("Enter the number of stairs: ");
//     scanf("%d", &n);
//     printf("Number of ways to reach the top: %d\n", countway(n));
//     return 0;
// }

// books that are arranged from 1 to n (bottom to top) using recursion
// #include<stdio.h>
// int countbooks(int current, int target){
//     if(current == target){
//         return 1;
//     }
//     else{
//         return 1 + countbooks(current - 1,target); 
//     }
// }

// int main(){
//     int n, target;
//     scanf("%d %d",&n,&target);
//     int result = countbooks(n, target);
//     printf("the position of the book is: %d\n", result);
//     return 0;   
// }

// pointer
// #include<stdio.h>
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int *ptr = arr;
//     for(int i=0;i<5;i++){
//         printf("%d ", *(ptr + i));
//     }
// }

// #include<stdio.h>
// int main(){
//     char *fruits[] = {"Guava", "Banana", "jackfruit", "Date"};
//     for(int i = 0; i < 4; i++){
//         printf("%s\n", fruits[i]);
//     }
// }


