#include<stdio.h>
int fact(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;	
}
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("The factorial is: %d",fact(num));
	return 0;
}