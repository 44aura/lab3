#include <iostream>
#include <cstring>
#include <vector>
#include <array>
#include "../headers/finiteAutomat.h"

int main(){

    std::vector<int> states = {0, 1, 2, 3, 4};
    int start_state = { 0 };
    int finish_state = { 4 };

    FA string_automat(std::string {"asdwqe"}, std::string {"asdw"}, states, start_state, finish_state);
    std::cout << string_automat() << "\n";

/*
    FA vector_automat(std::vector<int> {1, 2, 2, 1, 3, 4}, std::vector<int> {2, 1, 4}, states, start_state, finish_state);
    std::cout << vector_automat() << "\n";
*/
} 