#include "PmergeMe.hpp"

void merge_num_d(std::vector<int> &numbers_d)
{
//     void	continu_sort_tmp_stack(t_data *ptr, t_var *var, t_list *tmp1)
// {

    for (int i = 0; i < numbers_d.size(); i++)
    {
		vec_it = numbers_d.begin();
		while (ptr->tmp_sort->link)
		{
			if (ptr->tmp_sort->data > ptr->tmp_sort->link->data)
			{
				var->count = ptr->tmp_sort->data;
				ptr->tmp_sort->data = ptr->tmp_sort->link->data;
				ptr->tmp_sort->link->data = var->count;
			}
			ptr->tmp_sort = ptr->tmp_sort->link;
		}
		i++;
    }

}


void	continu_sort_tmp_stack(t_data *ptr, t_var *var, t_list *tmp1)
{
	while (var->len)
	{
		ptr->tmp_sort = tmp1;
		while (ptr->tmp_sort->link)
		{
			if (ptr->tmp_sort->data > ptr->tmp_sort->link->data)
			{
				var->count = ptr->tmp_sort->data;
				ptr->tmp_sort->data = ptr->tmp_sort->link->data;
				ptr->tmp_sort->link->data = var->count;
			}
			ptr->tmp_sort = ptr->tmp_sort->link;
		}
		var->len--;
	}
}