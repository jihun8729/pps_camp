#include<iostream>

using namespace std;

int main(){
    int num[10];
    int result = 0;
    for(int i = 0; i < 10; i++){
        cin >> num[i];
        num[i] = num[i] % 42;
    }

    for(int j=0; j<10; j++){
     int count=0;
     for(int k=0; k<j; k++){
       if(num[k]==num[j]) count++;
      }
       if(count==0) result++;
   }
   cout << result << endl;
}