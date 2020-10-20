#include "opposite.hpp"


std::vector<int> opposites_brute(std::vector<int> input){
    std::vector<int> ans;

    return ans;
}

std::vector<int> opposites_optimal(std::vector<int> input){
    std::map<int,int> check;
    std::vector<int> ans;

    for(int i = 0; i < input.size(); i++){
        if(input[i] >= 0){
            auto positive = check.find(input[i]);
            if(positive == check.end()){
                check.insert(std::pair<int,int>(input[i],1));
            }
            else{
                positive->second++;
            }
        }
    }

    for(int i = 0; i < input.size(); i++){
        if(input[i] < 0){
            auto opposite = check.find(-1 * input[i]);
            if(opposite != check.end()){
                opposite->second--;
            }
            else{
                check.insert(std::pair<int,int>(input[i],1));
            }
        }
    }

    for(auto& it : check){
        if(it.second != 0){
            ans.push_back(it.first);
        }
    }

    return ans;
}