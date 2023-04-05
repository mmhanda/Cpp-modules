#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try
    {
        data csv;
        stor_data_in_map(csv);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
