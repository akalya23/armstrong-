#include<stdio.h>
#include<math.h>
 int main()
 {
 int originalnum,num,last digit,digit,sum;
 printf("enter any number to check whether armstrong number ar not");
 scanf("%d",&num);
 sum=0;
 originalnum=num;
 digit=int log10(num)+1;
 while num>0
 lastdigit=num%10;
 sum=sumround(pow(lastdigits,digit));
 num=num/10;
 if(originalnum==sum)\
 {
 print("%d is a armstrong number",originalnum);
 }
 else
 {
 
print("%d is not a armstrongnumber",originalnum);
}
retuen 0;
}
