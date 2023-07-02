


#include <iostream>

int main(int argc , char* argv[] )
{
  double sum, razn, pow, div; //объявляем вещественные через ","
  double a1;
  double a2;
  std::cout << "Введите первое число : ";
  std::cin >> a1;
  std::cout  << "Введите второе число : ";
  std::cin >> a2;
  sum = a1 + a2;
  razn = a1 -  a2;
  pow = a1 * a2;
  div = a1 / a2;

  std::cout << a1  << "+" << a2 << "=" << sum << std::endl;
  std::cout << a1  << "-" << a2 << "=" << razn << std::endl;
  std::cout << a1  << "*" << a2 << "=" << pow << std::endl;
  std::cout << a1  << "/" << a2 << "=" << div<< std::endl;

  system("pause");

  return 0;

}

