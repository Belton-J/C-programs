#include<stdio.h>
int main(){
	int years[] = {200,300,400,500};
	char letters[] = {'a','b','c'};
	int i=0;
	while(i<2){
		printf("The address of %d is %d\n",years[i],&years[i]);
		i++;
	}
	for(i=0;i<2;i++){
	printf("The address of %c is %d\n",letters[i],&letters[i]);
	};

	return 0;
}
