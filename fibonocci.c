#include<stdio.h>
int main(){
	int a,b,c,i;
	a=0,b=1;
	int n;
	printf("Enter a number for finocci series: ");
	scanf("%d`	11")
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	return 0;
}

