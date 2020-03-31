#include<stdio.h>
  void  converttobit(int a){
	int b,c,d,e;
	int bos,bos2;
	e=a%2;
	bos=a/2;
	d=bos%2;
	bos2=bos/2;
	c=bos2%2;
	
	b=bos2/2;
	
	
	printf("%d %d %d %d", b ,c, d, e);
	
}

int main(){
printf("please give a number");
int m;

scanf("%d",&m);
converttobit(m);

	

}
