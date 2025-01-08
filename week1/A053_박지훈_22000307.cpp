#include <iostream>
#include <stack>
using namespace std;

int main(){
    int count;
    int result;
    stack<int> s;
    scanf("%d",&count);

    for(int i = 0; i < count; i++){
        string order;
        cin >> order;

        if(order == "push"){
            cin >> result;
            s.push(result);
        }else if(order == "pop"){
            if(s.size() == 0){
                result = -1;
            }else{
                result = s.top();
                s.pop();
            }
            printf("%d\n",result);
        }else if(order == "size"){
            result = s.size();
            printf("%d\n",result);
        }else if(order == "empty"){
            if(s.size() == 0){
                result = 1;
            }else{
                result = 0;
            }
            printf("%d\n",result);
        }else if(order == "top"){
            if(s.size() == 0){
                result = -1;
            }else{
                result  = s.top();
            }
            printf("%d\n",result);
        }
        
    }
}