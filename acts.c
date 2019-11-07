#include<stdio.h>
#include<string.h>

int main()
{
char str[100],s[100];
int i=0,j=0,k=0;
scanf("%s", str);
for(i=0;i<strlen(str);i++)
{
  if(str[i]!="\0")
   {
      s[j]=str[i];
      k++;
    }
   else
  {
  printf("%s",str[i]);
  }

    for(j=0;j<=strlen(s);j++)
    printf("%s", s[j]);
}
}



