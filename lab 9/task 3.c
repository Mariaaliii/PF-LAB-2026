#include <stdio.h>
#include <string.h>
int main() {
    char src1[] = "lab10pass";
    char src2[20];
    printf("Enter password: ");
    scanf("%s", &src2);
    if (strcmp(src1, src2) < 0) {
        printf("Access denied");
    }
    else if (strcmp(src1, src2)>0) {
        printf("Access denied");
    }
    else if (strcmp(src1, src2) == 0) {
        printf("Access granted");
    }
    else {
        printf("Invalid password");
    }
    if(strncmp(src1, src2, 3) == 0) {
        printf("\nFirst three letters matched ");
    }
    return 0;
}
