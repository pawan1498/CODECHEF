#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    long int n, k;
    scanf("%ld", &n);
    scanf("%ld", &k);

    long int total_game = (n * (n - 1)) / 2;

    long int x = n - k; // remaining teams after k position

    long int pg = (x * (x - 1)) / 2; // total games of remaining teams after k position

    long int y = total_game - pg; // total games of first k teams

    long int z = y / k;
    printf("%ld\n", z * 2);
  }
  return 0;
}