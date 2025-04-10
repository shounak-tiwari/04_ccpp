// enter number and print yes or number is odd when number is odd 
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	
	if(num%2!=0){
		printf("Number is odd");
	}
	return 0;
}
