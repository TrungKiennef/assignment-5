#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  do
  {
    printf("\nNhap v�o so nguy�n n lon hon 0: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("\n So n phai lon hon 0, vui l�ng nhap lai !");
  }
  }while(n <= 0);
  printf("C�c uoc so cua %d l�: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
    }
  }
  printf("\nTong c�c uoc so cua %d l�: %ld", n, S);
 
}
