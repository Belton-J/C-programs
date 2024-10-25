// RightTriangle 

#include<stdio.h>
void Righttriangle(int);
int main(){
	int row;
	printf("Enter the no of rows: ");
	scanf("%d",&row);
	Righttriangle(row);
	return 0;
}
void Righttriangle(int row){
	int i,j;
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}	
}
