#include <map>
#include "triplesum.hpp"

bool triple_sum_brute(std::vector<int> input, int a){
    for(int i = 0; i < input.size(); i++){
        for(int j = i + 1; j < input.size(); j++){
            for(int k = k + 1; k < input.size(); k++){
                if(input[i] + input[j] + input[k] == a){
                    return 1;
                }
            }
        }
    }
    return 0;
}

bool triple_sum_optimal(std::vector<int> input, int a){
    bool check;
    for(int i = 0; i < input.size(); i++){
        std::vector<int> temp(input.begin()+i,input.end());
        check = two_sum(temp, a-input[i]);
        if(check){
            return 1;
        }
    }
    return check;
}

bool two_sum(std::vector<int> a, int target){
    std::map<int,int> check;
    for(int i = 0; i < a.size();i++){
        if(check.find(a[i]) == check.end()){
            check.insert(std::pair<int,int>(target-a[i],0));
        }
        else{
            return 1;
        }
    }
    
    return 0;
}