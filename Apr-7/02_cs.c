// enter the number and print yes if number is even 
#include<stdio.h>
int main(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	if(number%2==0){
		printf("number is even");
	}
	return 0;
}
