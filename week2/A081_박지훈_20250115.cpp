#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int count;
    int num[10];

    cin >> count;
    for(int j = 0; j < count; j++){
        for(int i = 0; i < 10; i++){
            cin >> num[i];
        }
        sort(num, num+10);
        cout << num[7] << endl;
    }
    
}