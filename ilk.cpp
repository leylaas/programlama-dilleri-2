#include <stdio.h>

int a=10;

void fonk1 (int a){
	a =40;
	printf("a= %d",a);
	
}
int main(){
	printf("a= %d",a);
	fonk1(a);
	printf("a=%d",a);
	
}

