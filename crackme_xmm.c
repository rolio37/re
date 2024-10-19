#include <stdio.h>

int main () {

double password=15.95458977019100329811178809273454654654654654654654654654;
double input;

 fprintf (stdout, "password : ");
 scanf ("%lf", &input);
 
	if (input == password) {
		fprintf (stdout, "Good password !\n");
	 } else {
		fprintf (stdout, "Bad password !\n");
 	}	
}
