#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int makeMove(const char board[][26], int n, char turn, int *row, int *col);

// lab7 funciton
void InitializeBoard(char(*board)[26], int n);
void printBoard(char(*board)[26], int n);
bool positionInBounds(int n, int row, int col);
bool checkLegalInDirection(char(*board)[26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol);
bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col);
void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col,
                            char colour, int deltaRow, int deltaCol);

// lab8 function
int Count_Flips_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol);
void Execute_Flips(char(*board)[26], int n, int row, int col, char turn);
bool Has_Valid_Moves(char(*board)[26], int n, char colour);

//Function decl in header




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


int makeMove(const char board[][26], int n, char turn, int *row, int *col) {
    if (n != 8 || (turn != 'B' && turn != 'W') || !row || !col) return -1;
    //define the score matrix
    int weights[8][8] = {
        { 80, -20,  10,   5,   5,  10, -20, 80},
        { -20, -50,  -2,  -2,  -2,  -2, -50, -20},
        {  10,  -2,   5,   1,   1,   5,  -2,  10},
        {   5,  -2,   1,   1,   1,   1,  -2,   5},
        {   5,  -2,   1,   1,   1,   1,  -2,   5},
        {  10,  -2,   5,   1,   1,   5,  -2,  10},
        { -20, -50,  -2,  -2,  -2,  -2, -50, -20},
        { 80, -20,  10,   5,   5,  10, -20, 80}
    };
    double best_score=-INT_MAX;
    int found_row = -1, found_col = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 'U' && Judge_Available_Move((char(*)[26])board, n, turn, i, j)) {
                int flips_number = 0;
                int dR[] = {-1, -1, -1, 0, 0, 1, 1, 1};
                int dC[] = {-1, 0, 1, -1, 1, -1, 0, 1};
                for (int d = 0; d < 8; d++) {
                    flips_number += Count_Flips_InDirection((char(*)[26])board, n, i, j, turn, dR[d], dC[d]);
                }
                // Score= socre in matrix + flips_number * constant;

                double current_score = weights[i][j] + (flips_number * 0.5);

                //compare to the previous best position
                if (current_score > best_score) {
                    best_score = current_score;
                    found_row = i;
                    found_col = j;
                }
            }
        }
    }

    *row = found_row;
    *col = found_col;
    return 0;
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

/* Standalone self-play driver added during repository preparation. */
int main(void) {
    char board[26][26];
    InitializeBoard(board, 8);
    char turn='B';
    int moves=0, passes=0;
    while (passes<2) {
        if (!Has_Valid_Moves(board,8,turn)) { passes++; }
        else {
            int row=-1,col=-1;
            makeMove((const char (*)[26])board,8,turn,&row,&col);
            if (!positionInBounds(8,row,col) || !Judge_Available_Move(board,8,turn,row,col)) return 1;
            board[row][col]=turn;
            Execute_Flips(board,8,row,col,turn);
            moves++; passes=0;
        }
        turn=turn=='B'?'W':'B';
    }
    printBoard(board,8);
    int black=0,white=0;
    for(int r=0;r<8;r++) for(int c=0;c<8;c++) {
        black += board[r][c]=='B'; white += board[r][c]=='W';
    }
    printf("Self-play complete: moves=%d black=%d white=%d\n",moves,black,white);
    return 0;
}
