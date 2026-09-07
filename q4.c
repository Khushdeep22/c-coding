#include<stdio.h>
int main(){
int n ;
    printf("enter no of houses:");
    scanf("%d",&n);
    int a[n];
    printf("enter money in each house:");
    int i;
    for(int i = 0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
    int K ;
    printf("enter the value of K:");
    scanf("%d", &K);
    int minimum = 9999999;

    for(i = 0; i<n; i++){
        for(int j=i +1;j<n; j++ ){
            if(j == i+1){
            continue;
            }
            int capability;
             if(a[i]>a[j])
             capability = a[i];
             else
             capability = a[j];
             if(capability<minimum){
                minimum = capability;
             }
        }
    }
    printf("minimum capability: %d", minimum);
    

        return 0;
}
