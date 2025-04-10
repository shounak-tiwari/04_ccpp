#include<stdio.h>
int main(){
	float p,r,t;
	
	printf("Enter principle : ");
	scanf("%f",&p);
	
	printf("Enter rate : ");
	scanf("%f",&r);
	
	printf("Enter time : ");
	scanf("%f",&t);
	
	float si = (p*r*t)/100;
	
	float amount = p+si;
	
	printf("The simple interest is : %.2f",si);
	printf("\nThe amount is : %.2f",amount);
}
