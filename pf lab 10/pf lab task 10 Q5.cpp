#include<stdio.h>
int sum(int num){
	if(num==0){
		return 0;
	}
	return num%10+sum(num/10);
}
int main(){
	int num;
	printf("enter a number to calculate its sum:\n");
	scanf("%d", &num);
	int result = sum(num);
	printf("the sum of digits of %d is: %d", num, result);
	
}