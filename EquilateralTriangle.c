// triangle 

#include<stdio.h>
void triangle(int);
int main(){
	int row;
	printf("Enter the no of rows: ");
	scanf("%d",&row);
	triangle(row);
	return 0;
}
void triangle(int row){
	int i,j,k;
	for(i=0;i<row;i++){
		for(k=0;k<row-i;k++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		
	}	
}
