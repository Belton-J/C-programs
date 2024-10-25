// factorial using recurision

#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("The factorial of %d is %d",num,recfactorial(num));
	return 0;
}
int recfactorial(int val){
	int ans=1;
	if(val==1){
		return 1;
	}
	else{
		val=val*recfactorial(val-1);
		return val;
	}	 
	
}

