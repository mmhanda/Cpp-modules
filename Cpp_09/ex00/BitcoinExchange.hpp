#pragma once

#include <iostream>
#include <map>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <stdio.h>


typedef struct s_date 
{
    int dd;
    int yy;
    int mm;
} t_date;

typedef std::map<std::string, double>  data;

void stor_data_in_map(data &csv);
void check_txt(char *txt, data &csv);