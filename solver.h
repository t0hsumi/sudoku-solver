#ifndef SOLVER_H
# define SOLVER_H

# include <stdio.h>
# include <stdlib.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

void	init(char map[9][9], int *check);
void	output(char map[9][9]);
int		checker(char map[9][9], int x, int y);
int		solve(char map[9][9], int x, int y, int n);

#endif
