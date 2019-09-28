#include<stdio.h>

char say[30];

int i;


int main (void)
{
  	
  printf(" ? \n");
  
  scanf("%s",say);
  
  
  if (  say[0]=='s' || say[0]=='S' &&  say[1]=='e' || say[1]=='E' &&   say[2]=='l' || say[2]=='L' &&  say[3]=='a'|| say[3]=='A' && say[4]=='m' || say[4]=='M')
   
  	printf(" \n  sana da selam :) ");

  else
    printf ("Ne dedigini henuz anlamiyorum.");


  
  
  
}
