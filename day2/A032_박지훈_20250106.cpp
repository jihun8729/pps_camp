#include<iostream>

using namespace std;

int solveP(int k, int n);

int main(){
    int count;
    int a,b;
    int result=0;
    
    cin >> count;
    
    for(int i = 0; i < count; i++){
        cin >> a >> b;
        result = solveP(a,b);
        cout << result << endl;
    }
}

int solveP(int k, int n) {
	int num[15][15] = { {1,2,3,4,5,6,7,8,9,10,11,12,13,14},0 };
	int count = 0;
	int i = 1;
	while(1){
		count++;
		for (int j = 1; j <= count; j++) {
			num[i][count-1] += num[i-1][j-1];
		}
		if (i == k && count == n) {
			return num[k][n-1];
			break;
		}
		if (count == n) {
			count = 0;
			i++;
		}
		
		
	}
}