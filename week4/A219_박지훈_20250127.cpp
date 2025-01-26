#include <iostream>
#include <math.h>

int main() {

	int len, a, b;
	double t, c1, c2;

	scanf("%d %d %d", &len, &a, &b);

	t = sqrt(a * a + b * b);

	c1 = a * len / t;
	c2 = b * len / t;

	printf("%d %d", (int)c1, (int)c2);
	
	}