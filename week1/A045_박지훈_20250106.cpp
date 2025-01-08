#include <iostream>

using namespace std;


int main(){
    int alpha[26]={0};
    int count = 0;
    int max = 0, max_index = 0;
    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] < 'a'){
            alpha[input[i] - 'A']++;
        }  
        else{
            alpha[input[i] - 'a']++;
        }
    }

    for(int i=0;i<26;i++) {
        if(max<alpha[i]) {
            max=alpha[i];
            max_index = i;
        }
    }
    
    for(int i=0;i<26;i++) {
        if(max==alpha[i]) 
            count++;
    }
    if(count>1) cout << "?";
    else cout << (char)(max_index+'A');

}