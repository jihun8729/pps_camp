#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<pair<string, int>> input;
    int count; 
    cin >> count;
    for(int i = 0; i < count; i++){
        int age;
        string name;
        cin >> age >> name;
        input.push_back({name,age});

    }
    sort(input.rbegin(),input.rend());

    for(int i = 0; i < count; i++){
        cout << input[i].second <<" "<< input[i].first << endl;
    }
}