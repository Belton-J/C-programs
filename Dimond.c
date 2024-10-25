// Diamond 

#include<stdio.h>
void Diamond(int);
int main(){
	int row;
	printf("Enter the no of rows: ");
	scanf("%d",&row);
	Diamond(row);
	return 0;
}
void Diamond(int row){
	int i,j,k;
	int m=0;
	for(i=0;i<row;i++){
		for(k=0;k<row-i;k++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}	
	
	for(i=row-2;i>=1;i--){
		for(j=row;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=(2*i-1);k++){
			printf("*");
		}
		printf("\n");
	}
	
}
