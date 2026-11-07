#include<stdio.h>
#include<string.h>
int main() {
	char f[20];
    char l[20];
    printf("Enter first name: ");
    scanf("%s", &f);
    printf("\nEnter last name: ");
    scanf("%s", &l);
    char fl[40];
    strcat(fl, f);
    strcat(fl, " ");
    strcat(fl, l);
    printf("\nFull name: ");
    printf("%s", fl);
    return 0;
  }
