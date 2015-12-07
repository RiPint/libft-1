
int ft_strequ(char const *s1, char const *s2)
{
  int i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    {
      if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
	return (1);
      i++;
    }
  return (0);
}
