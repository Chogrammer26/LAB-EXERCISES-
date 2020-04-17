#include <iostream>

int fibo(int a, int b, int c);

int main()
{
  int a,b,c;
  std::cin >> a >> b >> c;
  std::cout << fibo(a,b,c);
}

int fibo(int a, int b, int c)
{
  if (c <= 1)
    return a;
  else if (c <= 2)
    return b;
  else
    return fibo(a,b,c-1) + fibo(a,b,c-2);
}
