#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define WIDTH 7
#define HEIGHT 6
#define CONNECT 4
#define P1 'X'
#define P2 'O'
#define EMPTY '-'
void clearBoard(char(*)[WIDTH]);
void printBoard(char(*)[WIDTH]);
int getPlayerColumnChoice(char(*)[WIDTH], char);
void makeMove(char(*)[WIDTH], char, int);
bool checkPosition(char(*)[WIDTH], int col, int row);

int main(void){
    char Board[HEIGHT][WIDTH];
    char current_player=P1;
    clearBoard(Board);
    printBoard(Board);
    while(1){
        int col_choice=-1;
        col_choice=getPlayerColumnChoice(Board,current_player);//successfully get the player's col choice
        makeMove(Board,current_player,col_choice);   
        printBoard(Board);
        if(current_player==P1) current_player=P2;
        else current_player=P1; //change player 
    }
}

void clearBoard(char(*board)[WIDTH]){
    for(int row=0;row<HEIGHT;row++){
        for(int col=0;col<WIDTH;col++){
            board[row][col]=EMPTY;
        }
    }
}
void printBoard(char(*board)[WIDTH]){
    for(int col=0;col<WIDTH;col++) {printf("%d ",col);};
    printf("\n");
    for(int row=0;row<HEIGHT;row++){
        for(int col=0;col<WIDTH;col++){
            printf("%c ",board[row][col]);
        }
        printf("\n");
    }
}
int getPlayerColumnChoice(char(*board)[WIDTH], char p){
    int col_choice;
    while(1){
        printf("Player %c enter column: ",p);
        int mark=scanf("%d", &col_choice);
        if (mark!=1) {
            while (getchar()!='\n'); 
            continue;
        }
        if(mark==1 && col_choice<0) exit(0);
        if(mark==1 && col_choice>=WIDTH) continue;
        if(board[0][col_choice]!=EMPTY) continue;
        return col_choice;//passint all the IF means col choice is valid. return it
    }
}
void makeMove(char(*board)[WIDTH], char p, int col_choice){
    int row=0;
    for(;row<HEIGHT;row++){
        if(board[row][col_choice]!=EMPTY){break;}
    }
    if(row==HEIGHT) board[HEIGHT-1][col_choice]=p;
    else board[row-1][col_choice]=p;
}
