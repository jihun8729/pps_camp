#include<iostream>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
    int score[5][4];
    int sum[5] = {0};
    for(int i=0; i<5; i++){
        cin >> score[i][0] >> score[i][1] >> score[i][2] >> score[i][3];
        sum[i] += score[i][0] + score[i][1] + score[i][2] + score[i][3];
    }

    int* max = max_element(begin(sum), end(sum));
    int index = distance(begin(sum), max);
    cout << index+1 <<" " << *max << endl; 
}