#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    int n;
    cin>> n;
    for (int i=0; i<n; i++)
    {
        string str;
        cin>> str;
        s.insert(str);
    }

   
        string st;
        cin>> st;
        auto it= s.find(st);
        if(it == s.end())
        {
            cout<<"NO";
        }
        else{
cout<<"YES";
        }
    }
