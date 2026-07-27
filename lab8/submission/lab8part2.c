// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include "lab8part2.h"
// #include "liblab8part2.h"
// int makeMove(const char board[][26], int n, char turn, int *row, int *col);

// // lab7 funciton 
// void InitializeBoard(char(*board)[26], int n);
// void printBoard(char(*board)[26], int n);
// bool positionInBounds(int n, int row, int col);
// bool checkLegalInDirection(char(*board)[26], int n, int row, int col,
//                            char colour, int deltaRow, int deltaCol);
// bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col);
// void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col,
//                             char colour, int deltaRow, int deltaCol);

// // lab8 function
// int Count_Flips_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol);
// void Execute_Flips(char(*board)[26], int n, int row, int col, char turn);
// bool Has_Valid_Moves(char(*board)[26], int n, char colour);

// //Function decl in header
// /* 
// void printBoard(char board[][26], int n);

// bool positionInBounds(int n, int row, int col);

// bool checkLegalInDirection(char board[][26], int n, int row, int col,
//                            char colour, int deltaRow, int deltaCol);
// */

// /*
// int main(void) {
//     char board[26][26];
//     int n;
//     //Initialize the board
//     printf("Enter the board dimension: ");
//     scanf("%d", &n);
//     char comp_color;
//     printf("Computer plays (B/W): ");
//     scanf(" %c", &comp_color);
//     InitializeBoard(board, n);
//     printBoard(board, n);
    
//     char current_turn = 'B';
//     bool game_over = false;
    
//     //Body
//     while (!game_over) {
//         //judge if the current player has any valid moves firstly
//         if (Has_Valid_Moves(board,n,current_turn)==false) {
//             char opposite;
//             if(current_turn=='W') opposite='B';
//             else opposite='W';
//             // If the oppositeonent also has no valid moves, the game is over
//             if (Has_Valid_Moves(board, n, opposite)==false) {
//                 break; //break to the end --> final check
//             }
//             else {
//                 printf("%c player has no valid move.\n", current_turn);
//                 current_turn=opposite;//current player cannot play, switch
//                 continue;
//             }
//         }
        
//         if (current_turn == comp_color) {
//             //COMPUTER PLAYER TURN
            
//             int best_row=-__INT_MAX__;
//             int best_col=-__INT_MAX__;
//             makeMove((const char(*)[26])board, n, current_turn, &best_row, &best_col);
            
//             printf("Computer places %c at %c%c.\n", current_turn, best_row + 'a', best_col + 'a');
//             board[best_row][best_col] = current_turn;
//             Execute_Flips(board, n, best_row, best_col, current_turn);
//             printBoard(board, n);
            
//         } else {
//             //HUMAN PLAYER TURN
//             int row;
//             int col;
//             findSmartestMove(board, n, current_turn, &row, &col);//AI will give the best posision
//             printf("Testing AI move (row, col): %c%c\n", row + 'a', col + 'a');
            
//             if (positionInBounds(n, row, col)==false || Judge_Available_Move(board, n, current_turn, row, col)==false) { //Judge if human input an invalid position, end early.
//                 printf("Invalid move.\n");
//                 char winner;
//                 if(current_turn == 'B') winner='W';
//                 else winner='B';
//                 printf("%c player wins.\n", winner);
//                 return 0; //End
//             }
//             //if this is a valid position for human
//             board[row][col] = current_turn;
//             Execute_Flips(board, n, row, col, current_turn);
//             printBoard(board, n);
//         }
        
//         //Switch player
//         if(current_turn=='B') current_turn='W';
//         else current_turn='B';
        
//         //Check the board is full
//         bool full=true;
//         for (int i=0; i<n; i++) {
//             for (int j=0; j<n; j++) {
//                 if(board[i][j]=='U') {
//                     full = false;
//                 }
//             }
//         }
//         if (full==true) { //all position are occupied
//             game_over = true;
//         }
//     }
    
//     // Final check: count occupation for both players
//     int Black_Num=0, Write_Num=0;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (board[i][j]=='B') Black_Num++;
//             if (board[i][j]=='W') Write_Num++;
//         }
//     }

//     if (Black_Num>Write_Num) {
//         printf("B player wins.\n");
//     } else if (Write_Num>Black_Num) {
//         printf("W player wins.\n");
//     } else if(Write_Num==Black_Num){
//         printf("Draw!\n");
//     }
    
