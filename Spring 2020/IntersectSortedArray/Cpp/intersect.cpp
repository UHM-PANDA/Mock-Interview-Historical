#include "intersect.hpp"

std::vector<int> intersection_brute(std::vector<int> a, std::vector<int> b){
    std::vector<int> ans;
    std::vector<int> big;
    std::vector<int> small;

    if(a.empty() || b.empty()){
        return ans;
    }

    if(a.size() > b.size()){
        big = a;
        small = b;
    }
    else{
        small = a;
        big = b;
    }    

    int start_big = -1;
    int start_small = -1;

    for(int i = 0; i < big.size(); i++){
        for(int j = 0; j < small.size(); j++){
            if(big[i] == small[j]){
                start_big = i;
                start_small = j;
            }
        }
    }

    if(start_big == -1 && start_small == -1){
        return ans;
    }

    for(int i = start_big; i < big.size(); i++){
        if(big[i] == small[start_small]){
            ans.push_back(big[i]);
            start_small++;
        }
    }

    return ans;

}

// std::binary_search()

std::vector<int> intersection_optimal(std::vector<int> a, std::vector<int> b){
    std::vector<int> ans;
    int i,j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] == b[j] && (i == 0 || a[i] != a[i-1])){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;

}