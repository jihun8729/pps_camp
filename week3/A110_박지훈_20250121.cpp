#include <iostream>

using namespace std;


int main(void){
	int price;
	scanf("%d", &price);
	int money = 1000 - price;
	int count = 0;
	if (money >= 500) {
		count = count + money / 500;
		money = money % 500;
	}
	if (money >= 100) {
		count = count + money / 100;
		money = money % 100;
	}
	 if (money >= 50) {
		count = count + money / 50;
		money = money % 50;
	}
	 if (money >= 10) {
		count = count + money / 10;
		money = money % 10;
	}
	 if (money >= 5) {
		count = count + money / 5;
		money = money % 5;
	}
	 
		count = count + money;
	
	printf("%d", count);

	return 0;
}
    