#include <iostream>

using namespace std;

int main(){
    int count;
    scanf("%d",&count);

    for(int i = 0; i < count; i++){
        string input;
        int result = 0;
        int stack = 0;
        cin >> input;

        if(input[0] == 'O'){
            result +=1;
            stack = 1;
        }
            
        for(int j = 1; j < input.length(); j++){
            if(input[j] == 'O'){
                result = result + 1 + stack;
                stack++;
            }else{
                stack = 0;
            }
        }
        printf("%d\n",result);
    }
}