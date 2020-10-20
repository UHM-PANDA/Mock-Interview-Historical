#include <stack>
#include <map>

#include "rpolish.hpp"

std::map<char,int> numbers = 
{
    {'0',0},
    {'1',1},
    {'2',2},
    {'3',3},
    {'4',4},
    {'5',5},
    {'6',6},
    {'7',7},
    {'8',8},
    {'9',9}
};

std::map<char,int> operators = 
{
    {'*',1},
    {'/',1},
    {'+',1},
    {'-',1}
};

int reverse_polish(std::string input){
    if(input.empty()){
        return 0;
    }
    std::stack<int> ans;
    for(int i = 0; i < input.size(); i++){
        auto is_number = numbers.find(input[i]);
        auto is_operator = operators.find(input[i]);
        if(is_number != numbers.end()){
            ans.push(is_number->second);
        }
        if(is_operator != operators.end()){
            int left;
            int right;
            right = ans.top();
            ans.pop();
            left = ans.top();
            ans.pop();
            switch(is_operator->first){
                case '*':  
                    ans.push(left*right);
                    break;
                case '-':
                    ans.push(left-right);
                    break;
                case '+':
                    ans.push(left+right);
                    break;
                case '/':
                    ans.push(left/right);
                    break;
                default:
                    break;
            }
        }
    }
    return ans.top();
}