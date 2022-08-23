/*kart dagıtma programı*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void kar(int[][13]);
void dagit(const int [][13],const char *[],const char *[]);


int main()
{
	  const char *takim[4]=
	        {"Kupa","Karo","Sinek","Maça"};
	  const char *taraf[13]=
	         { "As","iki","üç","dört","beş","altı","yedi","sekiz","dokuz","on","vale","kız","papaz"};
	         
		int deste[4][13]={0};
		 
		srand (time(0));
		
		kar(deste);
		dagit(deste,taraf,takim);
		
		
		return 0;
		
			
}

 void kar(int wDeste[][13])
 {   
     int satir,sutun,kart;
       
       
       for (kart=1;kart<=52;kart++){
       	do{
       		
       		satir=rand()%4;
       		sutun=rand()%13;
       		
		   }while(wDeste[satir][sutun]!=0);
		   
		   
		   wDeste[satir][sutun]=kart;
		   
		   
	   }
 }
  
  
  void dagit(const int wDeste[][13],const char *wTaraf[],const char *wTakim[])    
  {
  	
  	
  	int kart ,satir,sutun;
  	 
  	 
  	 for(kart=1;kart<=52;kart++);
	   
	   for(satir=0;satir<=3;satir++);
	   
	    for(sutun=0;sutun<=12;sutun++);
	     
	     
	     
	     if(wDeste[satir][sutun]==kart)
	        printf("%5s of %-8s%c", wTakim[satir],wTaraf[sutun],kart%2==0?'\n':'\t');
	        
	   
	   
	   
	   
	   
	   
	   
	   		  }        
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
