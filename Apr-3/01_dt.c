#include<stdio.h>
int main(){
	long long int x= 8718828288871882828;
	long long int y ;
	int size = sizeof(y);
	printf("%dbytes \n",size);
	// maximumsize of gnu ubantu 9.4.0 is 16 bytes 
	printf("%lld",x);
}
