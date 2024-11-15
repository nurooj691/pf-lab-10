#include<stdio.h>
#include<string.h>
void reversestr(char str[], int len){
	if(len==0){
		return;
	}
	printf("%c", str[len-1]);
	reversestr(str, len-1);
}
int main(){
	int size;
	printf("enter the size of string:\n");
	scanf("%d", &size);
	 getchar();
	char str[size+1];
	printf("enter the string:\n");
	fgets(str, size + 1, stdin);
	str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
	printf("reversed string:\n");
	reversestr(str, len);	
	
}