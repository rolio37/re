#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int password;
	int input;
	
	srand(time(NULL));
	password = rand();	

	while (1) {
		fprintf(stdout, "Password : ");
		scanf("%d", &input);
	
		if (input == password) {
			fprintf(stdout, "The password is correct !\n");
			break;
		} else {
			fprintf(stdout, "The password is incorrect !\n");
		}
	}
}
