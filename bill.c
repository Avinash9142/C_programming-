
#include<stdio.h>
int main ()
{
   int unit;
   float bill,sur ;

   printf("enter the unit");
   scanf("%d",& unit);
   if(unit<=200)
   {
    bill=50+unit*2;
    printf("Total bill = %f",bill);
   }
   else if(unit>200 && unit<=300)
   {
     bill=50+200*2+(unit-200)*4;
     printf("total bill = %f",bill);
   }
   else if(unit>300 && unit<=400)
   {
     bill=50+200*2+300*4+(unit-300)*5;
     printf("total bill = %f",bill);
   }
   else
   {
     sur=(unit*10)/100;
     bill=50+sur+200*2+300*4+400*5+(unit-400)*7;
     printf("Total bill adding surcharge of above 400 units = %f",bill);
   }
}
