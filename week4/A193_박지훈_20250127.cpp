#include <iostream>

int main(){
    int num;
    scanf("%d",&num);
    if(num%4==0){
        for(int i=0; i<num/4; i++){
            printf("long ");
        }
    }else{
        for(int i=0; i<num/4+1; i++){
            printf("long ");
        }
    }
    printf("int");
    return 0;
}