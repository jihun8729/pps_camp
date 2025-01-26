#include <iostream>

int main(void){
   int t,m;
   scanf("%d %d",&t,&m);
   m-=45;
   if(m<0){
     t-=1;
     if(t<0) t=23;
     if(t>23) t=1;
     m+=60; 
   }
   printf("%d %d",t,m);
}