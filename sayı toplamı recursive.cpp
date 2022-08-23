#include <stdio.h>
int topla (int sayi,int t){
	if(sayi<=1000){ //sayý 1000 i geçmediyse iþlem bitmemiþtir.
	  t=t+sayi;
	  topla(sayi+1,t); //sayýyý 1 arttýrýp fonksiyona yolla.
}
    else //iþlem biter ,sonucu 'return' ile main'e yolla.
      return t;
      
	
		
	
}
 int main (){
 	int toplam=0,sonuc;
 	sonuc= topla(0,toplam);
 	printf("sonuc:%d",sonuc);
 	
 	
 	
 }
