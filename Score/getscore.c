#include "score.h"
#include <stdlib.h>

//define the function input_score()

void input_scores(int *s) {
	//get user's input using a sentinel-controlled loop
	int i = 0;
	int input = 0;
	system("clear");
	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++)
	{
		int check = 1;
		while(check){
			printf("score[%d]:",i+1);

			scanf("%d",&input);
			if(input >100 || input < -1){
			printf("invalid input!\n");
			} else{
				s[i] = input;
				check = 0;
			}
		}
	}
	printf("%d scores are given\n", i - 1);


}
