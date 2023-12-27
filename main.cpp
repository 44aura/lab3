#include <iostream>
#include <cstring>

struct FSA{
private:
    std::string alphabet;
    int transitions[14][12] = {
        {1, 2, 2, 3, 13, 13, 13, 13, 13, 13, 13, 13},
        {13, 4, 4, 4, 4, 4, 4, 4, 4, 4, 13, 13},
        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 13, 13},
        {4, 4, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13},
        {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 5},
        {6, 7, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13},
        {13, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
        {8, 8, 8, 13, 13, 13, 13, 13, 13, 13, 13, 13},
        {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 9},
        {10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 13, 13},
        {13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13},
        {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 13},
        {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 0, 13},
        {13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13}
    };
    int state;
    int wrong_state;
public:
    FSA(){
    alphabet = "0123456789;.";
    state = 0;
    wrong_state = 13;
    }
    bool is_right(std::string input_text){
        int k = 0;
        while(k < input_text.size()){
            char word = input_text[k];
            if(alphabet.find(word) != std::string::npos){
                int word_index = alphabet.find(word);
                state = transitions[state][word_index];
            }
            else{
                state = wrong_state;
            }
            k = k + 1;
        };
        if(state == wrong_state){
            return false;
        }
        else{
            return true;
        }
    }
};

int main() {
    FSA machine;
    std::string input;
    std::cout << "Введите последовательность: ";
    std::cin >> input;

    if (machine.is_right(input)) {
        std::cout << "Последовательность является датой в формате \"ДД.ММ.ГГ\"" << std::endl;
    } else {
        std::cout << "Последовательность НЕ является датой в формате \"ДД.ММ.ГГ\"" << std::endl;
    }

    return 0;
}
