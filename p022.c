#include<stdio.h>
 char sec=0, sec2;
 float v;
 int t,x;
 
 main()
 {  printf("Programý kaç kere çalýþtýrmak istersiniz?:");
    scanf("%i",&sec2); 
    do
        {
      
       printf("\nArabanýz ile kaç km gittiniz?");
       scanf("%i",&x);
       printf("\n Yolculuðunuz kaç saat sürdü?");
       scanf("%i",&t);
       v=(float)x/t;
       printf("\n\n Hýzýnýz %.2f km/saattir.Ýyi yolculuklar dileriz.",v);
      //printf("\n\n Devam etmek için e tuþuna basýnýz.");
      //sec=getch(); 
       sec=sec+1;
       }
    while(sec!=sec2);
}
