#include "../headers/ssfinder.h"
#include <vector>
#include <iostream>

SSFinder::SSFinder(std::vector<int> _pattern){
    set(_pattern);
};

void SSFinder::set(std::vector<int> _pattern){
    pattern = _pattern;
    state_map = std::vector<size_t>(pattern.size() + 1, 0);
    createStateMap();
}

size_t SSFinder::operator()(size_t _state, char _signal)
{
	return (pattern[_state] == _signal) ? state_map[_state] : 0;
}

void SSFinder::createStateMap(){
    for(size_t i = 0; i < state_map.size(); i++){
        this->state_map[i] = (i + 1) % state_map.size();
    }
}