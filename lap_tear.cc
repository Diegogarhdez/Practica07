/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file lap_year.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 28 2023
  * @brief The program reads a year and prints YES or NO if it is a lap year. 
  * @bug There are no known bugs
  */

#include <iostream>

bool EsBisiesto(int year) {
  int resto1 = year % 4;
  int resto2 = year % 100;
  int resto3 = year % 400; 
  if ((resto1 == 0 && resto2 != 0) || (resto3 == 0)) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int year;
  std::cout << "Ingresa un año: ";
  std::cin >> year;
  if (EsBisiesto(year)) {
    std::cout << year << " es un año bisiesto." << std::endl;
  }
  else {
    std::cout << year << " no es un año bisiesto." << std::endl;
  }

  return 0;
}
