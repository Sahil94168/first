#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("******Welcome to the quiz******\n");

    printf("Question 1: What is the capital of France?\n");
    printf("a) Paris\nb) London\nc) Berlin\nd) Madrid\n");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
        score++;
    } 
	 else if ( answer== 'b' || answer== 'c'||answer== 'd'){
        printf("Incorrect.\n");
    }
    else { printf("Wrong input");
	}

    printf("Question 2: What is the largest planet in our solar system?\n");
    printf("a) Venus\nb) Jupiter\nc) Mars\nd) Saturn\n");
    scanf(" %c", &answer);
    if (answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Question 3: What is the highest mountain in the world?\n");
    printf("a) Mount Everest\nb) Mount Kilimanjaro\nc) Mount Fuji\nd) Mount Olympus\n");
    scanf(" %c", &answer);
    if (answer == 'a') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    printf("Quiz complete! You scored %d out of 3.\n", score);

   
}
