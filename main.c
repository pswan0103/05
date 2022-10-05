#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int trials=0;
	int answer=71;
	
	do
	{
		printf("Guess a number: ");
		scanf("%d", &x);
		
		if (x<answer)
		{
			printf("low!\n");
			trials++;
		}
		else if (x>answer)
		{
			printf("high!\n");
			trials++;
		}
		else
		{
			trials++;
			printf("Congratulation! trials: %d", trials);
		}
	}
	while (x!=answer);
	
	return 0;
}
