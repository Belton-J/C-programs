//swap with temp var

#include<stdio.h>
void swap(int*,int*);
int main(){
	int a,b;
	printf("Enter number A: ");
	scanf("%d",&a);
	printf("Enter the number B: ");
	scanf("%d",&b);
	printf("Before swap A = %d  and B = %d\n",a,b);
	swap(&a,&b);
	printf("After swap A = %d  and B = %d\n",a,b);
return 0;
}

void swap(int* a,int* b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
	
}

