#include <iostream>
#include <string>
using namespace std;

int main(){
    int count;
    int alpha[26] = {0};
    bool suc = true;
    string s = "abcdefghijklmnopqrstuvwxyz";

    cin >> count;

    for(int i = 0; i < count; i++){
        string input;
        cin >> input;
        alpha[input[0]- 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(alpha[i] >= 5){
            cout << s[i];
            suc = false;
        }
    }
    if(suc == true)
        cout << "PREDAJA" << endl;
}