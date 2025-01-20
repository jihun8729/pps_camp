#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector<int> input;
    cin >> n;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        input.push_back(num);
    }
    sort(input.begin(),input.end());
    input.erase(unique(input.begin(),input.end()), input.end());
    for(int i = 0; i < input.size(); i++){
        cout << input[i] << " ";
    }
}