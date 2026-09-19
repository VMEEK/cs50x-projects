#include<stdio.h>
#include<math.h>
#include<ctype.h>


int count_letters(char text[]);
int count_words(char text[]);
int count_sentences(char text[]);


int main(void){

char text[4096];
float averageNumberOfLetters;
float averageNumberOfSentences;

printf("Text: ");
fgets(text,sizeof(text),stdin);

int numberOfletters = count_letters(text);

int numberOfWords = count_words(text);
int numberOfSentences = count_sentences(text);

averageNumberOfLetters = (float) numberOfletters / (float) numberOfWords * 100;
averageNumberOfSentences = (float) numberOfSentences / (float) numberOfWords * 100;

int index = round(0.0588 * averageNumberOfLetters - 0.296 * averageNumberOfSentences - 15.8);

if(index < 1){
    printf("Before Grade 1 \n");
}else if(index >= 16){
printf("Grade 16+ \n",index);
}else{
printf("Grade %d \n",index);
}


return 0;

}



int count_letters(char text[]){
    int count = 0;
for(int i = 0; text[i] != '\0'; i++){
    if(isalpha(text[i])){
        count += 1;
    }
}
return count;
}

int count_words(char text[]){
    int count = 0;
    int wordCount;
for(int i = 0; text[i] != '\0'; i++){
    if(text[i] == ' ' && text[i + 1] != ' ' ){
        count += 1;
    }
}

wordCount = count + 1;
return wordCount;
}

int count_sentences(char text[]){
    int count = 0;
    int sentenceCount;

for(int i = 0; text[i] != '\0'; i++){
        if(text[0] == ' '){
            return 1;
        }

    if(text[i] == '.' || text[i] == '!' || text[i] == '?'){
        count += 1;
    }
}
sentenceCount = count;
return sentenceCount;
}
