#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int result =0;

    if(N < 100){
        result = N;
    }else{
        result = 99;

        for(int i = 100; i <= N; i++){
            int hundred = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if(hundred - ten == ten - one){
                result++;
            }
        }
    }
    cout << result << endl;
}