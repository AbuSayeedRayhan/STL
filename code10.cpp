#include<bits/stdc++.h>
using namespace std;

void print( unordered_map <int, string> &m)
{
for(auto &pr : m)
    {
        cout<< pr.first << " " << pr.second << endl;
    }
}
int main()
{
    unordered_map <int, string > m;
    m[1]= "abc";
    m[5]= "cdc";
    m[3]= "acd";
    m.insert({4, "afg"});
auto it =m.find(7);
    
    print(m);

}