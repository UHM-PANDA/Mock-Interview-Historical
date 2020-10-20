#include <algorithm>

#include "k_smallest.hpp"

int kth_smallest(std::vector<int> input, int k){
    std::vector<int> temp(input.begin(),input.end());
    std::sort(temp.begin(),temp.end());

    return temp[k-1];
}
