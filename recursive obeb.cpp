#include<stdio.h>

int obeb (int x,int y){
	if(x==y)
	 return x;
	if(x>y)
	 return obeb(x-y,y);
	return obeb(x,y-x);  
}
 
 int main (){
 	 int sayi1=200;
 	 int sayi2=50;
 	 int sonuc=obeb (sayi1,sayi2);
 	 printf("obeb(%d,%d)=%d\n",sayi1,sayi2,sonuc);
 	  return 0;
}  

