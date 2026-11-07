#include<stdio.h>
#include<stdlib.h>
int main() {
	FILE  *fptr;
	char name[50];
	int i;
	int count = 0;
	fptr = fopen("students.txt", "w");
	if (fptr == NULL) {
		printf("Error!");
		exit(1);
	}
	printf("Enter  3 student names: ");
	for(i = 0; i<3; i++) {
		scanf("%s", name);
		fprintf(fptr, "%s\n", name);
	}
	fclose(fptr);
	fptr = fopen("students.txt", "r");
	if (fptr == NULL) {
		printf("Error!");
		exit(1);
	}
    printf("\n Names read from students.txt are: ");
    while(fgets(name, 50, fptr) != NULL)
    {
    	count++;
        printf("%d: %s", count, name);
    }
    printf("\n Total students in file: %d", count);
    fclose(fptr);

    return 0;
}
	

