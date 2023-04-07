#include "BitcoinExchange.hpp"

int	sizeof_words(const char *word, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (word[i] == c)
			i++;
	while (word[i] != c && word[i] != '\0')
	{
			i++;
			size++;
	}
	return (size);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
				i++;
		if (s[i] != c && s[i] != '\0')
				count++;
		while (s[i] != c && s[i] != '\0')
				i++;
	}
	return (count);
}

int	ft_getindex(int i, char c, const char *s)
{
	while (s[i] == c)
			i++;
	return (i);
}

char **ft_free(int a, char **new1)
{
	while (a > 0)
	{
		free(new1[a]);
		a--;
	}
	free(new1);

    return(NULL);
}

char	**parce_it(const char *s, char c)
{
	int		a;
	int		i;
	int		b;
	char	**new1;

	if (!s)
		return (NULL);
	new1 = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!new1)
		return (NULL);
	a = 0;
	i = 0;
	while (a < count_words(s, c))
	{
		b = 0;
		new1[a] = (char *)malloc(sizeof_words(s, c) + 1);
		if (!new1[a])
			return (ft_free(a, new1));
		i = ft_getindex(i, c, s);
		while (s[i] != c && s[i])
				new1[a][b++] = s[i++];
		new1[a++][b] = '\0';
	}
	new1[a] = NULL;
	return (new1);
}

void free_lin(char **lin, int param)
{
    int fre = 0;
    while(lin[fre]) {
        free(lin[fre]);
        fre++;
    }
    free(lin);
    lin = NULL;
    if (fre != param)
        throw ("Error on file");
}

void stor_data_in_map(data &csv)
{

    std::ifstream file("data.csv");

    if(!file.good())
        throw ("file not good");

    std::string line;
    int rem = 0;
    while (std::getline(file, line))
    {
        if (rem > 0) {
            char **lin = parce_it(line.c_str(), ',');
            csv.insert(std::pair<std::string, double>(lin[0], std::stod(std::string(lin[1]))));
            free_lin(lin, 2);
        }
        rem ++;
    }
}

t_date handel_date(const char *get_date)
{
	char **date = parce_it(get_date, '-');
	t_date dat;

 	dat.yy = atoi(date[0]);
	dat.mm = atoi(date[1]);
	dat.dd = atoi(date[2]);
	return (dat);
}
 
int	check_valid_date(t_date date_input)
{
    int yy, mm, dd;

	yy = date_input.yy;
	dd = date_input.dd;
	mm = date_input.mm;

    if(yy>=1 && yy<=9999) {

        if(mm>=1 && mm<=12) {

            if((dd>=1&&dd<=31) && (mm==1||mm==3||mm==5
					||mm==7||mm==8||mm==10||mm==12))
				return (0);
            else if((dd>=1 && dd<=30) && (mm==4
					||mm==6||mm==9||mm==11))
				return (0);
            else if((dd>=1 && dd<=28)&&(mm==2))
				return (0);
            else if(dd==29 && mm==2 && (yy%400==0
					||(yy%4==0 && yy%100!=0)))
				return (0);
            else
				return (1);
        }
        else
			return (1);
    }
    else
		return (1);

    return 0;
}

int check_valid_btc(char *btc, double range)
{
	double bt = std::stod(btc);

	if (range == -1) {
		if (bt < 0)
			return (-1);
	}
	else if (range == 1) {

		if (bt >= 0 && bt <= 1000)
			return (0);
		else
			return (1);
	}
	return (0);
}

void check_txt(char *txt, data &csv) {

    std::ifstream file(txt);

    if (!file.good())
        throw ("txt file not good");

    std::string data;
    int rem = 0;
	t_date dat;
    while (std::getline(file, data))
    {
        if (rem > 0) {
			char **date = parce_it(data.c_str(), ' ');
			dat = handel_date(date[0]);
			if (check_valid_date(dat)) {
				std::cout << "Error: bad input => " << std::string(date[0]) << std::endl;
				continue;
			}
			else if (check_valid_btc(date[2], -1) == -1) {
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}
			else if (check_valid_btc(date[2], 1) == 1) {
				std::cout << "Error: too large a number." << std::endl;
				continue;
			}
			std::map<std::string, double>::iterator it = csv.find(std::string(date[0]));
			if (it == csv.end() ) {
				it = csv.lower_bound(std::string(date[0]));
				it--;
			}
			std::cout << std::string(date[0]) << " => " << std::string(date[2]) << " = "
						<<(it->second * std::stod(std::string(date[2]))) << std::endl;
        }
        rem ++;
    }
}