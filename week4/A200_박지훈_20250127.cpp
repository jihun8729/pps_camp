#include <iostream> 
using namespace std; 

int main() {
	int N; // 돌의 개수
	cin >> N; 

	if (N % 2 == 1) { 
		cout << "CY";
	} 
	
	else {
		cout << "SK"; 
	} 

	return 0;
}