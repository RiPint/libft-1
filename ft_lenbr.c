int	ft_lenbr(int n)
{
  int i;

  i = 0;
  if (n == 0)
    return (1);
  if (n < 0)
    i++;
  while (n != 0)
    {
      i++;
      n /= 10;
    }
  return (i);
}
