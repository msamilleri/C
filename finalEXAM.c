#include<stdio.h>
//question is : sum = (1/1!)-(2/2!)+(3/3!)....(n+n!) find the sum
int fakto(int d){
int fak=1;
int i;
for ( i = 1; i <=d; i++)
{
    fak*=i;
}
return fak;
}
int usone(int a){
    int result;
    if(a%2==0){
        result=-1;
    }else{
        result=1;
    }
    
return result;
}
void sumOfmat(int n){
   
    
	if(n<0){
        printf(" the given n number should grater than 0");
    }
    double i,islem=0.0;
        
        for ( i=1 ; i<=n; i++)
        {
        islem+=usone(i)*(i/fakto(i));                
        }
         
         printf("result is = %.2f",islem);
}

int main(){
	
	sumOfmat(5);
	


}