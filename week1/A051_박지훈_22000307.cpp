#include <iostream>

using namespace std;

int main(){
    string input;
    int result = 0;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(input[i]>='A' && input[i] <= 'C'){
            result += 3;
        }else if(input[i] <= 'F'){
            result += 4;
        }else if(input[i] <= 'I'){
            result += 5;
        }else if(input[i] <= 'L'){
            result += 6;
        }else if(input[i] <= 'O'){
            result += 7;
        }else if(input[i] <= 'S'){
            result += 8;
        }else if(input[i] <= 'V'){
            result += 9;
        }else{
            result += 10;
        }
    }
    printf("%d\n",result);
}