#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "madam";
    int ln = strlen(str);
    int is_palindrome = 1;
    for (int i = 0; i < ln / 2; i++) {
        if (str[i]!= str[ln-1-i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome==1) {
        printf("palindrome\n");
    } else {
        printf("not palindrome\n");
    }
 return 0;
}