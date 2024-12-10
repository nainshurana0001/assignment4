#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rpsgame(int player, int computer) {
    if(player == computer){
        if(player == 'r'){
            return(printf("\n\n\t\t\t\t\tRock vs Rock => The Game is a Draw\n\n"));
        }
        else if(player == 'p'){
            return(printf("\n\n\t\t\t\t\tPaper vs Paper => The Game is a Draw\n\n"));
        }
        else{
            return(printf("\n\n\t\t\t\t\tScissors vs Scissors => The Game is a Draw\n\n"));
        }
        
    }

    else if (player == 'r' && computer == 'p'){
        return(printf("\n\n\t\t\t\t\tRock vs Paper => Paper, Computer Win\n\n"));
    }
        

    else if (player == 'p' && computer == 'r'){
        return(printf("\n\n\t\t\t\t\tPaper vs Rock => Paper, You Win\n\n"));
    }

    else if (player == 's' && computer == 'r'){
        return(printf("\n\n\t\t\t\t\tScissors vs Rock => Rock, Computer Win\n\n"));
    }

    else if (player == 'r' && computer == 's'){
        return(printf("\n\n\t\t\t\t\tRock vs Scissors => Rock, You Win\n\n"));
    }
 
    else if (player == 'p' && computer == 's'){
        return(printf("\n\n\t\t\t\t\tPaper vs Scissors => Scissors, Computer Win\n\n"));
    }

    else if (player == 's' && computer == 'p'){
        return(printf("\n\n\t\t\t\t\tScissors vs Paper => Scissors, You Win\n\n"));
    }
        
}


int main() {
    int n;

    char player, computer;

    srand(time(NULL));

    n= rand()%100;

    

    printf("\n\n\n\n\t\t\t\tEnter r for STONE, p for PAPER and s for SCISSORS\n\t\t\t\t\t\t\t");
    scanf("%c", &player);

    if(n<=33){
        computer = 'r';
        printf("\n\n\t\t\t\t\t  Computer chose Rock\n\n");
    }
    else if(n>33 && n<=36){
        computer = 'p';
        printf("\n\n\t\t\t\t\t  Computer chose Paper\n\n");
    }
    else if(n>66 && n<=100){
        computer = 's';
        printf("\n\n\t\t\t\t\t  Computer chose Scissors\n\n");
    }



    rpsgame(player,computer);
}
