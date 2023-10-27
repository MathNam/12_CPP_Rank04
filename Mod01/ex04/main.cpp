#include <errno.h>
#include <string.h>
#include <iostream>
#include <fstream>

void	replace(std::string& target, std::string sub, std::ifstream& ifs, std::ofstream& ofs)
{
	std::string	buffer;
	size_t		i = 0;

	while (std::getline(ifs, buffer)) {
		i = buffer.find(target);
		if (i != std::string::npos && !target.empty()) {
			buffer.erase(i, target.length());
			buffer.insert(i, sub);
		}
		ofs << buffer;
		if (!ifs.eof())
			ofs << std::endl;
		buffer.clear();
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 4 || argv[2] == 0) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	std::ifstream	ifs(argv[1]);
	if (!ifs) {
		std::cout << "Error while trying to open " << argv[1] << std::endl;
		return 1;
	}

	std::string		newName = argv[1];
	newName += ".replace";
	std::ofstream	ofs(newName.c_str());
	if (!ofs) {
		std::cout << "Error while trying to create " << newName << std::endl;
		return 1;
	}

	std::string		target = argv[2];
	std::string		sub = argv[3];
	replace(target, sub, ifs, ofs);

	return 0;
}
