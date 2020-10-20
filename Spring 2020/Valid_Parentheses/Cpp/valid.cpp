#include <stack>
#include <map>

#include "valid.hpp"

std::map<char,char> parenth = 
{
    {'(',')'},
    {'[',']'},
    {'{','}'},
    {'<','>'}
};

bool valid_parentheses(std::string input){
    std::stack<char> check;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '(' || input[i] == '[' || input[i] == '{'){
            check.push(input[i]);
        }
        else{
            if(check.empty()){
                return 0;
            }
            char top = check.top();
            if((top == '(' && input[i] == ')')
            || (top == '[' && input[i] == ']')
            || (top == '{' && input[i] == '}')
            ){
                check.pop();
            }
        }
    }
    return (check.empty()) ? 1 : 0;
}