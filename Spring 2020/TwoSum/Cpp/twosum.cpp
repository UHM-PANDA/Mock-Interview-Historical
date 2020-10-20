#include <vector>
#include <map>

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

bool two_sum_brute(std::vector<int> a, int target){
    for(int i = 0; i < a.size(); i++){
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] + a[j] == target){
                return 1;
            }
        }
    }
    return 0;
}
