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

char	**split(const char *s, char c)
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
            char **lin = split(line.c_str(), ',');
            csv.insert(std::pair<std::string, double>(lin[0], std::stod(std::string(lin[1]))));;
            std::cout << csv.at(std::string(lin[0])) << std::endl;
            free_lin(lin, 2);
        }
        rem ++;
    }
}

void check_txt(char *txt) {

    std::ifstream file(txt);

    if (!file.good())
        throw ("txt file not good");

    std::string data;
    std::vector<std::string> table;
    int rem = 0;
    while (std::getline(file, data))
    {
        if (rem > 0) {
            if (data.find(" | ") == std::string::npos)
                throw ("Error: bad input");
            // char **lin = split(data.c_str(), '-');
            // data = lin[0] + lin[1];
            // lin = split(lin[2], ' ');
            // data += lin[0] + " " + lin[2];
            // free_lin(lin, 3);
            table.push_back(data);
        }
        rem ++;
    }
    
}