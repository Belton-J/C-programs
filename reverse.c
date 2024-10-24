#include<stdio.h>
int main(){
	int rev = 0;
	int num=879;
	while(num!=0){
		rev = rev*10+num%10;
		num=num/10;
		printf("%d\n",rev);
		printf("%d\n",num);
	}
	printf("\n\n%d",rev);
	
	
	return 0;
}
