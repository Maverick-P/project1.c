#include<stdio.h>
	#include<string.h>
	

	void UCASE(char []);
	int main()
	{
		char code[1000], ln;
		int j;
		printf("This program performs Caesar cipher encryption and decrytion\nas well as substitution cipher encrytion adn decryption\n\n" );
		printf("Please enter a message to encrypt with a Caesar cipher: ");
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
		
		printf("The encrypted Caesar cipher message: %s\n", (code));
		
		printf("Enter the encrypted Ceasar cipher above to decrypt it back again: ");
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
		
		printf("The Decrypted Ceasar cipher message: %s\n", (code));
	printf("this program shall now perform a substitution cipher\n\n");
		
	    char* ciphertext = "qwertyuiopasdfghjklzxcvbnm";    // cipher lookup

    char input[500];                                    // input buffer
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);                 // safe input from user
    input[strlen(input) - 1] = 0;                       // remove the \n (newline)
    int count = strlen(input);                          // get the string length

    char output[count];                                 // output string
    for(int i = 0; i < count; i++) {                    // loop through characters in input
        int index = ((int) input[i]) - 97;              // get the index in the cipher by subtracting 'a' (97) from the current character
        if(index < 0) {
            output[i] = ' ';                            // if index < 0, put a space to account for spaces
        }
        else {
            output[i] = ciphertext[index];              // else, assign the output[i] to the ciphertext[index]
        }
    }
    output[count] = 0;                                  // null-terminate the string

    printf("output: %s\n", output);                     // output the result

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
