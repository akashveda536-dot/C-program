#include<stdio.h>
int main()
{
	const float pi=3.14;
	float Area,r;
	printf("Enter the radius of the circle:");
        scanf("%f",&r);
	Area=2*pi*r;
        printf("%.2f\n",Area);
	return 0;
}

