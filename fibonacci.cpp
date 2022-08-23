#include<stdio.h>
 long fibonacci(int x){
 	
 	if (x<0){
 		return -1;//hata verir
 		
	 
	 }
	 if(x==1||x==0){
	 	return 1;
	 	
	 }
	 return fibonacci(x-1)+fibonacci(x-2);
	 
 }
 int main (){
 	int sayi;
 	for (sayi=0;sayi<30;sayi++)
 	 printf("fib(%d)\t\t%5li\n",sayi,fibonacci(sayi));
 	
	 return 0; 
 }
