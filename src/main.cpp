#include <iostream>
#include <cstring>
#include <vector>
#include <array>
#include "../headers/finiteAutomat.h"

int main(){

    FA string_automat(std::string {"asdwqe"}, std::string {"asdw"});
    std::cout << string_automat() << "\n";

    FA vector_automat(std::vector<int> {1, 2, 2, 1, 3, 4}, std::vector<int> {2, 1, 4});
    std::cout << vector_automat() << "\n";

} 