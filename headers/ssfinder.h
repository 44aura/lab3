#pragma once
#include <string>

class SSFinder{ 
private:
    std::string pattern;
public:
    SSFinder(std::string _pattern);
    void set(std::string _pattern);
    size_t operator()(size_t _state, char _signal);
};