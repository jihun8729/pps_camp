#include <iostream>

using namespace std;

int main(){
  int n, k;
  cin>>n;
  while(n--){
    cin>>k;
    
    int cnt = 1;
    
    for(int i=1;i<k;i++){
      cnt = cnt*2 +1 ;
    }
    printf("%d\n", int(cnt));
  }
  return 0;
}