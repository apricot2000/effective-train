double math(double x,double y,char o){
	double z;
	if (o=='+'){
		z=x+y;
	}
	else if (o=='-'){
		z=x-y;
	}
	else if (o=='*'){
		z=x*y;
	}
	else if (o=='/'){
		z=x/y;
	}
	return z;
}
