#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int number;
    std::vector<int> b;


    while(std::cin>>number)
    {
        b.push_back(number);
    }

    std::sort(b.begin(), b.end());

    //std::cout<<b<<std::endl;

    for(int value :b)
    {
        std::cout<<value<<"\n";
    }
    return 0;
}