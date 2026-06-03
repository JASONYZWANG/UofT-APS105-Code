#include <stdio.h>
#include <stdbool.h>
#include "lab8part1.h"

//Lab7 function 
void InitializeBoard(char(*board)[26], int n);
void printBoard(char(*board)[26], int n);
bool positionInBounds(int n, int row, int col);
bool checkLegalInDirection(char(*board)[26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol);
bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col);
void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col,
                            char colour, int deltaRow, int deltaCol);

//Lab 8 function
int Count_Flips_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol);
void Execute_Flips(char(*board)[26], int n, int row, int col, char turn);
bool Has_Valid_Moves(char(*board)[26], int n, char colour);

//Function decl in header
/* 
void printBoard(char board[][26], int n);

bool positionInBounds(int n, int row, int col);

bool checkLegalInDirection(char board[][26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol);
*/

int main(void) {
    char board[26][26];
    int n;
    //Initialize the board
    printf("Enter the board dimension: ");
    scanf("%d", &n);
    char comp_color;
    printf("Computer plays (B/W): ");
    scanf(" %c", &comp_color);
    InitializeBoard(board, n);
    printBoard(board, n);
    
    char current_turn = 'B';
    bool game_over = false;
    
    //Body
    while (!game_over) {
        //judge if the current player has any valid moves firstly
        if (Has_Valid_Moves(board,n,current_turn)==false) {
            char opposite;
            if(current_turn=='W') opposite='B';
            else opposite='W';
            // If the oppositeonent also has no valid moves, the game is over
            if (Has_Valid_Moves(board, n, opposite)==false) {
                break; //break to the end --> final check
            }
            else {
                printf("%c player has no valid move.\n", current_turn);
                current_turn=opposite;//current player cannot play, switch
                continue;
            }
        }
        
        if (current_turn == comp_color) {
            //COMPUTER PLAYER TURN
            int best_score=-__INT_MAX__;
            int best_row=-__INT_MAX__;
            int best_col=-__INT_MAX__;
            //record the best score, row and col position
            for (int i=0;i<n;i++) {
                for (int j=0;j<n;j++) {
                    if (board[i][j]=='U' && Judge_Available_Move(board, n, current_turn, i, j)==true) { //if this is a valid position for computer
                        int current_score = 0;
    
                        // Count availble num of flips in 8 directions
                        int Scan_direction_Row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
                        int Scan_direction_Col[] = {-1, 0, 1, -1, 1, -1, 0, 1};
                        for (int dir=0;dir<8;dir++) {
                            current_score+=Count_Flips_InDirection(board, n, i, j, current_turn, Scan_direction_Row[dir], Scan_direction_Col[dir]);
                        }
                        
                        //Compare with previous best score, and best position
                        if (current_score > best_score) {
                            best_score = current_score;
                            best_row = i;
                            best_col = j;
                        }
                    }
                }
            }
            
            printf("Computer places %c at %c%c.\n", current_turn, best_row + 'a', best_col + 'a');
            board[best_row][best_col] = current_turn;
            Execute_Flips(board, n, best_row, best_col, current_turn);
            printBoard(board, n);
            
        } else {
            //HUMAN PLAYER TURN
            printf("Enter move for colour %c (RowCol): ", current_turn);
            char charrow, charcol;
            scanf(" %c%c", &charrow, &charcol);
            int row = (int)(charrow-'a');
            int col = (int)(charcol-'a');
            
            if (positionInBounds(n, row, col)==false || Judge_Available_Move(board, n, current_turn, row, col)==false) { //Judge if human input an invalid position, end early.
                printf("Invalid move.\n");
                char winner;
                if(current_turn == 'B') winner='W';
                else winner='B';
                printf("%c player wins.\n", winner);
                return 0; //End
            }
            ////if this is a valid position for human
            board[row][col] = current_turn;
            Execute_Flips(board, n, row, col, current_turn);
            printBoard(board, n);
        }
        
        //Switch player
        if(current_turn=='B') current_turn='W';
        else current_turn='B';
        
        //Check the board is full
        bool full=true;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if(board[i][j]=='U') {
                    full = false;
                }
            }
        }
        if (full==true) { //all position are occupied
            game_over = true;
        }
    }
    
    // Final check: count occupation for both players
    int Black_Num=0, Write_Num=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (board[i][j]=='B') Black_Num++;
            if (board[i][j]=='W') Write_Num++;
        }
    }

    if (Black_Num>Write_Num) {
        printf("B player wins.\n");
    } else if (Write_Num>Black_Num) {
        printf("W player wins.\n");
    } else if(Write_Num==Black_Num){
        printf("Draw!\n");
    }
    
    return 0;
}

