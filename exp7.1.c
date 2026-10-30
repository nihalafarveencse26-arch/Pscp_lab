#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50],str[50],str3[100];
  int res;
  printf("Enter the first string:");
  scanf("%s",str1);
  printf("enter the second string:");
  scanf("%s",str3);
  res=strlen(str1);
  printf("\n length of first string =%d",res);
  strcpy(str3,str1);
  printf("\ncopied string =%s",str3);
  res=strcmp(str3,str3);
  if(res==0)
     printf("\nboth strings are equal");
   else
      printf("\n both strings are not equal");
   strcat(str1,str3);
   printf("\nconcatenated string=%s",str1);
   return 0;
 }
