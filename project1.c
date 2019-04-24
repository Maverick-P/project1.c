#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char CaesarCipher(char[], int i);

int main()
{
int n = 0;
int f = 0;
int j;
char code[1000], ln;
while(n < 10)
{
printf("Please choose your type of service:\nRotation encryption: 1 \nRotation decryption: 2\nSubstitution encryption: 3\nSubstitution decryption: 4\nEXIT: 5\n", &n);
scanf("%d", &n);
    switch (n){
        case 1:
            printf("Please write the message you should like to encrypt:\n", &rotmesg);
	gets(code);
	UCASE(code);
	for(j = 0; code[j] != '\0'; ++j){
		ln = code[j];
		
		if(ln >= 'A' && ln <= 'Z'){
			ln = ln + 10;
			
			if(ln > 'Z'){
				ln = ln - 'Z' + 'A' - 1;
			}
			
			code[j] = ln;
		}
	}
	
	printf("Encrypted message: %s", (code));
	
	return 0;
}

void UCASE(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}
            printf("would you like to decrypt this code?\nYES:1\nNO:2\n", &f);
            scanf("%d", f);
            printf("%d", f);
            if(f==2){exit(0);}
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

char CaesarCipher(char[], int i)
{
    i=3;
    return i;
}