//     return 0;
// }
// */

// // Counts the number of flips a move will generate in a single direction
// int Count_Flips_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
//     if (checkLegalInDirection(board, n, row, col, colour, deltaRow, deltaCol)==false) {//if this direction branch is illegal
//         return 0;
//     }
    
//     int num_flips = 0;
//     int scan_row_index = row + deltaRow;
//     int scan_col_index = col + deltaCol;
//     while (positionInBounds(n, scan_row_index, scan_col_index) && 
//            board[scan_row_index][scan_col_index] != colour &&
//            board[scan_row_index][scan_col_index] != 'U') {
//         num_flips++;
//         scan_row_index += deltaRow;
//         scan_col_index += deltaCol;
//     }
//     return num_flips;
// }

// // Executes all flips after a legal move is placed, flip all 8 directions
// void Execute_Flips(char(*board)[26], int n, int row, int col, char turn) {
//     int dR[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//     int dC[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
//     for (int dir = 0; dir < 8; dir++) {
//         if (checkLegalInDirection(board, n, row, col, turn, dR[dir], dC[dir])) {
//             Flip_Tiles_InDirection(board, n, row, col, turn, dR[dir], dC[dir]);
//         }
//     }
// }

// // Checks if a colour has at least one valid move remaining
// bool Has_Valid_Moves(char(*board)[26], int n, char colour) {
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (Judge_Available_Move(board, n, colour, i, j)) {return true;}
//         }
//     }
//     return false;
// }


// int makeMove(const char board[][26], int n, char turn, int *row, int *col) {
//     //define the score matrix
//     int weights[8][8] = {
//         { 80, -20,  10,   5,   5,  10, -20, 80},
//         { -20, -50,  -2,  -2,  -2,  -2, -50, -20},
//         {  10,  -2,   5,   1,   1,   5,  -2,  10},
//         {   5,  -2,   1,   1,   1,   1,  -2,   5},
//         {   5,  -2,   1,   1,   1,   1,  -2,   5},
//         {  10,  -2,   5,   1,   1,   5,  -2,  10},
//         { -20, -50,  -2,  -2,  -2,  -2, -50, -20},
//         { 80, -20,  10,   5,   5,  10, -20, 80}
//     };
//     double best_score=-__INT_MAX__;
//     int found_row = -1, found_col = -1;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (board[i][j] == 'U' && Judge_Available_Move((char(*)[26])board, n, turn, i, j)) {
//                 int flips_number = 0;
//                 int dR[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//                 int dC[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//                 for (int d = 0; d < 8; d++) {
//                     flips_number += Count_Flips_InDirection((char(*)[26])board, n, i, j, turn, dR[d], dC[d]);
//                 }
//                 // Score= socre in matrix + flips_number * constant;

//                 double current_score = weights[i][j] + (flips_number * 0.5);

//                 //compare to the previous best position 
//                 if (current_score > best_score) {
//                     best_score = current_score;
//                     found_row = i;
//                     found_col = j;
//                 }
//             }
//         }
//     }

//     *row = found_row;
//     *col = found_col;
//     return 0;
// }



// //Lab7 funcs

// void InitializeBoard(char(*board)[26], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             board[i][j] = 'U';
//         }
//     }
//     board[n/2-1][n/2-1] = 'W';
//     board[n/2-1][n/2] = 'B';
//     board[n/2][n/2-1] = 'B';
//     board[n/2][n/2] = 'W';
// }

// void printBoard(char(*board)[26], int n) {
//     printf("  ");
//     for(char index = 'a'; index < 'a' + n; index++) { printf("%c", index); }
//     printf("\n");
//     for(int i = 0; i < n; i++) {
//         printf("%c ", (char)(i + (int)'a'));
//         for(int j = 0; j < n; j++) {
//             printf("%c", board[i][j]);
//         }
//         printf("\n");
//     }
// }

// bool positionInBounds(int n, int row, int col) {
//     if (row >= 0 && row < n && col >= 0 && col < n) { return true; }
//     else { return false; }
// }

// bool checkLegalInDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
//     int scan_row_index = row;
//     int scan_col_index = col;
//     int num_opstColour = 0; 
//     bool meet_sameColour = false; 
    
