#include <stdio.h>
void findMinMax(int *arr, int n, int *min, int *max)
{
	int *p;
	p = arr;
	*min = *p;
	*max = *p;
	for (int i=1;i<n;i++)
	{
        p++;
	if (*p < *min)
            *min = *p;

        if (*p > *max)
            *max = *p;
        }
}
int computeRange(int *min, int *max)
{
    return *max - *min;
}
int main()
{
    int arr[10];
    int n;
    int min, max, range;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findMinMax(arr, n, &min, &max);
    range = computeRange(&min, &max);
    printf("Min : %d\n", min);
    printf("Max : %d\n", max);
    printf("Range : %d\n", range);
    return 0;
}




