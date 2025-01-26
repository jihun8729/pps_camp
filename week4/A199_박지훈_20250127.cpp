#include <iostream>

using namespace std;

int main(){
    int input;
    cin >> input;

    for(int i = 1 ; i <= input; i++){
        if(i%2 == 0){
            for(int j = 1; j <= input*2; j++){
                if(j%2 != 0){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
            cout<<endl;
        }
        else{
            for(int j = 1; j <= input*2; j++){
                if(j%2 != 0){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
            cout<<endl;
        }   
    }
}