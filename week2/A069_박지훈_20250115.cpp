#include <iostream>
#include <queue>
using namespace std;



int main() {
  int n, k;
  cin >> n >> k;
  queue<int> q;
  for(int i=1; i<=n; i++){
    q.push(i);
  }
  cout<<"<";
  while(q.size()!=0){
    for(int i=0; i<k-1; i++){
      q.push(q.front());
      q.pop();
    }
    cout<<q.front();
    if(q.size()!= 1) cout<<", ";
    q.pop();
  }
  cout<<">";
  
}