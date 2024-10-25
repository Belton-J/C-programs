// sum of digit using loop

#include<stdio.h>
int sumofdigit(int);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("The sum of the digit %d is %d",num,sumofdigit(num));
	return 0;
}
int sumofdigit(int val){
	int ans=0;
	int last;
	while(val>0){
		last=val%10;
	    val=val/10;
	    ans=ans+last;
	}
	return ans;
}
