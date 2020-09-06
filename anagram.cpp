#iclude <bits/stdc++.h> 
#include<string>
#include<algorithm>
#include "anagram.h"

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) 
{
    //Fill the correct implementation here
    std::string s1 = modifystring(word1);
    std::string s2 = modifystring(word2);
    if(s1 != s2)
    return false;
    else return true;
}
std::string modifystring(std::string& word)
{
   int j = 0; 
    for (int i = 0; i < word.size(); i++) 
    {
        if ((word[i] >= 'A' && word[i] <= 'Z') || 
            (word[i] >='a' && word[i] <= 'z')) 
        {  
            word[j] = word[i]; 
            j++; 
        } 
    }
    std::string s = word.substr(0,j);
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());
    return s;
}


std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) 
{
    //Fill the correct implementation here
   std::vector<std::string> v;
    for(string can:candidates)
    { 
        if(Anagram::WordPairIsAnagram(word,can)==true)
            v.push_back(can);
    }
    
    return v;
    
    
}
