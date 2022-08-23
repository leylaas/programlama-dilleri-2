/*dizi elemanlarý toplamýný hesapplamak*/
#include <stdio.h>
#define BOYUT 12

int main ()
{ 
    int a[BOYUT]={1,3,5,4,7,2,99,
	               16,45,67,89,45};
    int i, toplam=0;
     for (i=0; i<= BOYUT-1;i++)
     toplam +=a[i];
     
     
     
     printf("dizideki elemanlarýn toplamý %d dir.\n",toplam);
     return 0;
     
    
    
}
