#include "solver.h"

int main(){
	char map[9][9]; // used as sudoku map
	int check = 1; // flag to decide whether to solve or solve

	/* initialize map */
	init(map, &check);

	/* If there is no '0' in map,
		check whether the input is possible answer or not. */
	if (check == 1){
		rep(i, 9) rep(j, 9){
			if (!checker(map, i, j)){
				printf("Check failed.\n");
				exit(0);
			}
		}
		printf("OK.\n");
		exit(0);
	}

	/* If there is '0',
		try to solve sudoku. */
	for (int i = 1; i < 10; i++){
		solve(map, 0, 0, i);
	}
	/* If it's impossible to solve sudoku,
		output "No answer." */
	printf("No answer.\n");
}
