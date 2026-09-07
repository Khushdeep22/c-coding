#include<stdio.h>
int main(){
int n ;
int flag = 1;

    printf("enter the size of matrix:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter matrix elements:");
    int i;
    int j;

    for(int i = 0; i<n; i++)
    {
        for(int j=0;j<n; j++){
    scanf("%d", &a[i][j]);
    } 
}
for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(a[i][j] != a[i-1][j-1])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("The matrix is Toeplitz.");
    else
        printf("The matrix is not Toeplitz.");

    return 0;
}