#include <stdio.h>
#include "board.h"

int main(void) {
    char board[9];
    init_board(board);
    char current = 'X';
    int choice;

    while (1) {
        print_board(board);
        printf("Player %c, pick a square (1-9): ", current);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9 || (board[choice-1] == 'X' || board[choice-1] == 'O')) {
            printf("Invalid move, try again.\n");
            continue;
        }

        board[choice-1] = current;

        if (check_winner(board)) {
            print_board(board);
            printf("Player %c wins!\n", current);
            break;
        }
        if (is_full(board)) {
            print_board(board);
            printf("It's a draw!\n");
            break;
        }

        current = (current == 'X') ? 'O' : 'X';
    }

    return 0;
}