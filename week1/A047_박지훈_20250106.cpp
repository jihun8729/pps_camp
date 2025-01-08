#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin >> input;  
    
    for (int i = 0; i < input.length(); i += 10) {
        cout << input.substr(i, 10) << endl; 
    }

    return 0;
}
