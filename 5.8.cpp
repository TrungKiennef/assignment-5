#include<stdio.h>
int main()
{
  int temp, n, max;
  do
  {
    printf("\nNhap vào so nguyên n lon hon 0: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n So n phai lon hon 0, vui lòng nhap lai !");
    }
  }while(n <= 0);
  temp = n;
  do
  {
     max = temp % 10;
  }while(temp /= 10);
  printf("\nChu so dau tiên cua %d là: %d",n, max);
 
}
