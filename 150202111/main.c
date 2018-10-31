#include <stdio.h>

int main()
{
  int array[100], n, c, d, position, swap;
  int swapCount = 0;
  printf("Kac eleman giriceksiniz?\n");
  scanf("%d", &n);

  printf("%d tam sayi giriniz\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0; c < (n - 1); c++)
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swapCount++;
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
    }
  }

  printf("Siralanmis hali:\n");

  for (c = 0; c < n; c++)
    printf("%d\n", array[c]);

  printf("swap sayisi: %d\n", swapCount);
  return 0;
}
