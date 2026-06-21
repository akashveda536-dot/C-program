#include <stdio.h>

int main()
{
    int a[] = {10, 50, 30, 80, 60};
    int largest = a[0], second = a[0];

    for(int i = 1; i < 5; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second)
        {
            second = a[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}
