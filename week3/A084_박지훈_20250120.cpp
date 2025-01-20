#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    int length;
    
    cin >> input;
    length = input.length();

    string result[length] ={};

    for(int i = 0; i < length; i++){
        result[i] = input.substr(i,length);
    }
    sort(result,result+length);
    
    for(int i = 0; i < length; i++){
        cout << result[i] << endl;
    }
}