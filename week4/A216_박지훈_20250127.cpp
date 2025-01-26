#include <iostream>

int main() {
	int count;
	int check, result;

	while (1) {
		scanf("%d", &count);
		if (count == 0) break;
		result = 1;
		while (count != 0) {
			check = count % 10;
			if (check == 0) result += 4;
			else if (check == 1) result += 2;
			else result += 3;
			result++;
			count /= 10;
		}
		printf("%d\n", result);
	}
}