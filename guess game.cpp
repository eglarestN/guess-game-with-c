#include<stdio.h>

int main(void)
{
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuess = 0;
	
	while(guess != secretNumber && outOfGuess ==0 ){
		if(guessCount < guessLimit){
			printf("enter a number:");
			scanf("%d", &guess);
			guessCount++;
		}
		else{
			outOfGuess = 1;
		}
	}
		if(outOfGuess == 1){
			printf("out of guesses");
		}
		else{
			printf("you win");
			
		}
	
	
	
	return 0;
}
