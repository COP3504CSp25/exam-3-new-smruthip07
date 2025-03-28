#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    //implement your function here
    if(data.end() == data.find(search_term)){
        return -1;
    }
    float avg;
    for(auto x : data.at(search_term)){
        avg += x;
    }
    return (avg/data.at(search_term).size());
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> m;
    //std::map<std::string, std::vector<float>>::iterator i = in_map.begin();

}