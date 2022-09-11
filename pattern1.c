/*
program to print pattern
123456
123456
123456
123456
123456
123456  
*/

#include<stdio.h>
int main(){
printf("enter n = ");
int n;
scanf("%d" ,&n) ;
 int i = 1;
 while (i<=n )
 {
    int j=1;
    while (j<=n)
    {
        printf("%d" ,j);
        j = j+1;
    }
    printf("\n");
    i = i+1;
 }
}
