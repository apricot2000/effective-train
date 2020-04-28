#include <stdio.h>
#include "train-math.h"
int main(){
	double x;
	double y;
	double z;
	char o;
	printf("Welcome to Calcinator.\n");
	printf("Enter a LISP equation:\n");
	scanf("(%lf %lf %c)",&x,&y,&o);
	z=math(x,y,o);
	printf("%lf",z);
	return 0;
}
