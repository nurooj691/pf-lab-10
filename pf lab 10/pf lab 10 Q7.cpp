#include<stdio.h>
void bubble_sort(int array[], int size){
	if(size==1){
		return ;
	}
	for(int i=0; i<size-1; i++){
		if(array[i]<array[i+1]){
			int temp = array[i];
			array[i]=array[i+1];
			array[i+1]=temp;
		}
	}
	bubble_sort(array, size-1);
	
}
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
	bubble_sort(array, size);
	printf("array elements after bubble sort are:\n");
	printarray(array,size);
	
}