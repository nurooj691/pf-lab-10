#include<stdio.h>
#include<string.h>
struct package{
	char name[50];
	char destination[50];
	int duration;
	int cost;
	int seats;
};
void addpackage(struct package p[], int *count){
	if(*count>=100){
		printf("no space left\n");
		return;
	}
	struct package newp;
	printf("enter the name of the package:\n");
	getchar();
	fgets(newp.name, 50, stdin);
	newp.name[strcspn(newp.name, "\n")];
	printf("enter the destination of the package:\n");
	fgets(newp.destination, 50, stdin);
	newp.destination[strcspn(newp.destination, "\n")];
	printf("enter the duration of the package:\n");
	scanf("%d", &newp.duration);
	printf("enter the cost of the package:\n");
	scanf("%d", &newp.cost);
	printf("enter the seats of the package:\n");
	scanf("%d", &newp.seats);
	p[*count]=newp;
	(*count)++;
	 printf("Travel package added successfully!\n\n");
	
}
void displaypackage(struct package p[], int count){
	if(count==0){
		printf("no packages availabe\n");
		return;
	}
	printf("availabe packages are:");
	for(int i=0; i<count; i++){
		printf("package name: %s\n", p[i].name);
		printf("package destination: %s\n", p[i].destination);
		printf("package duration: %d\n", p[i].duration);
		printf("package cost: %d\n", p[i].cost);
		printf("package seats: %d\n", p[i].seats);
	}
	printf("\n");
	
}

void bookpackage(struct package p[], int count){
	int n;
	printf("enter package number to book:\n");
	scanf("%d", &n);
	if(n<1||n>100){
		printf("invalid package number\n");
		return;
	}	
	if(p[n].seats>0){
		p[n].seats--;
		printf("package: %d booked successfully\n", n );
	}
	else
	printf("no seats availabe to book the package\n");
}
int main(){
	struct package p[100];
	int choice, count=0;
	do{
		printf("menu:\n");
		printf("1. Add package:\n");
		printf("2. Display availabe package:\n");
		printf("3. book package:\n");
		printf("4. exit\n");
		printf("enter a choice:\n");
		scanf("%d", &choice);
	
	switch(choice){
		case 1:
			addpackage(p, &count);
				break;
			case 2:
				displaypackage(p, count);
					break;
				case 3:
					bookpackage(p, count);
						break;
					case 4: 
						printf("exiting the program\n");
							break;
							default:
								printf("invalid choice. Try again");
	} }while(choice!=4);
}







