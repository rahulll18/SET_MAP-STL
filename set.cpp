#include<bits/stdc++.h>
using namespace std;
/*
    NOTES:
    Associative Containers : implement sorted data structures that can be quickly searched(O(log n) complexity).
    everything is in sorted order

    SORTED AND UNIQUE
    
    set don't allow duplicate elements
    In set everything is in logarithmic time insertion , find , erase
*/

void printSet(set<int> &st){
    for (auto it : st)
        cout << it << " ";
        cout << endl;
}
int main()
{
    set<int> st;
    st.insert(2);
    st.insert(2);
    st.insert(1);
    st.insert(4);
    st.insert(1);
    st.insert(5);
    st.insert(6);

    // auto it = st.find(2);
    auto it = st.find(1);
    if(it != st.end()) cout << *it << " found " << endl;
    else cout << "Not found " << endl;

    //if the element is present then the occurrence is 1 and if elment is abent the  occurrence is 0 (check the ele is prenet 1 or absent 0)
    int cnt = st.count(4);
    cout << cnt << endl;

    st.erase(6);  //takes logarithmic time
    //printing funtion call
    printSet(st);
}