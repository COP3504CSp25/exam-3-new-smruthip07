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
    float max = (data.at(search_term)).at(0);
    for(auto x : data.at(search_term)){
        if(max < x){
            max = x;
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> m;
    std::map<std::string, std::vector<float>> a=in_map;
    std::map<std::string, std::vector<float>>::iterator i = a.begin();

    for(; i != a.end(); ++i){
        m[i->first] = consultMax(i->first, a);
    }
    return m;
}