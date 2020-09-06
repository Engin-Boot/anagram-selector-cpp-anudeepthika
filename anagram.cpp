#include <bits/stdc++.h> 
#include<string>
#include<algorithm>
#include "anagram.h"
std::string modifystring(std::string& word)
{
   /*int j = 0; 
    for (int i = 0; i < word.size(); i++) 
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || 
            (word[i] >='a' && word[i] <= 'z')) 
        {  
            word[j] = word[i]; 
            j++; 
        } 
    }
    std::string s = word;*/
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !std::isalpha(c); } ), s.end());
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    std::sort(s.begin(), s.end());
    return s;
}
bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) 
{
    //Fill the correct implementation here
   std::string str1 = word1;
   std::string str2 = word2;
    std::string s1 = modifystring(str1);
    std::string s2 = modifystring(str2);
    if(s1 != s2)
    return false;
    else return true;
}



std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) 
{
    //Fill the correct implementation here
   std::vector<std::string> v;
    for(std::string can:candidates)
    { 
        if(Anagram::WordPairIsAnagram(word,can)==true)
            v.push_back(can);
    }   
    return v; 
}
