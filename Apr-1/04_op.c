// enter the mrp of artical and apply 15% discount in mrp find selling price 
#include<stdio.h>
int main(){
	float mrp =25.35;
	float dis = (mrp*15/100);
	
	float sp = mrp-dis;
	
	printf("%f",sp);
	
}
