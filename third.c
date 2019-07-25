#include<stdio.h>
int main()
{
  int n,c=0;
  printf("\n Enter a number ");
  scanf("%d",&n);

    for(  int i=1;i<n;i++)
    {
      int sum=0;
      for(int j=i;j<n;j++)
      {
        sum=sum+j;
        if(sum==n)
        {
          c++;
        break;
      }

      }
    }
    printf("\n Value is %d ",c);
  }