//     for(int i = 1; true; i++) {
//         scan_row_index += deltaRow;
//         scan_col_index += deltaCol; 
//         if (positionInBounds(n, scan_row_index, scan_col_index) == false) { break; }
//         if (board[scan_row_index][scan_col_index] == 'U') { break; }
//         if (board[scan_row_index][scan_col_index] == colour) {
//             meet_sameColour = true;
//             break;
//         }
//         if (board[scan_row_index][scan_col_index] != colour) {
//             num_opstColour++;
//         }
//     }
//     if (meet_sameColour == true && num_opstColour > 0) return true; 
//     return false;
// }

// bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col) {
//     if (board[row][col] != 'U') return false; 
//     else if (checkLegalInDirection(board, n, row, col, colour, -1, 0) == true ||
//              checkLegalInDirection(board, n, row, col, colour, 1, 0) == true ||
//              checkLegalInDirection(board, n, row, col, colour, 0, -1) == true ||
//              checkLegalInDirection(board, n, row, col, colour, 0, 1) == true ||
//              checkLegalInDirection(board, n, row, col, colour, -1, -1) == true ||
//              checkLegalInDirection(board, n, row, col, colour, -1, 1) == true ||
//              checkLegalInDirection(board, n, row, col, colour, 1, -1) == true ||
//              checkLegalInDirection(board, n, row, col, colour, 1, 1) == true) {
//         return true;
//     }
//     return false;
// }

// void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col, char colour, int deltaRow, int deltaCol) {
//     int scan_row_index = row, scan_col_index = col;
//     for (; true;) {
//         scan_row_index += deltaRow;
//         scan_col_index += deltaCol;
//         if (positionInBounds(n, scan_row_index, scan_col_index) == false) { break; }
//         if (board[scan_row_index][scan_col_index] == 'U') { break; }
//         if (board[scan_row_index][scan_col_index] == colour) { break; }
//         if (board[scan_row_index][scan_col_index] != colour) {
//             board[scan_row_index][scan_col_index] = colour;
//         }
//     }
// }


// #include <stdio.h>
// #include "lab8part2.h"
// // #include "liblab8part2.h" 

// int isValidMoveAI(const char board[][26], int n, int row, int col, char colour);
// void executeMoveAI(char board[][26], int n, int row, int col, char colour);
// void copyBoard(const char src[][26], char dest[][26], int n);
// int getWeight(int r, int c, int n);
// int evaluateBoard(char board[][26], int n, char myTurn);
// int minimax(char board[][26], int n, int depth, int alpha, int beta, char currentTurn, char myTurn);

// int isValidMoveAI(const char board[][26], int n, int row, int col, char colour) {
//     if (board[row][col] != 'U') return 0;
    
//     int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//     int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
//     char opp;
//     if (colour == 'W') {
//         opp = 'B';
//     } else {
//         opp = 'W';
//     }

//     for (int i = 0; i < 8; i++) {
//         int r = row + dr[i];
//         int c = col + dc[i];
//         int flipped = 0;
        
//         while (r >= 0 && r < n && c >= 0 && c < n && board[r][c] == opp) {
//             flipped++;
//             r += dr[i];
//             c += dc[i];
//         }
//         if (r >= 0 && r < n && c >= 0 && c < n && board[r][c] == colour && flipped > 0) {
//             return 1;
//         }
//     }
//     return 0;
// }

// void executeMoveAI(char board[][26], int n, int row, int col, char colour) {
//     int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
//     int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
//     char opp;
//     if (colour == 'W') {
//         opp = 'B';
//     } else {
//         opp = 'W';
//     }
    
//     board[row][col] = colour;

//     for (int i = 0; i < 8; i++) {
//         int r = row + dr[i];
//         int c = col + dc[i];
//         int flipped = 0;

//         while (r >= 0 && r < n && c >= 0 && c < n && board[r][c] == opp) {
//             flipped++;
//             r += dr[i];
//             c += dc[i];
//         }

//         if (r >= 0 && r < n && c >= 0 && c < n && board[r][c] == colour && flipped > 0) {
//             // Backtrack and flip the tiles
//             r -= dr[i];
//             c -= dc[i];
//             while (r != row || c != col) {
//                 board[r][c] = colour;
//                 r -= dr[i];
//                 c -= dc[i];
//             }
//         }
//     }
// }

