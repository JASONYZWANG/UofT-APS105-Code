#include <stdio.h>
#include "reversi.h"
void InitializeBoard(char(*board)[26],int n);
void Initialize_Board_Configuration(char(*board)[26],int n);
bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col);
void Make_One_Move(char(*board)[26],int n);
void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol);

int main(void){
    char Board[26][26];
    printf("Enter the board dimension: ");
    int real_size; scanf("%d",&real_size);
    
    //Initialization section
    InitializeBoard(Board,real_size);
    printBoard(Board,real_size);
    Initialize_Board_Configuration(Board,real_size);
    printBoard(Board,real_size);

    //Find the available moves for W
    printf("Available moves for W:\n");
    for(int i=0; i<real_size; i++){
        for(int j=0; j<real_size; j++){
            if(Judge_Available_Move(Board,real_size,'W',i,j)==true){printf("%c%c\n",'a'+i,'a'+j);}
        }
    }

    //Find the abailable moves for B
    printf("Available moves for B:\n");
    for(int i=0; i<real_size; i++){
        for(int j=0; j<real_size; j++){
            if(Judge_Available_Move(Board,real_size,'B',i,j)==true){printf("%c%c\n",'a'+i,'a'+j);}
        }
    }

    //Make a move, judge validation, flip tiles
    Make_One_Move(Board,real_size);
    
    return 0;
}
void InitializeBoard(char(*board)[26],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i][j]='U';
        }
    }
    board[n/2-1][n/2-1]='W';
    board[n/2-1][n/2]='B';
    board[n/2][n/2-1]='B';
    board[n/2][n/2]='W';
}
void Initialize_Board_Configuration(char(*board)[26],int n){
    printf("Enter board configuration:\n");
    for(;true;){
        char color, row_index, col_index;
        scanf(" %c %c %c",&color, &row_index, &col_index);
        if(color=='!' && row_index=='!' && col_index=='!') {
            return;
        }
        else if(positionInBounds(n,(int)row_index-97,(int)col_index-97)==true){
            board[(int)row_index-97][(int)col_index-97]=color;
        }
    }
}
void printBoard(char(*board)[26],int n){
    printf("  ");
    for(char index='a'; index<'a'+n; index++) {printf("%c",index);};
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%c ",(char)(i+(int)'a'));
        for(int j=0; j<n; j++){
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
}
bool positionInBounds(int n, int row, int col){
    if(row>=0 && row<n && col>=0 && col<n) {return true;}
    else {return false;};
}

bool checkLegalInDirection(char(*board)[26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol){
    //(row,col) is start scan position, delta(Row,Col) indicats direction, Colour is goal color for this position

    int scan_row_index=row;
    int scan_col_index=col;//the scanning index 
    int num_opstColour=0; //count the number of opposite colour in the middle 
    bool meet_sameColour=false; //whether scanning index meet the same colour
    for(int i=1; true; i++){
            scan_row_index+=deltaRow;
            scan_col_index+=deltaCol; //move the scanning index
            if(positionInBounds(n,scan_row_index,scan_col_index)==false){
                break;
            }
            if(board[scan_row_index][scan_col_index]=='U'){
                break;
            }
            if(board[scan_row_index][scan_col_index]==colour){
                meet_sameColour=true;
                break;
            }
            if(board[scan_row_index][scan_col_index]!=colour){
                num_opstColour++;
            }
    }
    if(meet_sameColour==true && num_opstColour>0) return true; //means this direction is good
    return false;
}
//checkLegalInDirection: Judge one direction
bool Judge_Available_Move(char(*board)[26], int n, char colour, int row, int col){
    if(board[row][col]!='U') return false; //if empty
    else if(checkLegalInDirection(board,n,row,col,colour,-1,0)==true ||
            checkLegalInDirection(board,n,row,col,colour,1,0)==true ||
            checkLegalInDirection(board,n,row,col,colour,0,-1)==true ||
            checkLegalInDirection(board,n,row,col,colour,0,1)==true ||
            checkLegalInDirection(board,n,row,col,colour,-1,-1)==true ||
            checkLegalInDirection(board,n,row,col,colour,-1,1)==true ||
            checkLegalInDirection(board,n,row,col,colour,1,-1)==true ||
            checkLegalInDirection(board,n,row,col,colour,1,1)==true){
                //judge availability in 8 direction
        return true;
    }
    return false;
}
//Judge_Available_Move: Judge whether one position is legal

void Make_One_Move(char(*board)[26],int n){
    char Colour, Arow, Acol;
    printf("Enter a move:\n");
    scanf(" %c %c %c",&Colour,&Arow,&Acol);
    int row=(int)(Arow-'a'),col=(int)(Acol-'a');
    if(positionInBounds(n, row, col)==false){//Out of boundary
        printf("Invalid move.\n");
        printBoard(board,n);
        return;
    }
    else if(Judge_Available_Move(board,n,Colour,row,col)==false){//Not a legal position
        printf("Invalid move.\n");
        printBoard(board,n);
        return;
    }
    else if(Judge_Available_Move(board,n,Colour,row,col)==true){
        //If input position is valid
        printf("Valid move.\n");
        board[row][col]=Colour;
        //Make flipping for corresponding true direction
        if(checkLegalInDirection(board,n,row,col,Colour,1,0)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,1,0);
        if(checkLegalInDirection(board,n,row,col,Colour,-1,0)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,-1,0);
        if(checkLegalInDirection(board,n,row,col,Colour,0,1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,0,1);
        if(checkLegalInDirection(board,n,row,col,Colour,0,-1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,0,-1);
        if(checkLegalInDirection(board,n,row,col,Colour,1,1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,1,1);
        if(checkLegalInDirection(board,n,row,col,Colour,-1,1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,-1,1);
        if(checkLegalInDirection(board,n,row,col,Colour,-1,-1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,-1,-1);
        if(checkLegalInDirection(board,n,row,col,Colour,1,-1)==true) Flip_Tiles_InDirection(board,n,row,col,Colour,1,-1);
        printBoard(board,n);
        return;
    }
}
//Input colour, index. Judge-->Make move
void Flip_Tiles_InDirection(char(*board)[26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol){
    //(row,col) is scan start index, colour is goal changing color, delta(Row,Col) indicates direction
    int scan_row_index=row, scan_col_index=col;
    for(;true;){
        scan_row_index+=deltaRow;
        scan_col_index+=deltaCol;
        if(positionInBounds(n, scan_row_index, scan_col_index)==false){
            break;
        }
        if(board[scan_row_index][scan_col_index]=='U'){
            break;
        }
        if(board[scan_row_index][scan_col_index]==colour){
            break;
        }
        if(board[scan_row_index][scan_col_index]!=colour){
            board[scan_row_index][scan_col_index]=colour;
        }
    }
}
//Flip the correct direction