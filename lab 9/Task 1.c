#include<stdio.h>
#include<string.h>
int main() {
	char str[20];
	printf("Enter names: ");
	fgets(str, 20, stdin);
	printf("length of name is %lu\n", strlen(str));
	char copy[20];
	strcpy(copy, str);
	printf("the copy is:\n");
	fputs(copy, stdout);
	printf("\nSize of array is %d", sizeof(str));
	return 0;
}
