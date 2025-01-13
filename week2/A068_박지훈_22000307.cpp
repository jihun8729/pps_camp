#include <iostream>
#include <queue>
using namespace std;

int main(){
    
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
    int count;
    int result;
    string order;
    queue<int> q;
   
    cin >> count;
    
    for(int i = 0; i < count; i++){
        
        cin >> order;

        if(order == "push"){
            cin >> result;
            q.push(result);
        }
        else if(order == "pop"){
            if(q.empty()){
                printf("-1\n");
            }else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        else if(order == "size"){
            printf("%d\n",q.size());
        }
        else if(order == "empty"){
            if(q.empty()){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
        else if(order == "front"){
            if(q.empty()){
                printf("-1\n");
            }else{
                printf("%d\n",q.front());
            }
        }
        else if(order == "back"){
            if(q.empty()){
                printf("-1\n");
            }else{
                printf("%d\n",q.back());
            }
        }
        
    }
}