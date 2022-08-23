#include <stdio.h>
 
 
 int carpmaislemi(int x,int y);
 
 int main(){
 	
    int sayi1=25;
    int sayi2=45;
    int sonuc=carpmaislemi (sayi1,sayi2);
    printf("%d* %d=%d\n",sayi1,sayi2,sonuc);
    return 0;
    
 }
 int carpmaislemi(int x,int y){
 	if(y==0)
 	 return 0;
 	return x+ carpmaislemi(x,y-1);
	  
 }
