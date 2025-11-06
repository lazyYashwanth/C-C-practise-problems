#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        // left wing
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }

        // right wing
        for(int space = 1; space <= i; space++) {
            printf("*");
        }
        printf("\n");


    }
    // lower wing
    for(int i = n; i >= 1; i--) {
        // left wing
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }

        // right wing
        for(int space = 1; space <= i; space++) {
            printf("*");
        }
        printf("\n");


    }
}
// include<stdio.h>
// int main(){
//     int i, j ,space,rows = 5;
//     for(i=1; i<=rows; i++){
//             for(space = 1; space<=rows - i;space++){
//                 printf(" ");
//             }
//             for(j = 1;j<=2*i-1;j++){
//                 printf("*");
//             }

//             printf("\n");

//     }
//     return 0;
// }