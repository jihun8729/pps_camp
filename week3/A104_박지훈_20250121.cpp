#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int count;
    int result = 0;
    cin >> count;
    int input[count];

    for(int i = 0 ; i < count; i++){
        cin >> input[i];
    }
    sort(input, input+count);

    for(int i = 0; i < count-1; i++){
        result += input[i];
    }
    cout << result;

}