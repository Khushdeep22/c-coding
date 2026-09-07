#include <stdio.h>
int main(){
    int n ;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    printf("enter the value of array:");
    int i;
    for(int i = 0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++)
    { int temp = a[i];
    int  j = i - 1;
    while(j>=0 && a[j]>temp){
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = temp;
    }
    printf("sorted array:");
    for(int i = 0; i<n; i++){
        printf("%d \n",a[i]);
    }
    

return 0;
}