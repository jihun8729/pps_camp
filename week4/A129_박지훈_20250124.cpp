#include <iostream>

using namespace std;

int main(){
    int N, input;
    int result;
    int dp[1001];

    cin >> N;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i < 11; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    for(int i = 0; i < N; i++){
        cin >> input;
        cout << dp[input] << endl;
    }
}