#include<stdio.h>
#define PI 3.1415
#define AREA(r)(PI*r*r)
#define PER(r)(2*PI*r)

int main(){
	float radius;
	scanf("%f",&radius);
	printf("%.2f\n%.2f",AREA(radius));
	return 0;
}
