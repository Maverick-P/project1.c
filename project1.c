#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
int n = 0;
int f = 0;
char rotmesg[100];
char submesg[100];
while(n < 10)
{
printf("Please choose your type of service:\nRotation encryption: 1 \nRotation decryption: 2\nSubstitution encryption: 3\nSubstitution decryption: 4\nEXIT: 5\n", &n);
scanf("%d", &n);
    switch (n){
        case 1:
            printf("Please write the message you should like to encrypt:\n", &rotmesg);
            scanf("\n");
            scanf ("%[^\n]%*c", &rotmesg);
            printf("%s", rotmesg);
    break;
        case 2:
            printf("Please write the message you should like to decrypt:\n", &rotmesg);
            scanf("\n");
            scanf ("%[^\n]%*c", &rotmesg);
            printf("%s\n", rotmesg);
    break;
        case 3:
            printf("Please write the message you should like to encrypt:\n", &submesg);
            scanf("\n");
             scanf ("%[^\n]%*c", &submesg);
            printf("%s\n", submesg);
    break;
        case 4:
            printf("Please write the message you should like to decrypt:\n", &submesg);
            scanf("\n");
             scanf ("%[^\n]%*c", &submesg);
            printf("%s\n", &submesg);
    break;
        case 5:
            exit(0);
        default:
        printf("please choose a number between 1 and 5:\n");
}
 printf("would you like to exit?\nYES: 1\nNO: 2\n", &n);
 scanf("%d", &n);
 if (n==1){exit(0);}
}
 return 0;
}
