#include <iostream>
#include <string>
#include <vector>
#pragma once

template <typename Type>
class FA{
private:
    Type text;
    Type pattern;
    std::vector<int> states;
    int start_state;
    int final_state;
public:

	typedef typename Type::value_type Elem;
    FA(Type _text, Type _pattern, std::vector<int> _states, int _start_state, int _final_state){
        text = _text;
        pattern = _pattern;
        states = _states; 
        start_state = _start_state; 
        final_state = _final_state;
    }

    bool operator()(){
        int current_state = start_state;
        for(Elem elem:text){
            (elem == pattern[current_state])? current_state = states[current_state + 1] : current_state = start_state;
            if(current_state == final_state){
                return true;
            }
        }
        return false;
    }
};