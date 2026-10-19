#include <iostream>
#include <string>
#include <vector>


int main() {



    int n;
    int sum = 0;
    int math;
    std::vector<int> t;
    int li,ri;
    int T;
    std::cin>>n;

    for(int i=0;i<n;i++){
        std::cin>>math;
        t.push_back(math);
    }

    std::cin>>T;

    for(int i=0;i<T;i++){
        std::cin>>li>>ri;
        sum = 0;
        for(int j=li;j<ri;j++){
            sum =sum+ t[j];
        }
        std::cout<<sum<<std::endl;
    }




}

