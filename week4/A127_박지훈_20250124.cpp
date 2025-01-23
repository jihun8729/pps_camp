#include <iostream>

using namespace std;


int gcdNum(int a, int b);

int main() {
	int count;
	int num1, num2;
	int gcd;
	int result;
	
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &num1, &num2);
		gcd = gcdNum(num1, num2);

		result = num1 * num2 / gcd;
		printf("%d\n", result);
	}
	return 0;
	}

int gcdNum(int a, int b) {
	int number;
	for (int i = 1; i<=a; i++) {
		if (a == 1 || b == 1) {
			return 1;
			break;
		}
		if (a % i == 0 && b % i == 0) {
			number = i;
			
			
		}
	}
	return number;
	
}
