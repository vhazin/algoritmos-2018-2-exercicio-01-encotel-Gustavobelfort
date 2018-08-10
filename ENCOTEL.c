#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char input[31];
	int compare[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8 ,8 ,8, 9, 9, 9, 9};
	
	/* Loop that reads from the stdin */
	while(scanf("%s", input)!=EOF){
		
		/* Here  i check if the input is an alpha, \
			and if so i get the equivalent value in the comparison ('compare') array.\
			I make this check for each letter in the provided input */
			
		for(int i=0;i<strlen(input);i++){
			if(input[i]>=65 && input[i]<=90)printf("%c", compare[input[i]-65] + 48);
			else printf("%c", input[i]);
		}
		
		printf("\n");
	}

	return 0;
}
