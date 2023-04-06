#include "PmergeMe.hpp"

int main(int ac, char **av) {

    if (ac < 3) {
        std::cout << "No enought argument" << std::endl;
        return (1);
    }
    std::vector<int> numbers_v;
    std::deque<int> numbers_d;
    int i = 1;

    try
    {
        while(av[i]) {

            if (std::stoi(av[i]) > 0) {
                numbers_v.push_back(std::stoi(av[i]));
                numbers_d.push_back(std::stoi(av[i]));
            }
            else
                throw std::runtime_error("check your argument");
            i++;
        }
        std::cout << "Before:  ";
        for (size_t i = 0; i < numbers_v.size(); i++)
            std::cout << numbers_v.at(i) << " ";
        std::cout << std::endl;
        
        
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}