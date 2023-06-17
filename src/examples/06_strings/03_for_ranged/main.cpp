
#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "Python";

    for(auto ch: lang)  // with for(auto& ch: lang) it changes to X
    {
        cout<<ch<<"\n";
        ch = 'X';
    }

    for(auto ch:lang)
    {
        cout<<ch<<"\n";
    }

    return 0;
}