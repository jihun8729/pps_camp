#include <iostream>

using namespace std;

int main(){
    int count;
    string input;
    cin >> count;

    for (int i = 0; i < count; i++){
        cin >> input;
        int result[26] = {0};
        int sum =0;
        for(int j = 0; j < input.length(); j++){
            result[input[j]-65]++;
        }
        for(int j = 0; j < 26; j++){
            if(result[j] == 0){
                sum += j+65;
            }
        }
        cout << sum << endl;
    }
}