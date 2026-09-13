#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
for(auto value:s)
    {
        cout<< value<< endl;
    }
}
int main()
{
    set<string>s;
    int n;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>> str;
        s.insert(str);
    }
    print(s);
    
}