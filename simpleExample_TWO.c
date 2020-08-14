#include<stdio.h>
int howMuchBasamak(int n){
	int count=0;
	while(n!=0){
		n/=10;
		++count;
		
	}
	return count;
	
}
int findEBOB(int e,int s){
int result=1;
int bigger_number;
if(e<s){
	bigger_number=s;
}else{
	bigger_number=e;
}
int f;
	for(f=2;f<=bigger_number;f++){
		if(e%f==0 && s%f==0 ){
			result*=f;
		}	
		
		
	}
return result;
}
int main(){
int result_one=findEBOB(15,10);
int result_two=howMuchBasamak(78965553);
printf("%d\n",result_one);
printf("%d",result_two);
}
