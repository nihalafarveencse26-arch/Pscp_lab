#include <stdio.h> 
int main() 
{ 
int a,b,choice,r;
printf("===== OPERATORS AND EXPRESSIONS =====\n"); 
printf("Enter the first number:"); 
scanf("%d",&a); 
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1.ADDITION\n");
printf("2.subtraction\n");
printf("3.Multiplication\n");
printf("4.division\n");
printf("5.Modulus\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
  case1:
   res=a+b;
   printf("Result = %d",res);
   break;
  case2:
   res=a-b;
   printf("Result=%d",res);
   break;
  case3:
   res=a*b;
   printf("Result=%d",res);
   break;
  case4:
   if(b!=0)
   {
    res=a/b;
    printf("Result=%d",res);
   }
   else
   { 
    printf("division by zero is not possible.");
   }
    break;
  case5:
  if(b!=0)
  {
  res=a%b;
  printf("Result=%d",res);
  }
  else
  { 
  printf("Modulus by zero is not possible.");
  } 
  break; 
 default:
   printf("Invalid choice."); 
   
   
   
   
   
   
   
   }
    return 0;
 }  
