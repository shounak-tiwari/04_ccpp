#include<stdio.h>
int main(){
	char ch;
	printf("Enter char : ");
	scanf("%c",&ch);

	
	if(ch>=65 && ch<=90){
		printf("upper case");
	}
	if(ch>=97 && ch <=122){
		printf("lower case");
	}
	
}
