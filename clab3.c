#include <stdio.h> 
int main() 
{ 
  int a,b,choice,res;
  printf("=====BRANCHING STATEMENTS=====\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU-----\n"); 
  printf("1.check positive,negative or zero\n"); 
  printf("2.check even or odd\n"); 
  printf("3.find the largest of two numbers\n"); 
  printf("4.checck divisible by 5\n"); 
  printf("\nenter your choice:"); 
  scanf("%d",&choice); 
  printf("\n-----result-----\n"); 
  switch(choice) 
     { 
       case1: 
         if(a>0) 
           printf("%d is positive",a); 
          else if(a<0) 
            printf("%d is negative",a); 
          else
            printf("%d is zero",a); 
          break;
        case2:
          if(a%2==0 ) 
            printf("%d is Even",a); 
           else
             printf("%d is odd",a);
            break; 
         case3: 
            if(a>b) 
            { 
             res=a;
             printf("%d is the largest number",res);
            } 
            else if(b>a) 
            { 
              res=b; 
              printf("%d is the largest number",res);
            } 
             else 
            { 
              printf("both numbers are equal");
            } 
              break;
            case4: 
              if(a%5==0) 
                 printf("%d is not divisible by 5",a); 
               break;
             default: 
                 printf("invalid choice.");
             } 
              return 0;
             }
            
