#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m, n;
    vector<pair<string, int>> result;
    string input;
    string num[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        if(i >= 10){
            input = num[i/10] +" " + num[i%10];
            result.push_back({input,i});
        }else{
            input = num[i%10];
            result.push_back({input,i});
        }
    }
    sort(result.begin(),result.end());

    for(int i = 0; i < result.size(); i++){
        cout << result[i].second << " ";
        if(i%10 == 9){
            printf("\n");
        }
    }

}