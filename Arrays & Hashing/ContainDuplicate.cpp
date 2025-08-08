// Contain Duplicates:

// Approach 1: Brute Force : By checking next to one element 
// Time Complexity - O(N*N)
// Space Complexity - O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containDuplicate(vector<int>&arr,int n){
    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            if(arr[i]== arr[j])
                return true;
        }
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(containDuplicate(arr,n)){
        cout << "ContainDuplicate"<< endl;
    }
    else
        cout << "No Duplicate" << endl;
    return 0;
}

// Approach 2: Using Sorting :

// Time Complexity - O(NlogN)
// Space Complexity - O(1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containDuplicate(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1]){
            return true;
        }
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(containDuplicate(arr,n)){
        cout << "ContainDuplicate"<< endl;
    }
    else
        cout << "No Duplicate" << endl;
    return 0;
}

// Approach 3 : Using Hash Set

// Time Complexity - O(N)
// Space Complexity - O(N)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool containDuplicate(vector<int>&arr){
    unordered_set<int> dup;
    for(int num : arr){
        if(dup.find(num)!= dup.end()){
            return true;
        }
        dup.insert(num);
    }
    return false;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(containDuplicate(arr,n)){
        cout << "ContainDuplicate"<< endl;
    }
    else
        cout << "No Duplicate" << endl;
    return 0;
}