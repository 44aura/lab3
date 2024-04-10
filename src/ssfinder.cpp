#include "../headers/ssfinder.h"

SSFinder::SSFinder(std::string _pattern){
    set(_pattern);
};

void SSFinder::set(std::string _pattern){
    pattern = _pattern;
}

size_t SSFinder::operator()(size_t _state, char _signal)
{
	return (pattern[_state] == _signal) ? _state + 1 : 0;
}