/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file digitos.cc
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Oct 25 2023
  * @brief The program reads a natural number and prints the sum of their digits
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>

std::vector<int> separar_digitos(int numero) {
  std::vector<int> digitos;
  while (numero > 0) {
    digitos.push_back(numero % 10);
    numero /= 10;
  }
  return digitos;
}

int sumar_digitos(const std::vector<int>& digitos) {
  int suma = 0;
  for (int digito : digitos) {
    suma += digito;
  }
  return suma;
}

int main() {
  int numero_principal;
  std::cin >> numero_principal;
  
  if (numero_principal < 0) {
    std::cout << "EL NUMERO ES NEGATIVO" << std::endl;
    return 1;
  } else {
    std::vector<int> digitos = separar_digitos(numero_principal);
    
    int suma = sumar_digitos(digitos);
    std::cout << suma << std::endl;
  }

  return 0;
}
