#include <stdio.h>

int main() {

	int password;

	fprintf(stdout, "Password : ");
	scanf("%d", &password);
	
	if (password == 5698713) {
		fprintf(stdout, "The password is correct\n");
	} else {
		fprintf(stdout, "The password is incorrect\n");
	}
}
