#include <iostream>

#include "src/raining.hpp"


int main() {

    BusinessSorting sorting;

    std::cout<<"Welcome to the Business Sorting Program!";

    while (true) {
        std::string busname;
        std::cout<< " Please enter the name of a business: ";
        std::getline(std::cin,busname);

        sorting.AddNewBusiness(busname);
        sorting.DisplayBusiness();

        std::string onemoretime;
        std::cout<< " Include another business? ";
        std::getline(std::cin,onemoretime);


        if (onemoretime != "Y" && onemoretime != "y" && onemoretime != "Yes" && onemoretime != "yes") {
            break;
        }
        std::cout<<std::endl;
    }

    std::cout<<"Thank you for using the Business Sorting Program!";
    return 0;
}
