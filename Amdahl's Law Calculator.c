#include <stdio.h>

int main(){
	float s,p;
	float speedup;
	
	printf(" --Amdahl's law-- \n\n");
	
	printf("SppedUp = ____1____\n\t  (1-p)+p/s \n");
	
	printf("\n Enter S value : ");
	scanf("%f", & s);
	
	printf(" Enter P value :  ");
	scanf("%f", & p);
	
	speedup = 1/((1 - p)+(p / s));
	
	printf(" SpeedUp : %f",  speedup);
	
	return 0;
	
}
