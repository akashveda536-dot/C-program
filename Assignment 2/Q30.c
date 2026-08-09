#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int size =sizeof(arr)/sizeof(arr[0]);
    printf("Size of array = %zu bytes\n",sizeof(arr));
    printf("Size of one element = %zu bytes\n",sizeof(arr[0]));
    printf("Number of elements = %d\n",size);
    return 0;
}
