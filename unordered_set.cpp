#include <bits/stdc++.h>
using namespace std;

/*
    NOTES:
    An unordered_set is an unordered associative container

    UNIQUE 
    element order can be anything 
    
    most of the operation takes O(1) time
*/
int main()
{
    unordered_set<int> set;
    set.insert(10);
    set.insert(20);
    set.insert(40);
    set.insert(60);
    set.insert(30);
    set.insert(50);
    set.insert(70);

    for(auto i : set) cout << i << " ";
    cout << endl;

    // It takes O(1) time
    int searchKey = 70;
    if(set.find(70) != set.end()) cout << "Element found " << endl;
    else if(set.find(70) == set.end()) cout << "Element not found" << endl;

    set.erase(60); //It takes O(1) time

    
}