/*
program to print 
1
2 3
3 4 5 
4 5 6 7 .... so on
*/
# include<stdio.h>
int main(){

    printf("enter n =");
    int n;
    scanf("%d" , &n);

    int row =1;
 

    while (row <= n)
    {
        int coloum =1;
           int value = row;
        while (coloum <= row)
        {
            printf("%d " , value);
            value += 1;
            coloum = coloum +1;
        }
        printf("\n");
        row = row +1;
    }
    
}
