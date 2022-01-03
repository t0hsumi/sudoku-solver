/*
** This func process standard input and store it in the first arg.
** The second arg is flag to decide whether to solve or check input.
**
** If input is like the one below,
**
**       0 0 6 0 3 4 0 0 0
**       4 0 0 0 0 0 0 0 0
**       0 0 0 7 0 0 6 5 0
**       0 7 0 0 0 0 3 0 0
**       0 0 0 5 0 0 0 0 0
**       0 8 0 0 1 0 0 0 5
**       6 1 0 0 5 0 0 0 0
**       9 0 0 0 6 8 0 4 0
**       0 0 2 0 0 3 8 7 0
** 
**  the first arg is like this.
**
**    map[i][j] =  \ i|
**                  \ |0 1 2 3 4 5 6 7 8
**                 j_\|_________________
**                  0 |0 0 6 0 3 4 0 0 0
**                  1 |4 0 0 0 0 0 0 0 0
**                  2 |0 0 0 7 0 0 6 5 0
**                  3 |0 7 0 0 0 0 3 0 0
**                  4 |0 0 0 5 0 0 0 0 0
**                  5 |0 8 0 0 1 0 0 0 5
**                  6 |6 1 0 0 5 0 0 0 0
**                  7 |9 0 0 0 6 8 0 4 0
**                  8 |0 0 2 0 0 3 8 7 0
**
*/

#include "solver.h"

void init(char map[9][9], int *check){
	rep(i, 9) rep(j, 9){
		char input;
		do{
			scanf("%c", &input);
		} while (input < '0' || input > '9');
		if (input == '0') *check = 0;
		map[i][j] = input;
	}
}
