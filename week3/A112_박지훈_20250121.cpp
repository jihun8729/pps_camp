#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    int result=0;
    cin >> n >> m;
    int pck[m];
    int each[m];

    for(int i = 0; i < m; i++){
        cin >>pck[i] >> each[i];
    }
    sort(pck, pck+m);
    sort(each, each+m);

    
    cout <<min((n/6+1)*pck[0],min(n/6*pck[0]+n%6*each[0],n*each[0]));
}
