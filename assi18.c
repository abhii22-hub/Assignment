#include <stdio.h>
#include <string.h>
int main() {
    char str[100], str2[100], rev[100];
    int i, len;
    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);
    printf("Length = %d\n", len);
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reverse = %s\n", rev);

    if(strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    printf("Enter second string: ");
    scanf("%s", str2);
    if(strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Not equal\n");
    if(strstr(str, str2) != NULL)
        printf("Substring found\n");
    else
        printf("Substring not found\n");
    return 0;
}

