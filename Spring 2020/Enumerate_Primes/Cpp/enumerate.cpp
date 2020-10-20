#include<vector>

std::vector<int> enumerate_all_primes(int a){
    std::vector<bool> check(a+1,1);
    std::vector<int> ans;
    if(a < 2){
        return ans;
    }
    else{
        // initialize 0 and 1 to be 0
        check[0] = 0;
        check[1] = 0;

        for(int i = 0;i < check.size();i++){
            if(check[i] == 1){
                for(int j = 2; (i*j) < check.size(); j++){
                    check[j*i] = 0;
                }
                ans.push_back(i);
            }
        }
        return ans;
    }
}