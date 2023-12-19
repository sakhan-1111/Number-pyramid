#include<stdio.h>
#include<conio.h>

int main()
{
  int i,j,k=1;
  for(i=1;i<=4;i++)
  {
    for(j=4;j>=1;j--)
    {
      if(j>i)
      {
          printf(" ");
      }
      else
      {
          printf("%d ",k);
          k=k+1;
      }
    }
    printf("\n");
  }
  return 0;
}
