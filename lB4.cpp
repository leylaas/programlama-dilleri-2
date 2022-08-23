#include <stdio.h>
int main(){
	
	int a,b, k ;
	printf("a sayisini giriniz:"),
	scanf ("%d,&a");
	printf ("b sayisini giriniz:");
	scanf("%d",&b);
	
	
	
	k=a%b;
	while (k=!0){
		a=b;
		b=k;
		k=a%b;
	}
	
	
	printf("sayilarinizin ebobu=%d",b);
	return 0,
	}



