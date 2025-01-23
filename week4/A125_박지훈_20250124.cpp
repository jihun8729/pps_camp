#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int N;
    int now;
    int max;
    cin >> N;

    int rope[N];

    for(int i = 0; i <N; i++){
        cin >> rope[i];
    }

    sort(rope, rope+N);

    max = rope[N-1];

    for(int i = N-1; i >= 0; i--){
        now = rope[i] * (N - i);
        if(max < now){
            max = now;
        }
    }
    cout << max;
}