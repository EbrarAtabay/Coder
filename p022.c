#include<stdio.h>
 char sec=0, sec2;
 float v;
 int t,x;
 
 main()
 {  printf("Program� ka� kere �al��t�rmak istersiniz?:");
    scanf("%i",&sec2); 
    do
        {
      
       printf("\nAraban�z ile ka� km gittiniz?");
       scanf("%i",&x);
       printf("\n Yolculu�unuz ka� saat s�rd�?");
       scanf("%i",&t);
       v=(float)x/t;
       printf("\n\n H�z�n�z %.2f km/saattir.�yi yolculuklar dileriz.",v);
      //printf("\n\n Devam etmek i�in e tu�una bas�n�z.");
      //sec=getch(); 
       sec=sec+1;
       }
    while(sec!=sec2);
}
