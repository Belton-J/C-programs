//Factorial Using loop

#include<stdio.h>
int factorial(int);
int main(){
	int number,fac;
	printf("Enter a value to get the Factorial ");
	scanf("%d",&number);
	fac = factorial(number);
	printf("Factorial of %d is %d",number,fac);
	
	return 0;
}
int factorial(int a){
	int fac=1,i;
	for(i=a;i>0;i--){
		fac*=i;
	}
	return fac;
}
