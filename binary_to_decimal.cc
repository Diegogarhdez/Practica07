/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binary_to_decimal.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 12 2023
  * @brief The program reads a binary number and prints this number as a decimal
  * number. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

int BinarioADecimal(int numero_binario) {
  int exponente{0};
  int resultado{0};
  while (true) { 
    if (numero_binario % 10) {
      resultado += std::pow(2, exponente);
    }
    if (numero_binario <= 1) {
      break; 
    }
    numero_binario /= 10;
    exponente++;
  }
  return resultado;
}


bool cifraMal(int numero) {
  while (numero != 0) {
    int cifra = numero % 10;
    if (cifra != 0 && cifra != 1) {
    return true;
    }
  numero /= 10;
  }

  return false;
}

int main() {
  int numero; 
  std::cin >> numero;
  if (cifraMal(numero)) {
    std::cout << "El número contiene cifras distintas a 0 y 1" << std::endl;
  }
  else {
    std::cout << "El número en binario es: " << BinarioADecimal(numero) << std::endl;
  }
}
