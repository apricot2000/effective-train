#include <cstdio> //C++ Version
//C Version
//#include <stdio.h>
#include "train.h"
int main(){
	double x;
	double y;
	double z;
	char o;
	printf("Welcome to Effective Train.\n");
	printf("$");
	scanf("(%le %le %s)",&x,&y,&o);
	z=math(x,y,o);
	printf("%le\n",z);
	while (1){}
	return 0;
}
