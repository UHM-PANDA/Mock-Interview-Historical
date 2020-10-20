#include <algorithm>

#include "lcs.hpp"

int lcs_recursive(std::string x, std::string y, int m, int n){
    if(m == 0 || n == 0){
        return 0;
    }
    else if(x[m-1] == y[n-1]){
        return 1 + lcs_recursive(x,y,m-1,n-1);
    }
    else{
        return std::max(lcs_recursive(x,y,m-1,n),lcs_recursive(x,y,m,n-1));
    }
}