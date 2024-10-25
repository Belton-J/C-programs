
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isprime(int);
int main(){
	
	int prime[]={2,4,3,5,9,8,99,11,13,17,19,31};
	int i;
	int s=sizeof(prime)/sizeof(prime[0]);
	for(i=0;i<s;i++){
		if (isprime(prime[i])){
			printf("%d is Prime\n",prime[i]);
		}
		else{
			printf("%d is Not Prime\n",prime[i]);
		}
	}
	return 0;

}
bool isprime(int val){
	int sval=sqrt(val);
	int i;
	bool flag=true;
	for(i=2;i<=sval;i++){
		if (val%i==0){
			flag=false;
		}
	}
	return flag;
}
