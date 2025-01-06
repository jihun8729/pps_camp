#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num[5], result=0;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
        result += pow(num[i],2); 
    }
    result %= 10;
    cout << result << endl;
}