#include<stdio.h>
int usalma(int,int);

int main(){
	int taban=3;
	int us=4;
	int sonuc;
	 
	 
	 sonuc=usalma(taban,us);
	 printf("(%d)^%d=%\n",taban,us,sonuc);
	 return 0;
	 
}
int usalma(int taban,int us){
	if(us==0)
	  return 1;
	  
	return taban*usalma(taban,us-1);
	
	
}
