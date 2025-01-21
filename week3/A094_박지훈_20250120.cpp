#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    int result = 0;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'c'){
            if(input[i+1] == '='){
                result+=1;
                i++;
                continue;
            }
            else if(input[i+1] == '-'){
                result+=1;
                i++;
                continue;
            }
        }
        else if(input[i] == 'd'){
            if(input[i+1] == 'z'){
                if(input[i+2] =='='){
                    result+=1;
                    i+=2;
                    continue;
                }
            }
            else if(input[i+1] == '-'){
                result+=1;
                i++;
                continue;
            }
        }
        else if(input[i] == 'l'){
            if(input[i+1] == 'j'){
                result+=1;
                i++;
                continue;
            }
        }
        else if(input[i] == 'n'){
            if(input[i+1] == 'j'){
                result+=1;
                i++;
                continue;
            }
        }
        else if(input[i] == 's'){
            if(input[i+1] == '='){
                result+=1;
                i++;
                continue;
            }
        }
        else if(input[i] == 'z'){
            if(input[i+1] == '='){
                result+=1;
                i++;
                continue;
            }
        }
        result++;
    }
    cout << result;
}