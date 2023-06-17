#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    
    // string lang = "C++";
    // cout<<lang<<"\n";
    // cout<<"Memory of num: "<<&num<<"\n";
    // cout<<"Memroy address of lang: "<<&lang<<"\n";
    // cout<<"Memory address of C in C++: "<<static_cast<void*>(&lang[0])<<"\n";
    // cout<<"Memory address of + in C++: "<<static_cast<void*>(&lang[1])<<"\n";
    // cout<<"Memory address of + in C++: "<<static_cast<void*>(&lang[2])<<"\n";
    // cout<<"Size:"  <<lang.size()<<"\n";
    // cout<<"Capacity: "<<lang.capacity()<<"\n";
    // int num2 = 5;
    // cout<<"Memory of num: "<<&num2<<"\n";

    string s0("Initial string");
    cout<<s0<<"\n";

    string s1(s0);
    cout<<s1<<"\n";

    string s2(s0, 8, 3);
    cout<<s2<<"\n";

    string s3("Another character sequence", 12);
    cout<<s3<<"\n";

    string s4(10, 'x');
    cout<<s4<<"\n";

    string s5(10, 42);
    cout<<s5<<"\n";

    string s6(10, 65);
    cout<<s6<<"\n";

    return 0;
}