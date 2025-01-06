#include<iostream>

using namespace std;

int main(){
    int total_door;
    int first;
    int next;
    cin >> total_door >> first;

    if(first == 0)
            next = 1;
        else
            next = 0;

    if(total_door > 5){
        cout << "Love is open door" << endl;
    }else{
        for(int i=1; i<total_door; i++){
            cout << next << endl;
            if(next == 0)
                next = 1;
            else
                next = 0;
        }
    }

}