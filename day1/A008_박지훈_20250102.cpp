#include <iostream>

using namespace std;

int main(){
    int total_count, person_count, score[1000];
    int total_score = 0;
    int score_count = 0;
    float avg = 0, avg_rate = 0;

    cin >> total_count;
    
    for(int i = 0; i < total_count; i++){
        cin >> person_count;
        total_score = 0;
        for(int j = 0; j < person_count; j++){
            cin >> score[j];
            total_score += score[j];
        }
        avg = total_score / person_count;
        for(int j = 0; j < person_count; j++){
            if(score[j] > avg)
                score_count++;
        }
        avg_rate +=score_count; 
        avg_rate = avg_rate / person_count * 100;
        printf("%.3f%\n",avg_rate);
        avg_rate = 0;
        score_count=0;
    }
}
