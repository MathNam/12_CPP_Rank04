#include <iostream>
#include <fstream>
#include <ostream>

int compare(std::string& symbol, std::ifstream& infile, std::ofstream& outfile)
{
	char ch;
	std::string buffer;
	int i = 0;

	while (infile.get(ch))
	{
		buffer.push_back(ch);
		if (buffer[i] == symbol[i])
		{
			i++;
			if (symbol[i] == '\0')
				return (1);
		}
		else
		{
			outfile << buffer;
			return (0);
		}
	}
	outfile << buffer;
	return (-1);
}

int main(int argc, char *argv[])
{
	if (argc != 4 || argv[2] == 0)
	{
		std::cout << "Invalid arguments" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	if (!infile)
	{
		std::cout << "Error while trying to open " << argv[1] << std::endl;
		return 1;
	}
	std::string newName = argv[1];
	newName += ".replace";
	std::ofstream outfile(newName.c_str());
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	while (1)
	{
		int i = compare(s1, infile, outfile);
		if (i == 1)
			outfile << s2;
		if (i == -1)
			break;
	}
	return 0;
}
