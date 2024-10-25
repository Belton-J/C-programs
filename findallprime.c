
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void findallprime(int);
bool isprime(int);
int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	findallprime(num);
	
	return 0;

}
bool isprime(int val){
	bool flag=true;
	if(val<2){
		flag=false;
	}
	int sval=sqrt(val);
	int i;
	for(i=2;i<=sval;i++){
		if (val%i==0){
			flag=false;
		}
	}
	return flag;
}

void findallprime(int num){
	int i;
	for(i=0;i<=num;i++){
		if(isprime(i)){
			printf("%d \n",i);
		}
	}
}
