#include<iostream>

using namespace std;

int main(){
    int result = 1;
    int per_count;
    int input;
    
    cin >> input;

    for(int i = 0; i < input; i++){
        cin >> per_count;
        result -=1;
        result += per_count;
    }
    cout << result << endl;
}