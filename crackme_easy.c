#include <stdio.h>
#include <string.h>

int main (int argc, char ** argv) {
	if (argc == 2) {
	 	if (strcmp (argv[1], "2025") == 0) {
			fprintf (stdout, "The password is correct !\n");
		}  else  {
			fprintf (stdout, "The password is incorrect !\n");
		}
	 } else {
		fprintf (stdout, "%s password\n", argv[0]); 
		return 1;
	}
}


