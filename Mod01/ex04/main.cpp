#include <iostream>
#include <fstream>
#include <ostream>

void	ft_sed(std::string& to_repl, std::string sub, std::ifstream& infile, std::ofstream& outfile)
{
	std::string	buffer;
	char		ch;
	int			i = 0;

	while (infile.get(ch))
	{
		buffer.push_back(ch);
		if (buffer[i] == to_repl[i]) {
			i++;
			if (to_repl[i] == '\0') {
				outfile << sub;
				buffer.clear();
				i = 0;
			}
		}
		else {
			outfile << buffer;
			buffer.clear();
			i = 0;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4 || argv[2] == 0) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	std::ifstream	infile(argv[1]);
	if (!infile) {
		std::cout << "Error while trying to open " << argv[1] << std::endl;
		return 1;
	}

	std::string		newName = argv[1];
	newName += ".replace";

	std::ofstream	outfile(newName.c_str());
	std::string		to_repl = argv[2];
	std::string		sub = argv[3];
	ft_sed(to_repl, sub, infile, outfile);
	return 0;
}
