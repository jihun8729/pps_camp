#include <iostream>

int main(void){
   int a,b,i;
   scanf("%d",&i);
   for(int j=1; j<=i; j++){
     scanf("%d %d",&a, &b);
     printf("Case #%d: %d + %d = %d\n",j,a,b,a+b);
   }
}