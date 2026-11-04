#include <stdio.h>
#include "board.h"

void init_board(char *board) {
    for (int i = 0; i < 9; i++) {
        board[i] = '1' + i;
    }
}

void print_board(char *board) {
    printf("\n");
    for (int row = 0; row < 3; row++) {
        printf(" %c | %c | %c \n", *(board + row*3), *(board + row*3 + 1), *(board + row*3 + 2));
        if (row < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int check_winner(char *board) {
    int lines[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };
    for (int i = 0; i < 8; i++) {
        int a = lines[i][0], b = lines[i][1], c = lines[i][2];
        if (board[a] == board[b] && board[b] == board[c]) {
            return 1;
        }
    }
    return 0;
}

int is_full(char *board) {
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') return 0;
    }
    return 1;
}