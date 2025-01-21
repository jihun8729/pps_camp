#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int result = 0;
    int count =0;
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            count++;
            if(count>= a && count <= b){
                result += i;
            }
        }
        if(count > b) break;
    }
    cout << result;
}