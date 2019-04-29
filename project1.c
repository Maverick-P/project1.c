#include<stdio.h>
#include<string.h>
	

	void UCASE(char []);
	int main()
	{
		char code[1000], b;                                    // defining variables 
		int j;
		printf("This program performs Caesar cipher encryption and decrytion\nas well as substitution cipher encrytion and decryption\nPLEASE NOTE ALL WORDS ENTERED MANUALLY MUST BE IN LOWERCSASE\n\n" );
		printf("Please enter a message to encrypt with a Caesar cipher: "); // general introduction to the program
		gets(code);                                             // takes input to be encrypted
		UCASE(code);                                            // upper cases the letters
		for(j = 0; code[j] != '\0'; ++j){                       // loops to make full encrytion
			b = code[j];
			
			if(b >= 'A' && b <= 'Z'){                         // encryption between A and P
				b = b + 10;                                   // encryption key
				
				if(b > 'Z'){
					b = b - 'Z' + 'A' - 1;                    // encryption if the letter being encryted is in teh last 10 letters of the alphabet
				}
				
				code[j] = b;                                   
			}
		}
		
		printf("The encrypted Caesar cipher message: %s\n", (code));
		
		printf("Enter the encrypted Ceasar cipher above to decrypt it back again: ");
		gets(code);
		UCASE(code);
		for(j = 0; code[j] != '\0'; ++j){
			b = code[j];
			
			if(b >= 'A' && b <= 'Z'){
				b = b + 16;                                   // note 16, 16+10=26 thus a full rotation of the alphabet, decrypting the code
				
				if(b > 'Z'){
					b = b - 'Z' + 'A' - 1;
				}
				
				code[j] = b;
			}
		}
		
		printf("The Decrypted Ceasar cipher message: %s\n", (code));
	printf("this program shall now perform a substitution cipher\n\n");
		
	    char* ciphertext = "zebracowquitmdnhpgxfyjsklv";    // this is the cipher text which is referenced when encrypting

    char input[1500];                                   
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);                     // input from user
    input[strlen(input) - 1] = 0;                       
    int count = strlen(input);                              // identifies the length of the string

    char output[count];                                     // encrypted output
    for(int i = 0; i < count; i++) {                        // loops the characters inputed to get a full encryption
        int index = ((int) input[i]) - 97;                  // assigns new character by -97 (a) from input
        if(index < 0) {
            output[i] = ' ';                                // if it is = 0 put a space
        }
        else {
            output[i] = ciphertext[index];                  // encrytion starts if it is !=0
        }
    }
    output[count] = 0;                                      // terminate the string
    UCASE(output);                                          // makes the output upper case
    printf("output: %s\n", output);                         // output the results
    printf("Decrypted this message: %s\n", code);
		return 0;
	}
	
