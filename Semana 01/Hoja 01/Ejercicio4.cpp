#include <iostream>
int lastDigit(int n);
int LD(int n);
int main() {
    int n;
    std::cout<<"Ingresar exponente: ";
    std::cin>>n;
    std::cout<<LD(n)<<std::endl;
}
// 2^1=2
// 2^2=4
// 2^3=8
// 2^4=16

// 2^5=32
// 2^6=64
// 2^7=128
// ...
int LD(int n) {
  if (n==0) return 1;
  if (n%4==0) return 6;
  if (n%2==0) return 4;
  if (n%3==0) return 8;
  else return 2;
}

int lastDigit(int n) {
  int exp = 1;
  for (int i = 0; i<n;i++){
    exp = exp * 2;
  }
  int last_digit = exp%10;
  return last_digit;
}