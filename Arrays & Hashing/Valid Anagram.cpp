// Valid Anagram :

// Approach 1: Sorting

// Time Complexity - O(NlogN + MlogM)
// Space Complexity -O(1) or O(n+m)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length()!= t.length())
        return false;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s == t;
}

int main(){
    string s,t;
    cin >> s >> t;
    if(isAnagram(s,t))
        cout << "Valid Anagram" << endl;
    else{
        cout << "NOt" << endl;
    }
    return 0;
}

// Approach 2: Hash Map

// Time Complexity - O(N+M)
// Space Complexity - O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.length()!= t.length())
        return false;
    unordered_map<char,int> countS;
    unordered_map<char,int> countT;
    for(int i =0;i<s.length();i++){
        countS[s[i]]++;
        countT[t[i]]++;
    }
    return countS == countT;
}

int main(){
    string s,t;
    cin >> s >> t;
    if(isAnagram(s,t))
        cout << "Valid Anagram" << endl;
    else{
        cout << "NOt" << endl;
    }
    return 0;
}

