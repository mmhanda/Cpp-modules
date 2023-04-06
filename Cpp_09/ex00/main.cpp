#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (0);
    try
    {
        data csv;
        stor_data_in_map(csv);
        check_txt(av[1], csv);
    }
    catch(const char *msg)
    {
        std::cerr << msg << '\n';
    }
    return 0;
}
