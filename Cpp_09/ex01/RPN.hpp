#pragma once 

#include <iostream>
#include <vector>

class RPN
{
    private:
        std::vector<int> ragne;
    public:
        RPN();
        ~RPN();
        RPN &operator=(RPN const &copyfrom);
        RPN (const RPN &copy_from) { this = copy_from };
};
