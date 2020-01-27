#include <stdio.h>

int main()
{
  int i, Number, count,num;

 printf(" Prime Number from 1 to 100 are: \n");
  scanf("%d",&num);

  for(Number = 1; Number <= num; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && Number != 1 )
    {
	printf(" %d ", Number);
    }
  }
  return 0;
}
