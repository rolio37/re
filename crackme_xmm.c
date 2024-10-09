#include <stdio.h>

int main () {

float somme=1.2;
float essai;

 fprintf (stdout, "sum = ");
 scanf ("%f", &essai);
 
	if (essai == somme) {
		fprintf (stdout, "good sum !\n");
	 } else {
		fprintf (stdout, "Bad sum !\n");
 	}	
}
