#include<stdio.h>
#include<math.h>
int main(void)
{
	double area, base, height;
	printf("Area of the sail; ");
	scanf("%lf", &area);

	base = 2 * sqrt(area/3);
	height = sqrt(area/3);

	printf("Base of the sail: %.2f meters\n", base);
	printf("Height of the sail: %.2f meters\n", height);
	return 0;
}

