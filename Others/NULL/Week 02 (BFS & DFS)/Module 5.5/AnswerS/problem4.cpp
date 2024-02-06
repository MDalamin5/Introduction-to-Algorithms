#include<bits/stdc++.h>
using namespace std;
string reversStr(string);
int main()
{
    cout<<reversStr("phitron");
}
string reversStr(string str)
{
    if(str.length()<=1)
    {
        return str;
    }
    string subStr = str.substr(0, str.length()-1);
    return str[str.length()-1] + reversStr(subStr);
}