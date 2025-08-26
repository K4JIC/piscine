#define SIZE 4

// input.c
void set_label(int label[4][4], char *str);

// evaluate_cell.c
int	is_unique_cell(int board[4][4], int col, int row, int n);

// evaluate_line.c
int	is_correct_row(int board[4][4], int label[4][4], int row);
int	is_correct_col(int board[4][4], int label[4][4], int col);

// solve.c
int	solve(int board[4][4], int label[4][4], int i);

// output.c
void	output(int board[4][4], int size);

// utils.c
void	rev4(int rev[4], int orig[4]);
