#include "RPN.hpp"

int to_int(const char c) {
    switch (c) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        default:
            return -1;
    }
}

void calcul(std::stack<int> &stak, const char param) {

    if (param == '+') {
        int tmp = stak.top();
        stak.pop();
        tmp = stak.top() + tmp;
        stak.pop();
        stak.push(tmp);
    }

    if (param == '-') {
        int tmp = stak.top();
        stak.pop();
        tmp = stak.top() - tmp;
        stak.pop();
        stak.push(tmp);
    }

    if (param == '*') {
        int tmp = stak.top();
        stak.pop();
        tmp = stak.top() * tmp;
        stak.pop();
        stak.push(tmp);
    }

    if (param == '/') {
        if (stak.top() == 0)
        {
            throw ("Can't devid on 0");
        }
        int tmp = stak.top();
        stak.pop();
        tmp = stak.top() / tmp;
        stak.pop();
        stak.push(tmp);
    }
}