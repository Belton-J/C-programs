// Find the simple interest

#include<stdio.h>
#include<stdlib.h>
float SI(float,float,float);
int main(){
	float principal,time,rate,si;
	printf("Enter the principal amount: ");
	scanf("%f",&principal);
	printf("Enter the rate of interest: ");
	scanf("%f",&rate);
	printf("Enter the time: ");
	scanf("%f",&time);
	si = SI(principal,rate,time);
	printf("The Simple Interest is : %f",si);
return 0;
}
float SI(float principal,float rate,float time){
	if(time==0){
		printf("Time = 0 does'nt' '");
		exit(1);
	}
	float si=(principal*rate*time)/100;
	return si;
}
