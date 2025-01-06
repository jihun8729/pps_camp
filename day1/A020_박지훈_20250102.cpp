#include<iostream>

using namespace std;

int main(){
    int in, out;
    int total = 0;
    int result = 0;

    for (int i = 0; i < 4; i++){
        cin >> out;
        cin >> in;
        total += in;
        total -= out;
        if(total > result) result = total;
    }
    cout << result << endl;
}