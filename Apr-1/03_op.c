// enter salary of employee , pf is 4.8% of salary find gross salary of employee 

#include<stdio.h>
int main(){
	float salary;
	salary = 45000;
	float pf =salary*(4.8/100);
	
	float gross = salary + pf;
	
	printf("%f",gross);
}
