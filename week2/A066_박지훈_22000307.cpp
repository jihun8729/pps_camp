#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main() {
	int N;
	cin >> N;

    while(1){
        v.push_back(N%10);
        N /= 10;
        if(N==0) break;
    }
	sort(v.begin(), v.end());
	
    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i];
    }

	return 0;
}