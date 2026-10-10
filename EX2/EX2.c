#include<stdio.h>
int main(void)
{
	double takeoff_speed_kmhr, distance_meters;
	double v, s, a, t;

	printf("Enter  takeoff speed(km/hr): ");
	scanf("%lf", &takeoff_speed_kmhr);
	printf("Enter distance(meters): ");
	scanf("%lf", &distance_meters);

	v = takeoff_speed_kmhr * (5.0/18.0); // convert speed from km/hr to m/s
	s = distance_meters;

	a = (v * v)/(2 * s);
	t = v/a;

	printf("\n---Results---\n");
	printf("Acceleration: %.2f m/s^2\n", a);
	printf("Time; %.2f seconds\n", t);
	return 0;

}

