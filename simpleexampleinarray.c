#include<stdio.h>
int sumInArray(int a[]){
	int sum=0;
	int i;
	for(i=0;i<10;i++){
	sum+=a[i];
	}
	return sum;
}
int findMax(int a[]){
int max=a[0]; 	int i;
for(i=0;i<10;i++){
	if(a[i]>max){
		max=a[i];
	
	}
	}
	return max;
	
}
int findMin(int a[]){
int min=a[0];int i;	
for(i=0;i<10;i++){
	if(a[i]<min){
		min=a[i];
		
	}
	}
	return min;
	
}
int averageOfArray(int a[]){
int i;int average=0;
 int d=sumInArray(a);
	average=d/10;
	return average;
	
}
int main(){

int i;
	int numbers[10];
	for(i=0;i<10;i++){
	printf("give a number");
	scanf("%d",&numbers[i]);//give numbers to array 
	}
for(i=0;i<10;i++){
	printf("numbers[%d]=%d\n",i,numbers[i]);
	
	}
	
	printf("max value is = %d \n",findMax(numbers));
	printf("min value is = %d\n",findMin(numbers));
	printf("sum in array is and locatin = %d  \n",sumInArray(numbers));
	printf("average of array is = %d\n",averageOfArray(numbers));



	}
	
