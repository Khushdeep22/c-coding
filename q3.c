#include<stdio.h>
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
    int target ;
    printf("enter the value of target:");
    scanf("%d",&target);
    for(i =0; i<n;i++){
        for(int j = i +1; j<n;j++ ){
            if(a[i]+a[j] == target)
            {
                printf("%d %d\n",a[i],a[j]);

            }
        }
    }
return 0;
}