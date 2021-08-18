#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements to be stored in the array \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    printf("the elements in the array is: \n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
}
