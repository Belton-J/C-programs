#include<stdio.h>
int main(){
	signed int x =4294967295;
	float y = 0.1/30;
	double z ;
	z=x*y;
	printf("Total amount %s\n",x);
	printf("Interest per day: %f\n",y);
	printf("Interest for given amount %f\n",z);
	printf("Total after interest: %f\n",x+z);
	
	
	return 0;
}
