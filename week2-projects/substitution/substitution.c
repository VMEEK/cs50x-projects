#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


char encrypt_character(char letter, char key[]);
int main(int argc, char *argv[]){

    char plaintext[100];
    char ciphertext[100];

    printf("isze or argv: %d \n", strlen(argv[1]));
    if(argc > 2 || argc < 2){
        printf("Usage: ./substitution key \n");
        return 1;
    }

    if(strlen(argv[1]) != 26){
        printf("Key must contain 26 characters \n");
        return 1;
    }

    printf("plaintext: ");
    fgets(plaintext,sizeof(plaintext),stdin);

   for(int i = 0; plaintext[i] != '\0'; i++){
        char encryptedChar = encrypt_character(plaintext[i],argv[1]);
        ciphertext[i] = encryptedChar;
   }
    printf("ciphertext: %s", ciphertext);

    return 0;

}



char encrypt_character(char letter, char key[]){
        char encryptedChar;
        int index;
    if(letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z' ){
        if(isupper(letter)){
            index = letter - 'A';
        encryptedChar = key[index];

        }else if(islower(letter)){
            index = letter - 'a';
        encryptedChar = tolower(key[index]);
        }
        return encryptedChar;
    }
    return letter;
}
