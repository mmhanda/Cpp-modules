/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:48:42 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/15 10:00:18 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(MutantStack const &src) : std::stack<T>(src) {}
        virtual ~MutantStack() {}

        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
                std::stack<T>::operator=(rhs);
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
        const_iterator begin() const { return std::stack<T>::c.begin(); }
        const_iterator end() const { return std::stack<T>::c.end(); }
};

int main()
{
    
    return (0);
}
