#include<stdio.h>
#include<math.h> // pow(), abs() ...

int main(void) {
	double x = pow(2.0, 10.0);
	printf("2^10 = %.0f\n", x);
	
	int y = -1;
	printf("y = %d, abs(y) = %d\n", y, abs(y));
	
	double z = -1.234;
	printf("z = %.3f, abs(z) = %.3f", z, abs(z));
	
	return 0;
} 
