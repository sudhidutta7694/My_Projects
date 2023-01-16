#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
    printf("Snake-Water-Gun Game:-");
    printf("\n\nThe game rules are:-\n1) Snake defeats Water\n2) Water defeats Gun\n3) Gun defeats Snake\n\n");
    int comp_choice;
    char obj[3][5] = {{'S','n','a','k','e'},{'G','u','n'},{'W','a','t','e','r'}};
    int rounds;
    printf("Enter the number of rounds that you wanna play: ");
    scanf("%d", &rounds);
    int i = 1;
    printf("\n\nPress\n1 for Snake\n2 for Gun\n3 for Water\n");
    int user_choice;
    int user_score=0;
    int comp_score=0;
    while (i<=rounds) {
        printf("\n\nRound no. %d:- \n", i);
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &user_choice);
        printf("Your choice is: ");
        for (int j=0; j<5; j++) {
            printf("%c",obj[user_choice-1][j]);
        }srand(time(0));
        comp_choice = rand()%3+1;
        printf("\nThe computer's choice is: ");
        for (int j=0; j<5; j++) {
            printf("%c",obj[comp_choice-1][j]);
        }if ((user_choice==1 && comp_choice==3) || (user_choice==2 && comp_choice==1) || (user_choice==3 && comp_choice==2)) {
            printf("\nYou have won! :)");
            user_score+=1;
        }else if ((user_choice==3 && comp_choice==1) || (user_choice==1 && comp_choice==2) || (user_choice==2 && comp_choice==3)) {
            printf("\nThe Computer has won! :(");
            comp_score+=1;
        }else {
            printf("\nIt's a draw!");
            user_score+=1;
            comp_score+=1;
        }printf("\nYour score is: %d",user_score);
        printf("\nThe computer's score is: %d",comp_score);
        i++;
    }if (user_score>comp_score) {
        printf("\n\nYou have scored a total of %d marks. \nCongratulations, you have won! :)",user_score);
    }else if (user_score<comp_score) {
        printf("\n\nThe Computer has scored a total of %d marks. \nAlas, you have lost! :(",comp_score);
    }else {
        printf("\n\nWell Done!\nIt's a draw!");
    }
}