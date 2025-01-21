#include<iostream>

int main() {
	int X,i;
	scanf("%d",&X);
	for(i=1;i<X;i++) {
		X-=i;
	}
	if(i%2==0) printf("%d/%d",X,i+1-X);
	else printf("%d/%d",i+1-X,X);
}