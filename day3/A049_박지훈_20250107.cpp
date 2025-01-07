#include <iostream>

using namespace std;

int main(){
    string input;
    while(1){
        int case1 = 0, case2 = 0, case3 = 0;
        cin >> input;
        if(input == "end")
            break;
        
        for(int i = 0; i<input.length(); i++){
            if(input[i] == 'a' || input[i] == 'o' || input[i] == 'e' || input[i] == 'i' || input[i] == 'u'){
                case1 = 1;
                break;
            }
        }
        if(case1 == 0){
            cout << "<" << input << "> is not acceptable." << endl;
            continue;
        }

        for(int i = 2;  i < input.length(); i++){
            if((input[i] == 'a' || input[i] == 'o' || input[i] == 'e' || input[i] == 'i' || input[i] == 'u') && 
            (input[i-1] == 'a' || input[i-1] == 'o' || input[i-1] == 'e' || input[i-1] == 'i' || input[i-1] == 'u') &&
            (input[i-2] == 'a' || input[i-2] == 'o' || input[i-2] == 'e' || input[i-2] == 'i' || input[i-2] == 'u')){
                case2 = 1;
                break;
            }
            else if((input[i] != 'a' && input[i] != 'o' && input[i] != 'e' && input[i] != 'i' && input[i] != 'u') && 
            (input[i-1] != 'a' && input[i-1] != 'o' && input[i-1] != 'e' && input[i-1] != 'i' && input[i-1] != 'u') &&
            (input[i-2] != 'a' && input[i-2] != 'o' && input[i-2] != 'e' && input[i-2] != 'i' && input[i-2] != 'u')){
                case2 = 1;
                break;
            }
        }
        if(case2 == 1){
            cout << "<" << input << "> is not acceptable." << endl;
            continue;
        }

        for(int i =1; i<input.length(); i++){
            if(input[i] == input[i-1]){
                if(input[i] == 'e' || input[i] == 'o')
                    continue;
                case3 = 1;
                break;
            }
        }
        if(case3 == 1){
            cout << "<" << input << "> is not acceptable." << endl;
            continue;
        }
        cout << "<" << input << "> is acceptable." << endl;
    }
}