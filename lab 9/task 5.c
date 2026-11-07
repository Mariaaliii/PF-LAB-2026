#include<stdio.h>
#include<string.h>
int main() {
	char cities[5][20];
    int l= 0;
    int  p = 0;
    int i;
    printf("Enter cities name: ");
    for(i = 0; i<5; i++) {
    	scanf("%s", cities[i]);
    	if(strlen(cities[i])>l) {
    		l = strlen(cities[i]);
    		p = i;
		}
	}
	printf("\nThe cities are: ");
	for(i = 0; i < 5; i++) {
		printf("\n%s", cities[i]);
	}
	printf("\nlongest city is : %s with length %d", cities[p], l);
	return 0;
    
}
