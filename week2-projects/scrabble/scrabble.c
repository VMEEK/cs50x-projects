#include<stdio.h>
#include<ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_points(char word[]);
int main(void){

    char wordOfPlayerOne[2048];
    char wordOfPlayerTwo[2048];
    int playerOneScore;
    int playerTwoScore;

printf("Player 1: ");
fgets(wordOfPlayerOne,sizeof(wordOfPlayerOne),stdin);

printf("Player 2: ");
fgets(wordOfPlayerTwo,sizeof(wordOfPlayerTwo),stdin);

playerOneScore = compute_points(wordOfPlayerOne);
playerTwoScore = compute_points(wordOfPlayerTwo);

if(playerOneScore > playerTwoScore){
    printf("Player 1 wins! \n");
}else if(playerTwoScore > playerOneScore){
    printf("player 2 wins! \n");
}else{
    printf("Tie! \n");
}
}

int compute_points(char word[]){
    char firstAsciiChar = 'A';
    int score = 0;

    for(int i = 0; word[i] != '\0'; i++){
       if(isupper(word[i])){
            score += POINTS[word[i] - 'A'];
       }else if(islower(word[i])){
           score += POINTS[word[i] - 'a'];
       }
    }
    return score;
}
