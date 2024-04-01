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
    FA(Type _text, Type _pattern){
        text = _text;
        pattern = _pattern;
        state_map();
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

    void state_map(){
        std::vector<int> _states(pattern.size() + 1);
        for(size_t i = 0; i < pattern.size() + 1; i++){
            _states[i] = i;
        }
        states = _states;
        start_state = *states.begin();
        final_state = *(states.end() - 1);
    }
};