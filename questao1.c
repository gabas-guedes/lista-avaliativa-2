#include <stdio.h>

int main()
{
  int vetor[10];
  int i, j;

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &vetor[i]);

    if (i < 9)
    {
      printf("%d ", vetor[i]);
    }
    else
    {
      printf("%d", vetor[i]);
    }
  }
  printf("\n");
  for (i = 9; i > 0; i--)
  {

    for (j = 0; j < 10; j++)
    {

      if (j < i)
      {
        vetor[j] = vetor[j] + vetor[j + 1];

        if (j < i - 1)
        {
          printf("%d ", vetor[j]);
        }
        else
        {
          printf("%d", vetor[j]);
        }
      }
    }
    printf("\n");
  }

  return 0;
}
