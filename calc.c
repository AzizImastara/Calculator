#include <stdio.h>

int main()
{
  int X, Y, hasil;
  char opt;

  printf("Masukan angka pertama : ");
  scanf("%i", &X);

  printf("Masukan angka kedua : ");
  scanf("%i", &Y);

  printf("Pilih operator matematika : (+, -, *, /) \n");
  scanf(" %c", &opt);

  if (opt == '+')
  {
    hasil = X + Y;
    printf("Penjumlahan dari : %i + % i = %i", X, Y, hasil);
  }
  else if (opt == '-')
  {
    hasil = X - Y;
    printf("Pengurangan dari : %i - %i = %i", X, Y, hasil);
  }
  else if (opt == '*')
  {
    hasil = X * Y;
    printf("Perkalian dari : %i * %i = %i", X, Y, hasil);
  }
 else if (opt == '/')
  {
    hasil = X / Y;
    printf("Pembagian dari : %i / %i = %i", X, Y, hasil);
  }
  else
  {
    printf("Invalid Action!");
  }

  return 0;
}
