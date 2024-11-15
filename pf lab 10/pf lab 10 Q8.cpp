#include<stdio.h>
void printarray(int array[], int size){
	if(size==0){
		return;
	}
	printf("%d ", array[0]);
	printarray(array+1, size-1);
	
}


int main(){
	int size;
	printf("enter the size of array:\n");
	scanf("%d", &size);
	int array[size];
	printf("enter the elements of array:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &array[i]);
	}
	printf("array elements are:\n");
	printarray(array,size);
	
}