#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<auto> v_p ={ {1,3}, {1,4,}, {1,9}};
    
    for (auto &value : v_p)
    {
        cout<< value. first << " " <<value.second << endl;

    }
    swap(v_p[1], v_p[2]);
    cout<< endl;
     for (auto  &value : v_p)
    {
        cout<< value. first << " " <<value.second << endl;

    }
}