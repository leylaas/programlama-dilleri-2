/*s�nav sonuclar�n�n analizi*/
#include <stdio.h>

int main ()
{
	/*deg�skenlere ilk degeri vermek*/
	int gecenler =0, kalanlar =0,ogrenci=1,sonuc;
	/*say�c� kontrol�yle 10 sonucun i�lenmesi*/
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
   printf("y�ksek basari\n");
   return 0;
}
