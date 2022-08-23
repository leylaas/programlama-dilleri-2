/*sýnav sonuclarýnýn analizi*/
#include <stdio.h>

int main ()
{
	/*degýskenlere ilk degeri vermek*/
	int gecenler =0, kalanlar =0,ogrenci=1,sonuc;
	/*sayýcý kontrolüyle 10 sonucun iþlenmesi*/
	while(ogrenci<=10){
		printf ("sonucu girin(1=gecti,2=kaldi):");
		scanf("%d",&sonuc);
		
		
		
		if (sonuc==1) 
		    gecenler=gecenler+1;
		else 
		    kalanlar=kalanlar+1;
			
       ogrenci=ogrenci+1;
	   			    
	}
printf("gecenler %d/n", gecenler);
printf("kalanlar %d/n", kalanlar);


if(gecenler>8)
   printf("yüksek basari\n");
   return 0;
}
