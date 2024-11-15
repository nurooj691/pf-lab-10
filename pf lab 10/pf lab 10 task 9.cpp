#include<stdio.h>
#include<string.h>
struct employees{
	int employee_id;
	char name[50];
	char department[50];
	float salary;
};
int main(){
	int n;
	printf("enter the number of employees:\n");
	scanf("%d", &n);
	struct employees e[n];
	for(int i=0; i<n; i++){
		printf("entering the details for employee: %d\n", i+1);
		printf("enter employee ID:\n");
		scanf("%d", &e[i].employee_id);
		 getchar();
		printf("enter employee name:\n");
		fgets(e[i].name, sizeof(e[i].name), stdin);
		printf("enter employee departments:\n");
			fgets(e[i].department, sizeof(e[i].department), stdin);
		printf("enter employee salary:\n");
			scanf("%f", &e[i].salary);
	}
	printf("\n");
	for(int i=0; i<n; i++){
		printf("the details of employee: %d\n", i+1);
		printf("employee ID: %d\n", e[i].employee_id);	
		printf("employee name: %s\n", e[i].name);	
		printf("employee department: %s\n", e[i].department);
		printf("employee salary: %f\n", e[i].salary);
			
	}
	
	
	
	
	
	
	
	
	
	
	
}