#include <string>

#include <vector>
#include <iostream>
#include "raining.hpp"




#include <algorithm>


using namespace std;

void BusinessSorting::AddNewBusiness(const std::string &name) {
    business2.push_back(name);
    std::sort(business2.begin(), business2.end());
}

void BusinessSorting::DisplayBusiness() const {
    if (business2.size()==1) {
        std::cout << "Your business is the following: " << std::endl;
    } else {
        std::cout<< " Your businesses are the following: "<<std::endl;
    }
    for (const std::string& businessorg:business2) {
        std::cout<< "    "<<businessorg<<std::endl;

    }

    std::cout<<std::endl;
}