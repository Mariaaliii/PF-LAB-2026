#include <stdio.h>
#include <stdbool.h>
bool isSubsequence(char* s, char* t) {
    int i = 0;
    int j;
    for (j = 0; t[j] != '\0' && s[i] != '\0'; j++) {
        if (s[i] == t[j]) {
            i++;
        }
    }
    if(s[i] == '\0') {
    	return true;
	}
	else {
		return false;
	}
}
int main() {
    printf("%d\n", isSubsequence("abc", "ahbgdc"));
    printf("%d\n", isSubsequence("axc", "ahbgdc")); 
    return 0;
}
