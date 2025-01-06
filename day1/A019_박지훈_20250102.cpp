#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    int result[10] = {0};
    int input;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    input = num1 * num2 * num3;

    while(input != 0){
        result[input%10]++;
        input /= 10;
    }
    for(int i = 0; i < 10; i++)
        cout << result[i] << endl;
}