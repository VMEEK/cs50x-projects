#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>


char get_string(char string[]);

int main(void){

char text[] = {};
printf("Text: ");
scanf("%s", &text);

printf("The text entered is : %s", text);





}

char get_string(char string[]){
    char value[] = {};
 printf(string);
 scanf("%s", &value);
 return value;
}

