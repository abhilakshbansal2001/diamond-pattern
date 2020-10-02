#include<stdio.h>
#include<conio.h>
int main (void){
int i,j,k,a;
a=5;
for (i=0;i<=a/2;i++){
    for (j=1;j<=a-i-a/2;j++){
        printf(" ");
    }
    for (k=0;k<=a+2*i;k++){
        printf("*");
    }
    for (j=1;j<=2*(a-i)-a+1;j++){
        printf(" ");
    }
    for (k=0;k<=a+2*i;k++){
        printf("*");
    }
    printf("\n");}
    for (i=0;i<=2*a+1;i++){
    for (j=0;j<=i-1;j++){
        printf(" ");
    }
    for (k=1;k<=4*a-2*i+3;k++){
        printf("*");
    }
    printf("\n");
}
printf("\n");
 a=12;
    for(i=1;i<=12;i++){
        for(j=1;j<=4;j++){
            printf("*");
    }
    if(i<7){
          for(j=1;j<=7;j++){
            printf(" ");
            if(i==j){
                    printf("*");
        }
    }

        for(j=1;j<=8-i;j++){
            printf(" ");
            if(j==7-i){
                    printf("*");
        }
        }
        for(j=1;j<=i-1;j++){
            printf(" ");

        }
        for(k=1;k<=4;k++){
            printf("*");
        }


    }
    else if(7<i<13){
        for(k=1;k<=16;k++){
            printf(" ");
        }
        for(k=1;k<=4;k++){
            printf("*");
        }
    }

    printf("\n");
    }
    printf("\n");
    for(i=1;i<=12;i++){

    for(j=1;j<=2;j++){
        printf("*");
    }
    if(i<7){
         for(j=1;j<=13;j++){
            printf(" ");
            if(j==2*i-1){
                    printf("*");
        }
    }



    }
   else if(6<i<13){
            for(j=1;j<=25-2*i;j++){
            printf(" ");
            if(j==25-2*i){
                    printf("*");
        }
    }
    }
    printf("\n");
}

}
