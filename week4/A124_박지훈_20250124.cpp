#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int number;

    cin >> number;

    int result[100];
    int count=0;
    while(1){
        for(int i =2; i<=number; i++){
            if(number % i == 0){
                result[count] = i;
                count++;
                number /= i;
                break;
            }
        }
        if(number == 1)
            break;
    }
    for(int i = 0; i < count; i++){
        cout<<result[i]<<endl;
    }
}