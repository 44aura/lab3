#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <functional>
#pragma once

template <typename Type>
class FA{
public:
	typedef typename Type::value_type Elem;

    FA(std::set<Elem> _alphabet, std::function<size_t(size_t, Elem)> _trans_f, std::set<size_t> _states, size_t _start_state, std::set<size_t> _final_state){
        alphabet = _alphabet;
        trans_f = _trans_f;
        states = _states; 
        current_state = _start_state; 
        final_state = _final_state;
    }

    bool operator()(Type inputstr){
        for(Elem elem : inputstr){
            current_state = trans_f(current_state, elem);
            if (final_state.find(current_state) != final_state.end()){
                return true;
            }
        }
        return false;
    }
private:
    std::set<Elem> alphabet;
    std::function<size_t(size_t, Elem)> trans_f;
    std::set<size_t> states;
    size_t current_state;
    std::set<size_t> final_state;
};