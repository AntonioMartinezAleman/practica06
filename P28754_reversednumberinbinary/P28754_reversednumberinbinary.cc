/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P72727
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date 10 Nov 2022 
  * @brief Write a program that reads a number and prints its binary representation reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P28754
  */

#include <iostream>
#include <string>
#include <algorithm>

std::string NumToBin(int& num) {
    std::string result;
    while (num != 0) {
        result = (num%2==0 ? "0":"1") + result;
        num /= 2;
    }
    return result;
}

int main() {
    int num{0};
    std::cin >> num;
    if (num == 0) {
        std::cout << "0" << std::endl;
        return 0;
    }
    std::string bin = NumToBin(num);
    std::string bin_copy = bin;
    std::reverse(bin.begin(),bin.end());
    std::cout << bin << std::endl;

    return 0;
}
