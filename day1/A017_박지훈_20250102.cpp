#include<iostream>
#include <algorithm>

using namespace std;

int main(){
    long int input;
    int result[9] = {0,};

    cin >> input;
    
    while(1){
        if(input > 0){
            if(input % 10 == 9)
                result[6]++;
            else{
                result[input % 10]++;
            }
            input = input / 10;
        }else{
            if(result[6]%2 ==0)
                result[6] = result[6] / 2;
            else
                result[6] = result[6] / 2 + 1;
            break;
        }
    }
    int max_value = *std::max_element(result, result + 9);
    cout << max_value <<endl;

}