#include<stdio.h>
int main(){
	char gender;
	printf("Enter M for male F for Female : ");
	scanf("%c",&gender);
	
	if(gender =='M' || gender =='m'){
		printf("candidate is male");
	}
	else{
		printf("candidate is female");
	}
}
