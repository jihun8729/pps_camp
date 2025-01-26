#include <iostream>

int main(void){
   int a,b,i;
   scanf("%d",&i);
   for(int j=0; j<i; j++){
    scanf("%d %d",&a,&b);
    printf("%d\n",a+b);
   }
}