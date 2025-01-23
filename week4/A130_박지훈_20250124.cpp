#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> s;
    int result=0;
    int n, input;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        if(input == 0){
            s.pop();
        }else{
            s.push(input);
        }
    }

    int size = s.size();
    for(int i = 0; i < size; i++){
        result += s.top();
        s.pop();

    }
    cout << result << endl;
}