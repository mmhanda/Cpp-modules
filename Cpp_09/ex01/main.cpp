#include "RPN.hpp"

int main(int ac, char *av[])
{
    if (ac != 2) {
        std::cerr << "PARAM Invalid" << std::endl;
        return (1);
    }

    try
    {
        std::stack<int> stak;

        int i = 0;
        std::string arg(av[1]);
        while (arg[i])
        {
            if (arg[i] == ' ') {
                i++;
                continue;
            }
            if (to_int(arg[i]) != -1) {
                stak.push(to_int(arg[i]));
            }
            else if (arg[i] == '*' || arg[i] == '+'
                || arg[i] == '/' || arg[i] == '-') {
                    if (stak.size() < 2)
                        throw("invlid input");
                    calcul(stak, arg[i]);
                }
            else
                throw ("Error");
            i++;
        }
        if (stak.size() != 1)
            throw ("Error arg");
        std::cout << stak.top() << std::endl;
    }
    catch(const char *msg)
    {
        std::cerr << msg << '\n';
    }
}