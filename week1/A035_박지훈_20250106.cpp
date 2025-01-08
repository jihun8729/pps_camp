#include<iostream>
#include <string>   


using namespace std;

int main(){
    int count;

    cin >> count;

    for(int i = 0; i < count; i++){
        double result = 0;
        char ch;
        cin >> result;
        while(1){
            cin.get(ch);
            if(ch=='\n'){
                break;
            }
            if(ch=='@'){
                result*=3;
            }
    
            if(ch=='%'){
                result+=5;
            }
    
            if(ch=='#'){
                result-=7;
            }
        }
        printf("%.2f\n",result);
    }
}