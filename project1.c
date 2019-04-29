void UCASE(char []);
	
	int main()
	{
	    char code[1000], b;                                    // defining variables 
		int j, n = 0;
		    printf("This program performs Caesar cipher encryption and decrytion\nas well as substitution cipher encrytion and decryption\nPLEASE NOTE ALL WORDS ENTERED MANUALLY MUST BE IN LOWERCSASE\n\n" );
		    printf("Menu\nCaesar cipher encryption and decryption: 1\nSubstitution cipher Encryption and Decryption: 2\nUnknown Caesar cipher decryption: 3\nUnknown substitution cipher decryption:4\n\nPlease enter your choice:  \n", n);
		    gets(n);
		    switch(n){
		        case 1:
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
		break;
		    
		        case 2:
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

printf("incorrect submission");
	return 0;
	}
	}

	  void UCASE(char s[]) {                                  // function to make output upper case
	    int U = 0;
	   
	    while (s[U] != '\0') {
	        if (s[U] >= 'a' && s[U] <= 'z') {
	         s[U] = s[U] - 32;                              // minus 32 ascii value to give upper case of the letter
	      }
	        U++;
	   }
	}
