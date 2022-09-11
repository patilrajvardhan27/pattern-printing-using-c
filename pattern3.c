/*
pattern to print
1 2 3
4 5 6
7 8 9 ..... so on
*/

#include<stdio.h>

int main(){

printf("enter n = ");
int n;
scanf("%d" ,&n);

int i=1;
int count =1;
while (i<=n)
{
    int j =1;
    while (j<=n)
    {
        printf("%d ",count);
        count = count + 1;
        j =j+1;
    }
    printf("\n");
    i=i+1;
    
}
}