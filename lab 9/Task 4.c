#include <stdio.h>
#include <string.h>
int main() {
    char S[20];
    printf("Enter a sentence ");
    fgets(S, 20, stdin);
    char w = 'a';
    char *p = strchr(S, w);
        int index = p - S;
        printf("Word 'a' is found at index %d ", index);
    char W[] = "good";
    if(strstr(S, W)) {
        printf("\nWord good found");
    }
    return 0;
}
