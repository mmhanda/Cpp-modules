#include "PmergeMe.hpp"

std::deque<int> insert_num_d(std::deque<int> numbers_d)
{
    std::deque<int> ret = numbers_d;

    for (size_t i = 0; i < ret.size(); i++)
    {
        int it = 0;
        std::deque<int>::iterator vec_it = ret.begin();
        vec_it ++;
		while (vec_it != ret.end())
		{
            long long holder = 0;
			if (ret[it] > ret[it + 1])
			{
				holder = ret[it];
				ret[it] = ret[it + 1];
				ret[it + 1] = holder;
			}
            it++;
            vec_it++;
		}
    }
    return ret ;
}

std::deque<int> copy_data_d(std::deque<int> vec, int decide) {

    std::deque<int> ret_tab;

    if (decide == 1)
        for (size_t i = 0; i < (vec.size() / 2); i++)
            ret_tab.push_back(vec[i]);

    else if (decide == 2)
        for (size_t i = (vec.size() / 2); i < vec.size(); i++)
            ret_tab.push_back(vec[i]);
    return ret_tab;
}

std::deque<int> merge_d(std::deque<int> tab_one, std::deque<int> tab_two) {

    std::deque<int> ret_tab;

    while (!tab_one.empty() && !tab_two.empty())
    {
        if (tab_one[0] > tab_two[0]) {
            ret_tab.push_back(tab_two[0]);
            tab_two.erase(tab_two.begin());
        }
        else
        {
            ret_tab.push_back(tab_one[0]);
            tab_one.erase(tab_one.begin());
        }
    }

    while (!tab_one.empty())
    {
        ret_tab.push_back(tab_one[0]);
        tab_one.erase(tab_one.begin());        
    }

    while (!tab_two.empty())
    {
        ret_tab.push_back(tab_two[0]);
        tab_two.erase(tab_two.begin());        
    }
    return ret_tab;
}

std::deque<int> merge_sort_d(std::deque<int> numbers_d)
{
    std::deque<int> tab_one = copy_data_d(numbers_d, 1);
    std::deque<int> tab_two = copy_data_d(numbers_d, 2);
    std::deque<int> tab_one1 = insert_num_d(tab_one);
    std::deque<int> tab_two2 = insert_num_d(tab_two);
    numbers_d = merge_d(tab_one1, tab_two2);
    return numbers_d;
}

void insert_num_v(std::vector<int> &numbers_d)
{
    for (size_t i = 0; i < numbers_d.size(); i++)
    {
        int it = 0;
        std::vector<int>::iterator vec_it = numbers_d.begin();
        vec_it ++;
		while (vec_it != numbers_d.end())
		{
            long long holder = 0;
			if (numbers_d[it] > numbers_d[it + 1])
			{
				holder = numbers_d[it];
				numbers_d[it] = numbers_d[it + 1];
				numbers_d[it + 1] = holder;
			}
            it++;
            vec_it++;
		}
    }
}

std::vector<int> copy_data_v(std::vector<int> &vec, int decide) {

    std::vector<int> ret_tab;

    if (decide == 1)
        for (size_t i = 0; i < (vec.size() / 2); i++)
            ret_tab.push_back(vec[i]);

    else if (decide == 2)
        for (size_t i = (vec.size() / 2); i < vec.size(); i++)
            ret_tab.push_back(vec[i]);
    return ret_tab;
}

void merge_v(std::vector<int> &tab_one, std::vector<int> &tab_two, std::vector<int> &numbers_v) {

    numbers_v.clear();

    while (!tab_one.empty() && !tab_two.empty())
    {
        if (tab_one[0] > tab_two[0]) {
            numbers_v.push_back(tab_two[0]);
            tab_two.erase(tab_two.begin());
        }
        else
        {
            numbers_v.push_back(tab_one[0]);
            tab_one.erase(tab_one.begin());
        }
    }

    while (!tab_one.empty())
    {
        numbers_v.push_back(tab_one[0]);
        tab_one.erase(tab_one.begin());        
    }

    while (!tab_two.empty())
    {
        numbers_v.push_back(tab_two[0]);
        tab_two.erase(tab_two.begin());
    }
}

void merge_sort_v(std::vector<int> &numbers_d)
{
    std::vector<int> tab_one = copy_data_v(numbers_d, 1);
    std::vector<int> tab_two = copy_data_v(numbers_d, 2);
    insert_num_v(tab_one);
    insert_num_v(tab_two);
    merge_v(tab_one, tab_two, numbers_d);
}