#include<bits/stdc++.h>
using namespace std;
bool is_palindrom(string);
int main()
{
    string input;
    cin>>input;
    if(is_palindrom(input))
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

}
bool is_palindrom(string str)
{
    if(str == "" || str.size() == 1)
    {
        return true;
    }
    int n = str.size();

    string sml_str = str.substr(1,n-2);
    return is_palindrom(sml_str) && (str[0] == str.back());
    
}