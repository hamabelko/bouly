// Ly Boureima
#include <stdio.h>
#include <cs50.h>
#include <string.h>

 int main (void)
 {
     long long number;
     int a=0;
     do
     int c=0;
     {
         number = get_long_long("card number");
     }
     while (number<0);
     long long b= number;
     while (b>0)
     {
         b=b/10; a++;
     }
     if (a!=13 && a!=15 && a!=16)
     {
         printf ("number of card not valid");
     }
     b=number;
     int c=0;
     int f=0;
     for (int i=1; i<a; i++)
     {
         int d= b%10;
         if (i%2==0)
         {
             d=d*2;
         }
         if (i%2!=0)
         {
             d=d*1;
         }
         if (d>9)
         {
             d=d-9;
         }
         f=f+d;
         b=b/10;
         if (f%10!=0)
         {
             printf ("no valid card");
         }
         else
         {
             printf("valid card");
         }
         b=number;
         while (b>100)
         {
           b=b/10;
         }
         int g= b;
         if ((g==34 || g==37) && (b==15))
         {
             printf ("Amex");
         }
         else if ((g>50 && g<56 && b==16))
         {
             printf("mastercard");
         }
         else if ((g/10==4) && (b==13 || b==16))
         {
             printf ("visa");
         }
         else
         {
             printf ("another bank");
         }
     }

 }