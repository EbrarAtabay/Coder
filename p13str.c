#include<stdio.h>



struct kayit
	   {
 		  char ad[12];
 		  char soy[12];
 		  int no;
	  };


struct kayit ogr[5];
int x,y;



main()
{
 	  
		   for(x=0;x<5;x++)
                    { 	
					 printf("\nOgrencinin adini giriniz.");
					 for(y=0;y<12;y++)
     
     				     { 
						 ogr[x].ad[y]=getche();
     				       if(ogr[x].ad[y]==13)
     				          {ogr[x].ad[y]=0;
							    break;
							  }
					      }
					 printf("\nOgrencinin soyadýný giriniz.");
					 for(y=0;y<12;y++)
     
     				    { ogr[x].soy[y]=getche();
     				       if(ogr[x].soy[y]==13)
     				          {ogr[x].soy[y]=0;
							    break;
							  }
					     }
					 
					 printf("\nOgrencinin numarasýný giriniz.");
     
     				     scanf("%i",&ogr[x].no);
					 }     
 
					
					 
		 for(x=0;x<5;x++)
	          printf("\n%s %s %i ",ogr[x].ad,ogr[x].soy,ogr[x].no);	
		      getch();
		   
					 
}
