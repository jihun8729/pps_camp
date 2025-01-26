#include <iostream>

using namespace std;

int main(){
    int input;
    int result = 0;
    cin >> input;

    for(int i = 5; i<= input; i*=5){
        result += input / i;
    }
    cout << result;
}