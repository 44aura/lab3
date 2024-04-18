#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "../headers/finiteAutomat.h"
#include "../headers/ssfinder.h"

int main(){
/*
    std::string text_s = {"asdwqewrtyu"};
    std::string pattern_s = {"qewr"};
    std::set<char> alphabet_s = {text_s.begin(), text_s.end()};
*/
    std::vector<int> text_v = {1, 2, 2, 1, 3, 4};
    std::vector<int> pattern_v = {1, 3, 4};
    std::set<int> alphabet_v = {text_v.begin(), text_v.end()};
    std::set<size_t> states = {0, 1, 2, 3};
    std::set<size_t> finish_state = { 3 };
/*
    SSFinder substring(pattern_s);
    FA <std::string> string_automat (alphabet_s, substring, states, 0, finish_state);
    std::cout << string_automat(text_s) << "\n";
*/
    SSFinder substring_v(pattern_v);
    FA <std::vector<int>> vector_automat(alphabet_v, substring_v, states, 0, finish_state);
    std::cout << vector_automat(text_v) << "\n";

} 