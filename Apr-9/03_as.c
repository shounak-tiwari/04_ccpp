//enter the choice (C,A,P,R,S)
#include<stdio.h>
int main(){
	char choice ;
	printf("Enter choice C,A,P,R,S : ");
	scanf("%c",&choice);
	if(choice=='A' || choice =='a'){
		printf("Welcome in Addidas");
	}
	else if(choice=='C' || choice =='c'){
		printf("Welcome in Campus");
	}
	else if (choice=='P' || choice =='p'){
		printf("Welcome in PUMA");
	}
	else if (choice=='R' || choice =='r'){
		printf("Welcome in Red tape");
	}
	else if (choice=='S' || choice =='s'){
		printf("Welcome in Relexo");
	}
	else{
		printf("invalid choice is not matched from given brand ");
	}
}
