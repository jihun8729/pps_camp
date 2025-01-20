#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){
    int result[5];
    int sum = 0;
    vector<pair<int, int>> input;

    for(int i = 1; i <= 8; i++){
        int in;
        cin >> in;
        input.push_back({in, i});
    }

    sort(input.rbegin(), input.rend());
    for(int i = 0; i < 5; i++){
        sum += input[i].first;
        result[i] = input[i].second;
    }

    cout << sum << endl;
    sort(result, result+5);
    for(int i = 0; i < 5; i++)
        cout << result[i]<<" ";
}