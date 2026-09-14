#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>



char rotate(char c, int n);

int main(int argc, char *argv[]){

    char plaintext[2048];
    char ciphertext[2048];

    if(argc != 2){
        printf("Usage: ./caesar key");
        return 1;
    }
    for(int i = 0; argv[1][i] != '\0'; i++){
        if(!isdigit(argv[1][i])){
           printf("Usage: ./caesar key");
           return 1;
        }
    }

    int shift = atoi(argv[1]);

    printf("Plaintext: ");
    fgets(plaintext,sizeof(plaintext),stdin);

    int i;
    for(i = 0; plaintext[i] != '\0'; i++){
        char newChar = rotate(plaintext[i],shift);
        ciphertext[i] = newChar;
    }
    ciphertext[i] = '\0';
    printf("ciphertext: %s \n",ciphertext);

    return 0;
}


char rotate(char c, int n){
    int cipherCharAsciiValue;
    int plainCharAsciiValue = (int) c;
    char cipherCharacter;
    int firstAsciiCharValue;
    int asciiDifference;
    int alphabetPositionOfCipherChar;
    int alphabetPositionOfPlainTextChar;

    if(isupper(c)){
        firstAsciiCharValue = (int) 'A';
    }
    else if(islower(c)){
        firstAsciiCharValue = (int) 'a';
    }else if(plainCharAsciiValue < 65 || plainCharAsciiValue > 90){
        return c;
    }else if(plainCharAsciiValue < 97 && plainCharAsciiValue > 122){
        return c;
    }else {
        printf("Invalid character!");
    }

    asciiDifference = plainCharAsciiValue - firstAsciiCharValue;
    alphabetPositionOfPlainTextChar = asciiDifference;
    alphabetPositionOfCipherChar = (alphabetPositionOfPlainTextChar + n) % 26;
    cipherCharAsciiValue = alphabetPositionOfCipherChar + firstAsciiCharValue;

    cipherCharacter = (char) cipherCharAsciiValue;
    return cipherCharacter;
}
