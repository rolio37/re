#include <stdio.h>

int main () {

double sum=15.95458977019100329811178809273454654654654654654654654654;
double input;

 fprintf (stdout, "sum = ");
 scanf ("%lf", &input);
 
	if (input == sum) {
		fprintf (stdout, "good sum !\n");
	 } else {
		fprintf (stdout, "Bad sum !\n");
 	}	
}
