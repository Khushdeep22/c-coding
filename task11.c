#include<stdio.h>
void insertionSort(int a[], int n){
    int i,j,temp;
    for(i = 1; i<n;i++){
        temp = a[i];
        j = i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
        j--;
        
            }
    a[j+1] = temp;

    }

}
int main(){
    int n;
    printf("enter the value pf n:");
    scanf("%d",&n);

    int a[n];
    printf("enter the value of array:");
    for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    }


return 0;
}