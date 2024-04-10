#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <set>
#include "../headers/finiteAutomat.h"
#include "../headers/ssfinder.h"

int main(){

    std::string text = {"asdwqewrtyu"};
    std::string pattern = {"qewr"};
    std::set<char> alphabet = {text.begin(), text.end()};
    std::set<size_t> states = {0, 1, 2, 3, 4};
    std::set<size_t> finish_state = { 4 };

    SSFinder substring(pattern);
    FA <std::string> string_automat (alphabet, substring, states, 0, finish_state);
    std::cout << string_automat(text) << "\n";

/*
    FA vector_automat(std::vector<int> {1, 2, 2, 1, 3, 4}, std::vector<int> {2, 1, 4}, states, start_state, finish_state);
    std::cout << vector_automat() << "\n";
*/
} 