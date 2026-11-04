#ifndef BOARD_H
#define BOARD_H

void init_board(char *board);
void print_board(char *board);
int check_winner(char *board);
int is_full(char *board);

#endif