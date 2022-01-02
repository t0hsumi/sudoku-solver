#include "solver.h"

int main(){
	char map[9][9];
	int check = 1;

	init(map, &check);

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

	for (int i = 1; i < 10; i++){
		solve(map, 0, 0, i);
	}
	printf("No answer.\n");
}

