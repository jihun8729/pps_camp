#include <iostream>

   
int main() {
	int num,count;
	scanf("%d %d",&num,&count);

	int number[101];
	for(int i=0; i<num; i++){
		number[i]=i+1;
	}
	int temp=0;
	int ch1, ch2;
	for(int i=0; i<count; i++){
		scanf("%d %d",&ch1,&ch2);
		temp = number[ch1-1];
		number[ch1-1] = number[ch2-1];
		number[ch2-1] = temp;
		
	
	}
	for(int i=0; i<num; i++){
		printf("%d ",number[i]);
	}
	return 0;
}