// void copyBoard(const char src[][26], char dest[][26], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             dest[i][j] = src[i][j];
//         }
//     }
// }

// int getWeight(int r, int c, int n) {
//     int rEdge = (r == 0 || r == n - 1);
//     int cEdge = (c == 0 || c == n - 1);
//     int rAdj = (r == 1 || r == n - 2);
//     int cAdj = (c == 1 || c == n - 2);

//     // Corners are valuable
//     if (rEdge && cEdge) return 1000;
//     // C-squares are dangerous
//     if ((rEdge && cAdj) || (cEdge && rAdj)) return -100;
//     // X-squares are terrible
//     if (rAdj && cAdj) return -200;
//     // Normal edges are good
//     if (rEdge || cEdge) return 10;
//     // Center of the board
//     return 1;
// }

// int evaluateBoard(char board[][26], int n, char myTurn) {
//     char oppTurn;
//     if (myTurn == 'W') {
//         oppTurn = 'B';
//     } else {
//         oppTurn = 'W';
//     }
//     int score = 0;

//     for (int r = 0; r < n; r++) {
//         for (int c = 0; c < n; c++) {
//             if (board[r][c] == myTurn) {
//                 score += getWeight(r, c, n);
//             } else if (board[r][c] == oppTurn) {
//                 score -= getWeight(r, c, n);
//             }
//         }
//     }
//     return score;
// }

// int minimax(char board[][26], int n, int depth, int alpha, int beta, char currentTurn, char myTurn) {
//     if (depth == 0) return evaluateBoard(board, n, myTurn);

//     char oppTurn;
//     if (currentTurn == 'W') {
//         oppTurn = 'B';
//     } else {
//         oppTurn = 'W';
//     }
    
//     int maxEval = -999999;
//     int minEval = 999999;
//     int hasMove = 0;

//     char tempBoard[26][26];

//     for (int r = 0; r < n; r++) {
//         for (int c = 0; c < n; c++) {
//             if (board[r][c] == 'U' && isValidMoveAI(board, n, r, c, currentTurn)) {
//                 hasMove = 1;
                
//                 // Simulate the move
//                 for(int i=0; i<n; i++) for(int j=0; j<n; j++) tempBoard[i][j] = board[i][j];
//                 executeMoveAI(tempBoard, n, r, c, currentTurn);

//                 int eval = minimax(tempBoard, n, depth - 1, alpha, beta, oppTurn, myTurn);

//                 if (currentTurn == myTurn) {
//                     if (eval > maxEval) maxEval = eval;
//                     if (eval > alpha) alpha = eval;
//                     if (beta <= alpha) break; // Beta cut-off
//                 } else {
//                     if (eval < minEval) minEval = eval;
//                     if (eval < beta) beta = eval;
//                     if (beta <= alpha) break; // Alpha cut-off
//                 }
//             }
//         }
//     }

//     // If no moves are available, evaluate the current state
//     if (!hasMove) {
//         return evaluateBoard(board, n, myTurn);
//     }

//     if (currentTurn == myTurn) {
//         return maxEval;
//     } else {
//         return minEval;
//     }
// }

// // --- 6. Main makeMove Function ---
// int makeMove(const char board[][26], int n, char turn, int *row, int *col) {
//     int bestScore = -9999999;
//     int bestR = -1;
//     int bestC = -1;
//     char tempBoard[26][26];
    
//     char oppTurn;
//     if (turn == 'W') {
//         oppTurn = 'B';
//     } else {
//         oppTurn = 'W';
//     }

//     int depth;
//     if (n <= 8) {
//         depth = 4;
//     } else if (n <= 10) {
//         depth = 3;
//     } else {
//         depth = 2;
//     }

//     for (int r = 0; r < n; r++) {
//         for (int c = 0; c < n; c++) {
//             if (board[r][c] == 'U' && isValidMoveAI(board, n, r, c, turn)) {
//                 copyBoard(board, tempBoard, n);
//                 executeMoveAI(tempBoard, n, r, c, turn);

//                 int score = minimax(tempBoard, n, depth - 1, -999999, 999999, oppTurn, turn);
//                 if (score > bestScore || (score == bestScore && bestR == -1)) {
//                     bestScore = score;
//                     bestR = r;
//                     bestC = c;
//                 }
//             }
//         }
//     }

//     *row = bestR;
//     *col = bestC;
//     return 0; 
// }