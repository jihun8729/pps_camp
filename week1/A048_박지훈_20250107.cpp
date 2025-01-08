#include <iostream>

using namespace std;

int main(){
    int count;
    int result=0;
    cin >> count;

    for(int i = 0; i < count; i++){
        string input;
        int alpha[26] = {0};
        cin >> input;
       
        alpha[input[0]-'a'] = 1;

        for(int j = 1; j < input.length(); j++){
            if(input[j] == input[j-1])
                continue;
            alpha[input[j] - 'a'] += 1;
        }
        for(int k = 0; k < 26; k++){
            if(alpha[k] > 1){
                break;
            }
            if(k == 25) result++;
        }
        
    }
    cout << result << endl;
    
}