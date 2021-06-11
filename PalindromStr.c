#include <stdio.h>
#include<string.h>
int main() 
{
  int i,count=0;
  char str[10];
  int flag=0;
  gets(str);
  puts(str);
  for(i=0;str[i]!='\0';i++)
       count++;
  for(i=0;str[i]!='\0';i++)
  {
      if(str[i]!=str[count-i-1])
      {
          flag=1;
          break;
      }
      
  }
  if (flag==1)
  {
      puts(str);
      printf("is not palindrom");
      
  }
  else
   {
       puts(str);
       printf("is palindrom");
   }

    return 0;
}
