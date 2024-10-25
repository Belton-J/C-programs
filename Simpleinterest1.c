// Find the simple interest

#include<stdio.h>
#include<stdlib.h>

float SI(float,float,float);
float* get();

int main(){
	float principal,time,rate,si;
    float* arr = get();
    principal=arr[0];
    rate=arr[1];
    time=arr[2];
	si = SI(principal,rate,time);
	printf("The Simple Interest is : %f",si);
return 0;
}



float* get(){
	float principal,time,rate;
	static float arr[3];
		do{
		printf("Enter the principal amount: ");
		scanf("%f",&principal);
		
		if(principal<=0){
			printf("Enter the valid value\n\n");
		}
		else{
		//	return principal;
		arr[0]=principal;
			break;
		}
	}while(principal<=0);
	
	do{
		printf("Enter the rate of interest: ");
	scanf("%f",&rate);
		
		if(rate<=0){
			printf("Enter the valid value\n\n");
		}
		else{
		//	return rate;
		arr[1]=rate;
			break;
		}
	}while(rate<=0);
	
	do{
		printf("Enter the time: ");
		scanf("%f",&time);
		
		if(time<=0){
			printf("Enter the valid value\n\n");
		}
		else{
		//	return time;
		arr[2]=time;
			break;
		}
	}while(time<=0);
	
	return &arr[0];
	
}


float SI(float principal,float rate,float time){
	float si=(principal*rate*time)/100;
	return si;
}
