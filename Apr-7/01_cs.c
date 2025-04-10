//enter char and check it is alph bat or not 
#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter a char : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch <='z'){
		printf("char is alphabat");
		//execute when condition is true 
	}
	return 0;
}
