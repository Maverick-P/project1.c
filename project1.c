
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
int n = 0;
int f = 0;
while(n > -1)
{
printf("Please choose your type of service:\nRotation encryption: 1 \nRotation decryption: 2\nSubstitution encryption: 3\nSubstitution decryption: 4\nEXIT: 5\n", &n);
scanf("%d", &n);
    switch (n){
        case 1:
            printf("Please write the message you should like to encrypt:\n");
            printf("would you like to exit or try another?\nYES: 1\nNO: 2\n");
        case 2:
            printf("Please write the message you should like to decrypt:\n");  
    break;
        case 3:
            printf("Please write the message you should like to encrypt:\n");
    break;
        case 4:
            printf("Please write the message you should like to decrypt:\n"); 
    break;
        case 5:
            exit(0);
        default:
        printf("please choose a number between 1 and 5:\n");
   
}
}
 return 0;
}
