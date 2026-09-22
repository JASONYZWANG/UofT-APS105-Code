#define main course_main
#include "../labs/lab08/reversi_heuristic.c"
#undef main
#include <assert.h>
int main(void) {
    char board[26][26];
    InitializeBoard(board,8);
    int legal=0;
    for(int r=0;r<8;r++) for(int c=0;c<8;c++) legal+=Judge_Available_Move(board,8,'B',r,c);
    assert(legal==4);
    assert(!positionInBounds(8,-1,0) && !positionInBounds(8,8,0));
    const int dr[]={-1,-1,-1,0,0,1,1,1}, dc[]={-1,0,1,-1,1,-1,0,1};
    for(int d=0;d<8;d++) {
        for(int r=0;r<8;r++) for(int c=0;c<8;c++) board[r][c]='U';
        board[3+dr[d]][3+dc[d]]='W';
        board[3+2*dr[d]][3+2*dc[d]]='B';
        assert(checkLegalInDirection(board,8,3,3,'B',dr[d],dc[d]));
        assert(Count_Flips_InDirection(board,8,3,3,'B',dr[d],dc[d])==1);
        board[3][3]='B'; Execute_Flips(board,8,3,3,'B');
        assert(board[3+dr[d]][3+dc[d]]=='B');
    }
    int r=-1,c=-1;
    assert(makeMove((const char (*)[26])board,10,'B',&r,&c)==-1);
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) board[i][j]='B';
    assert(!Has_Valid_Moves(board,8,'W'));
    makeMove((const char (*)[26])board,8,'W',&r,&c);
    assert(r==-1 && c==-1);
    return 0;
}
