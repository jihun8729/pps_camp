#include<iostream>

using namespace std;

int main(){
    int count;
    int time;
    int y_cost = 0, m_cost = 0;

    cin >> count;
    
    for(int i = 0; i < count; i++){
        cin >> time;
        y_cost += (time/30+1) * 10;
         m_cost += (time/60+1) * 15;
        
    }
    if(y_cost == m_cost)
        cout << "Y M " << y_cost << endl;
    else if(y_cost < m_cost)
        cout << "Y " << y_cost << endl;
    else   
        cout << "M " << m_cost << endl;
}