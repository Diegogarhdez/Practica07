/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 25 2023
  * @brief The program reads a number and prints the fibonacci secuence
  * corresponding number. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>

int main() {
  int numero;
  std::cin >> numero;
  if (numero < 0){
    return 1;
  }
  else {
    std::vector<int> fibonacciNumbers(numero + 1);
    fibonacciNumbers[0] = 0;
    fibonacciNumbers[1] = 1;

    std::cout << fibonacciNumbers[0] << " ";
    for (int i = 2; i <= numero; ++i) {
      fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i -2];
      std:: cout << fibonacciNumbers[i -1] << " ";
    }
  std::cout << std::endl;
  }

return 0;
}
