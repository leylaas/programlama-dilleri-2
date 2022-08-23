/*referansa göre çaðýrma kullanarak bir deðerin küpünü almak*/
#include <stdio.h>
 
 void referansaGoreKup (int *);
 
 int main()
 {
 	int sayi=5;
 	 
 	printf("sayinin esas degeri %d",sayi);
 	referansaGoreKup(&sayi);
 	printf("\nsayinin yeni degeri %d\n",sayi);
 	return 0;
 }
   void referansaGoreKup(int*nPtr)
   { 
      *nPtr=*nPtr* *nPtr* *nPtr;/* mainde deki sayinin küpü alýndý*/
		  } 	  
 	  
 
 
