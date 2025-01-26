#include <iostream>

int main(void){
   int a, total=0;
   scanf("%d",&a);
   for(int i=1; i<=a; i++){
     total+=i;
   }
   printf("%d",total);
}