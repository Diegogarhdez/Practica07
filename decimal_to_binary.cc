/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal_to_binary.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 28 2023
  * @brief The program reads a decimal number and prints it as a binary number. 
  * @bug There are no known bugs
  */

 #include <iostream>

void decimalToBinary(int numero) {
  int resto;
  if (numero <= 1) {
    std::cout << numero;
    return;
  }
  resto = numero % 2;
  decimalToBinary(numero / 2);
  std::cout << resto;
}

int main() {
  int decimal;
  std::cout << "Ingresa un número decimal: ";
  std::cin >> decimal;
  if (decimal < 0) {
    std::cout << decimal << " no es un número entero positivo." << std::endl;
  }
  else {
    std::cout << "La forma binaria de " << decimal << " es: ";
    decimalToBinary(decimal);
    std::cout << std::endl;
  }
  return 0;
}
