// Find the sum of array elements

#include<stdio.h>
int findsum(int [],int);
int main(){
	int arr[] = {1,2,3,4,5};
	int sum,s;
	s=sizeof(arr)/sizeof(arr[0]);
	sum=findsum(arr,s);
	printf("The sum of array is : %d",sum);
	return 0;
}
int findsum(int arr[],int s){
	int i=0;
	int sum=0;
	for(i=0;i<s;i++){
		sum=sum+arr[i];
	};
	return sum;
}
