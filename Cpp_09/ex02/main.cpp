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

            if (std::stoi(av[i]) >= 0) {
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

        timeval befor_v, after_v, befor_d, after_d;

        gettimeofday(&befor_v, NULL);
        merge_sort_v(numbers_v);
        gettimeofday(&after_v, NULL);
        std::cout << "Time to process a range of  " << numbers_v.size()
                << " elements with std::[vector] : "
                << ((after_v.tv_sec - befor_v.tv_sec) * 1000000.0)
                + (after_v.tv_usec - befor_v.tv_usec) << " us" << std::endl;

        gettimeofday(&befor_d, NULL);
        merge_sort_d(numbers_d);
        gettimeofday(&after_d, NULL);
        std::cout << "Time to process a range of  " << numbers_d.size()
                << " elements with std::[deque]  : "
                << ((after_d.tv_sec - befor_d.tv_sec) * 1000000.0)
                + (after_d.tv_usec - befor_d.tv_usec) << " us" << std::endl;

        std::cout << "After:  ";
        for (size_t i = 0; i < numbers_d.size(); i++)
            std::cout << numbers_d.at(i) << " ";
        std::cout << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';  
    }
    return (0);
}