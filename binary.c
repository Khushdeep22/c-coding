#include <stdio.h>

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n-1 ; i++)
    { int flag =0;

        for(int j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag =1;

            }
        }
        if(flag==0);
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}