#define main course_main
#include "../labs/lab06/part2.c"
#undef main
#include <assert.h>
int main(void) {
    char board[HEIGHT][WIDTH];
    const int dr[]={0,1,1,-1}, dc[]={1,0,1,1};
    for(int d=0;d<4;d++) {
        clearBoard(board);
        int row=d==3?3:0;
        for(int k=0;k<4;k++) board[row+k*dr[d]][k*dc[d]]='X';
        assert(checkConnection(board));
    }
    clearBoard(board);
    board[5][0]='X'; board[5][1]='O'; board[5][2]='X'; board[5][3]='O';
    assert(!checkConnection(board));
    clearBoard(board); makeMove(board,'X',2); makeMove(board,'O',2);
    assert(board[5][2]=='X' && board[4][2]=='O');
    return 0;
}
