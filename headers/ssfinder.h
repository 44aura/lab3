#pragma once
#include <string>
#include <vector>

class SSFinder{ 
private:
    std::vector<int> pattern;
    std::vector<size_t> state_map;
public:
    SSFinder(std::vector<int> _pattern);
    void set(std::vector<int> _pattern);
    void createStateMap();
    size_t operator()(size_t _state, char _signal);
};