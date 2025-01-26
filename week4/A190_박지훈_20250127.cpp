#include<iostream>

int main(void) {
	int num1, num2, num3;
	int money = 0;
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 == num2&&num1== num3) {
		money = 10000 + num1 * 1000;
	}
	else if (num1 == num2 || num1 == num3) {
		money = 1000 + num1 * 100;
	}
	else if (num2 == num3) {
		money = 1000 + num2 * 100;
	}
	else {
		if (num1 > num2 && num1 > num3) money = num1 * 100;
		else if (num2 > num1 && num2 > num3) money = num2 * 100;
		else if (num3 > num1 && num3 > num2) money = num3 * 100;
	}
	printf("%d", money);
}