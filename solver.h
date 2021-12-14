#ifndef SOLVER_H
# define SOLVER_H

# include <stdio.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

void	init(char map[9][9]);
void	output(char map[9][9]);
int		checker(char map[9][9], int x, int y);
int		solve(char map[9][9], int x, int y);

#endif
