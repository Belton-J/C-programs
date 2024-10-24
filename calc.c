#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int main(){
	int x,y;
	printf("Enter two numbers: \n");
	scanf("%d %d",&x,&y);
	printf("Addition of %d and %d is %d\n",x,y,add(x,y));
	printf("Subration of %d and %d is %d\n",x,y,sub(x,y));
	printf("Multiplication of %d and %d is %d\n",x,y,mul(x,y));
	printf("Division of %d and %d is %f\n",x,y,div(x,y));
	
	return 0;
}	
int add(int a,int b){
	int c;
	c=a+b;
	return c;
}

int sub(int a,int b){
	int c;
	c=a-b;
	return c;
}

int mul(int a,int b){
	int c;
	c=a*b;
	return c;
}

float div(int a,int b){
	float c;
	c=(float)a/b;
	return c;
}
