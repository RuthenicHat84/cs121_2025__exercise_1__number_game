#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char username[20];
	printf("What is Your First Name?");
	scanf("%s", username);
	printf("Hello %s! \n");
	//end get name
	srand(time(NULL));
	//get
	for (int i = 0; i<=10, i++){
		int myNumber = (rand() % 100) + 1;
		printf("%d \n", myNumber);
	}

	return 0;
}
 //end main
