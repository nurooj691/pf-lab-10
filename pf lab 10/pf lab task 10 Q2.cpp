#include<stdio.h>
void percentage(int num, int percent){
	if(percent>100)
	return; 
	printf("%d percent= %f\n", percent, num*(percent/100.0));
	percentage(num, percent+1);
}
int main(){
	int num;
	printf("enter a number to split into percentages:\n");
	scanf("%d", &num);
	percentage(num, 1);
}