#include <iostream>
#include <vector>
#include <map>
#include <sstream>

#include "piglatin.hpp"

std::string pig_latin(std::string a){
    std::string ans = "";

    std::map<char,int> vowels = {
        {'a',0},
        {'e',0},
        {'i',0},
        {'o',0},
        {'u',0},
        {'A',0},
        {'E',0},
        {'O',0},
        {'U',0}
    };
    // if we find a vowel
    if(vowels.find(a[0]) != vowels.end()){
        ans = a + "way";
    }
    // we have to find the next vowel
    // while saving the consonants in the same order as they appear
    else{
        // temp will keep my consonants
        std::string temp = "";
        for(int i = 0; i < a.size();i++){
            if(vowels.find(a[0]) == vowels.end()){
                // here we append the consonant to the temp
                temp.append(a[i]);
                // and I erase that consonant from the string
                a.erase(0);
            }  
        }
        // from here we have found the first vowel or the string is empty
        // either way, we append the consonants to the end of a
        a += temp;

        // and here we append the 'ay' suffux
        ans = a + "ay";
    }
    return ans;
}

std::string pig_latin_translator(std::string a){
    // this is the cool way you would split a string with the ' ' as a delimiter in C++
    // dont worry about the details
    std::istringstream iss(a);
    std::vector<std::string> results((std::istream_iterator<std::string>(iss)), std::istream_iterator<std::string>());

    // now I pass each word into my helper function above
    for(int i = 0; i < results.size(); i++){
        results[i] = pig_latin(results[i]);
    }

    std::string answer = "";

    for(int i = 0; i < results.size(); i++){
        answer += results[i];
        answer += " ";
    }

    // checking to see if the last character is a ' '
    if(a.back() == ' '){
        return ans;
    }
    // if it is not, then pop the last character off and return the string
    else{
        ans.pop_back();
        return ans;
    }
}