// Counts the number of flips a move will generate in a single direction
int Count_Flips_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
    if (checkLegalInDirection(board, n, row, col, colour, deltaRow, deltaCol)==false) {//if this direction branch is illegal
        return 0;
    }
    
    int num_flips = 0;
    int scan_row_index = row + deltaRow;
    int scan_col_index = col + deltaCol;
    while (positionInBounds(n, scan_row_index, scan_col_index) && 
           board[scan_row_index][scan_col_index] != colour &&
           board[scan_row_index][scan_col_index] != 'U') {
        num_flips++;
        scan_row_index += deltaRow;
        scan_col_index += deltaCol;
    }
    return num_flips;
}

// Executes all flips after a legal move is placed, flip all 8 directions
void Execute_Flips(char(*board)[26], int n, int row, int col, char turn) {
    int dR[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dC[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int dir = 0; dir < 8; dir++) {
        if (checkLegalInDirection(board, n, row, col, turn, dR[dir], dC[dir])) {
            Flip_Tiles_InDirection(board, n, row, col, turn, dR[dir], dC[dir]);
        }
    }
}

// Checks if a colour has at least one valid move remaining
bool Has_Valid_Moves(char(*board)[26], int n, char colour) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (Judge_Available_Move(board, n, colour, i, j)) {return true;}
        }
    }
    return false;
}

//Lab7 funcs

void InitializeBoard(char(*board)[26], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = 'U';
        }
    }
    board[n/2-1][n/2-1] = 'W';
    board[n/2-1][n/2] = 'B';
    board[n/2][n/2-1] = 'B';
    board[n/2][n/2] = 'W';
}

void printBoard(char(*board)[26], int n) {
    printf("  ");
    for(char index = 'a'; index < 'a' + n; index++) { printf("%c", index); }
    printf("\n");
    for(int i = 0; i < n; i++) {
        printf("%c ", (char)(i + (int)'a'));
        for(int j = 0; j < n; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

bool positionInBounds(int n, int row, int col) {
    if (row >= 0 && row < n && col >= 0 && col < n) { return true; }
    else { return false; }
}

bool checkLegalInDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
    int scan_row_index = row;
    int scan_col_index = col;
    int num_opstColour = 0; 
    bool meet_sameColour = false; 
    
    for(int i = 1; true; i++) {
        scan_row_index += deltaRow;
        scan_col_index += deltaCol; 
        if (positionInBounds(n, scan_row_index, scan_col_index) == false) { break; }
        if (board[scan_row_index][scan_col_index] == 'U') { break; }
        if (board[scan_row_index][scan_col_index] == colour) {
            meet_sameColour = true;
            break;
        }
        if (board[scan_row_index][scan_col_index] != colour) {
            num_opstColour++;
        }
    }
    if (meet_sameColour == true && num_opstColour > 0) return true; 
    return false;
}

bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col) {
    if (board[row][col] != 'U') return false; 
    else if (checkLegalInDirection(board, n, row, col, colour, -1, 0) == true ||
             checkLegalInDirection(board, n, row, col, colour, 1, 0) == true ||
             checkLegalInDirection(board, n, row, col, colour, 0, -1) == true ||
             checkLegalInDirection(board, n, row, col, colour, 0, 1) == true ||
             checkLegalInDirection(board, n, row, col, colour, -1, -1) == true ||
             checkLegalInDirection(board, n, row, col, colour, -1, 1) == true ||
             checkLegalInDirection(board, n, row, col, colour, 1, -1) == true ||
             checkLegalInDirection(board, n, row, col, colour, 1, 1) == true) {
        return true;
    }
    return false;
}

void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
    int scan_row_index = row, scan_col_index = col;
    for (; true;) {
        scan_row_index += deltaRow;
        scan_col_index += deltaCol;
        if (positionInBounds(n, scan_row_index, scan_col_index) == false) { break; }
        if (board[scan_row_index][scan_col_index] == 'U') { break; }
        if (board[scan_row_index][scan_col_index] == colour) { break; }
        if (board[scan_row_index][scan_col_index] != colour) {
            board[scan_row_index][scan_col_index] = colour;
        }
    }
}