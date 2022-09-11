/*
program to print 

1
22
333
4444 ..... so on
*/
#include<stdio.h>
int main(){
    printf("enter n = ");
    int n;
    scanf("%d" , &n);

    int row =1;
     int count =1;

    while (row <= n)
    {
        int col =1;
        while (col <= row)
        {
            printf("%d " , count );
            count = count +1;
            col =col +1;
        }
        printf("\n");
        row = row + 1 ;
        
    }
    
}
