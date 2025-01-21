#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int index(string a, string b){
    int alength, blength;
    int asum = 0, bsum = 0;

    alength = a.length();
    blength = b.length();

    if(alength != blength){
        return alength < blength;
    }

    for(int i = 0; i < alength; i++){
        if(a[i] >='0' && a[i] <='9'){
            asum += int(a[i]) - 48;
        }
        if(b[i] >='0' && b[i] <='9'){
            bsum += int(b[i]) - 48;
        }
    }
    if(asum!= bsum){
        return asum < bsum;
    }
    return a < b;
}

int main(){
    int count;
    string input[50];
    cin >> count;

    for(int i = 0; i < count; i++){
        cin >> input[i];
    }

    sort(input, input+count, index);

    for(int i = 0; i < count; i++){
        cout << input[i] << endl;
    }
}