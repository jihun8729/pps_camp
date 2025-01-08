#include <iostream>
using namespace std;

int main(){
    int A[50], B[50], input;
    cin >> input;
    int temp;

    for(int i = 0; i < input; i++){
        cin >> A[i];
    }

    for(int i = 0; i < input; i++){
        cin >> B[i];
    }

    for(int i = 0; i < input; i++){
        for(int j = 1; j < input; j++){
            if(A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
            if(B[i] < B[j]){
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < input; i++){
        result += A[i] * B[i];
    }
    cout << result << endl;
}