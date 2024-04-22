#include<bits/stdc++.h>
using namespace std;

/*
    NOTES
    multiset has only SORTED properties 

    You can store duplicats elements but in sorted order
*/

void printSet(multiset<int> &set){
    for(auto it : set) cout << it << " ";
    cout << endl;
}

int main()
{
    multiset<int> multiS;

    multiS.insert(10);
    multiS.insert(10);
    multiS.insert(4);
    multiS.insert(4);
    multiS.insert(16);

    printSet(multiS); // 4 4 10 10 16

    multiS.erase(10); // erase element with its occurrences 4 4 16

    printSet(multiS); //4 4 16

    int count = multiS.count(4); //count of the 4 is 2
    cout << count << endl;
}