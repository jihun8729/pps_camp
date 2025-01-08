#include <iostream>
using namespace std;

int main() {
    int a, result = 0;
    
    for(int i=0; i<8; i++) {
        cin >> a;
        result *= 10;
        result += a;
    }

    if(result == 12345678){
        cout << "ascending" << endl;
    }else if(result == 87654321){
        cout << "descending" << endl;
    }else{
        cout << "mixed" << endl;
    }

    return 0;
}