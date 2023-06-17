
#include<vector>
#include<iostream>

using std::cout;;
using std::vector;


int main()
{
    vector<int> nums{1, 10, 7};
    vector<int> nums0;
    nums0.push_back(5); // add one element to the vector


    cout<<nums[0]<<"\n";

    vector<int> nums3(5, 10);

    for(auto n:nums3)
    {
        cout<<n;
        cout<<"\n";
    }

     cout<<"\n";

    vector<char> chars{'s', 'f'};

    for(auto ch: chars)
    {
        cout<<ch;
    }

    cout<<"\n";

    for(auto i=0; i < chars.size(); i++)
    {
        cout<<chars[i]<<"\n";
    }
    // nums[0] = 5;
    // cout<<nums[0]<<"\n";
    // cout<<"size: "<<nums.size()<<"\n";
    // cout<<"capacity: "<<nums.capacity()<<"\n";

    // nums.push_back(20);
    // cout<<"size: "<<nums.size()<<"\n";
    // cout<<"capacity: "<<nums.capacity()<<"\n";

    // nums.push_back(15);
    // nums.push_back(11);
    // nums.push_back(7);

    // cout<<"size: "<<nums.size()<<"\n";
    // cout<<"capacity: "<<nums.capacity()<<"\n";



    return 0;
}