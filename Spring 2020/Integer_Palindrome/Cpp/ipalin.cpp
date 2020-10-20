#include "ipalin.hpp"

bool integer_palindrome(int input){
    int temp = input;
    int check = temp % 10;
    temp /= 10;
    while(temp != 0){
        int lsn = temp % 10;
        check *= 10;
        check += lsn;
        temp /= 10;
    }
    return check == input;
}
