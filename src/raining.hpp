#pragma once

#include <string>
#include <vector>


class BusinessSorting {
private:

    std::vector <std::string> business2;


public:

    void AddBusiness(const std::string& name);
    void DisplayBusiness() const;

};