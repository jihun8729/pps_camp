#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a, b, result;
    int num = 0;
    cin >> a >> b;
    
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;

    cout << a << endl;
    cout << b << endl;

    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + num; 
        num = sum / 10; 
        result += (sum % 10) + '0'; 
    }
     if (num) result += num + '0';
      reverse(result.begin(), result.end());
      cout << result << endl;
}