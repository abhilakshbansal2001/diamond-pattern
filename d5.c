#include<stdio.h>
int main(void){
int a,i,j,k;
scanf("%d",&a);
for (i=1;i<=2*a;i++,k=0){
        if (i<=a){
        for (j=0;j<=a-i;j++){
         printf("*");

        }
        for (j=1;j<=2*i-2;j++){
         printf(" ");

        }
        for (j=0;j<=a-i;j++){
            printf("*");
        }
        }
        else if (i==a){
            printf("HELLO WORLD");
        }
        else if (i>=a&&i<=2*a) {
            for (j=1;j<=i-a;j++){
         printf("*");

        }
        for (j=1;j<=2*(2*a-i);j++){
         printf(" ");

        }
        for (j=1;j<=i-a;j++){
            printf("*");
        }
        }
    printf("\n");
}
}
