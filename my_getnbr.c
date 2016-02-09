/*
** my_getnbr.c for my_getnbr.c in 
** 
** Made by Thomas Girolet
** Login   <girole_t@epitech.net>
** 
** Started on  Tue Feb  2 11:19:55 2016 Thomas Girolet
** Last update Tue Feb  2 11:19:57 2016 Thomas Girolet
*/

int		negatif(char *str)
{
  int		a;
  int		neg;

  a = 0;
  neg = 0;
  while (str[a])
    {
      if (str[a] == '-')
	neg++;
      a++;
    }
  if ((neg % 2) != 0)
    return (-1);
  else
    return (1);
}

int		my_getnbr(char *str)
{
  int		a;
  int		b;
  int		c;

  a = 0;
  b = 0;
  if (b >= 2147483647)
    return (0);
  c = negatif(str);
  while (str[a] == '+')
    a++;
  while (str[a] == '-')
    a++;
  while (str[a] != 0 && str[a] >= '0' && str[a] <= '9')
    {
      b = b * 10 + (str[a] - '0');
      a++;
    }
  b = b * c;
  return (b);
}
