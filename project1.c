#include<stdio.h>
#include<string.h>

void UCASE(char []);
int main()
{
	char code[1000], ln;
	int j;
	
	printf("Enter a message to encrypt: ");
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
	
	printf("Encrypted message: %s\n", (code));
	
	printf("Enter a message to decrypt: ");
	gets(code);
	UCASE(code);
	for(j = 0; code[j] != '\0'; ++j){
		ln = code[j];
		
		if(ln >= 'A' && ln <= 'Z'){
			ln = ln + 16;
			
			if(ln > 'Z'){
				ln = ln - 'Z' + 'A' - 1;
			}
			
			code[j] = ln;
		}
	}
	
	printf("Encrypted message: %s\n", (code));
	
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
