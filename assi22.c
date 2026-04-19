
#include <stdio.h>
#include <string.h>
int main() {
char str[100], str2[100], rev[100];
int choice, i, len;

printf("Enter string: ");
scanf("%s", str);

while(1) {  
 printf("\n 1.Length\n 2.Reverse\n 3.Compare\n 4.concatenated\n 5.Exit\n");
 printf("Enter choice: ");
 scanf("%d", &choice);

 if(choice == 1) {
 len = strlen(str);
 printf("Length = %d\n", len);
}

else if(choice == 2) {
len = strlen(str);
for(i = 0; i < len; i++)
rev[i] = str[len - i - 1];
rev[i] = '\0';
 printf("Reverse = %s\n", rev);
 }

else if(choice == 3) {
 printf("Enter second string: ");
scanf("%s", str2);

if(strcmp(str, str2) == 0)
printf("Strings are equal\n");
else
printf("Not equal\n");
}

else if(choice == 4){
 printf("Enter second string: ");
scanf("%s", str2);

strcat(str,str2);
printf("concatenated string =%s\n",str);
}

else if(choice == 5) {
 printf("Exiting program");
break;   
}
else {
 printf("Invalid choice\n");
}
}
return 0;
}
