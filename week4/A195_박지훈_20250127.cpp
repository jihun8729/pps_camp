#include <iostream>

int main(void){
   int a,b;
   scanf("%d",&a);
   for(int i=1; i<=a; i++){
     for(int j=0; j<i; j++){
     printf("*");
     }
     printf("\n");
   }
}