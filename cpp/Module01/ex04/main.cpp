#include <iostream>
#include <fstream>

int	replace(std::string file, std::string original, std::string to_replace);

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "wrong number of inputs" << std::endl;
		return (-1);
	}
	return (replace(argv[1], argv[2], argv[3]));
}

int	replace(std::string file, std::string original, std::string to_replace) {
	std::ifstream input(file.c_str());
	if (!input.is_open())
		std::cout << "Error opening file " << file.c_str() << std::endl;
	std::ofstream output((file + ".replace").c_str(), output.out | output.trunc);
	if (!output.is_open())
	{
		std::cout << "Error creating file " << (file + ".replace") << std::endl;
		input.close();
		return (-1);
	}
	while (!input.eof()) {
		std::string line;
		getline(input, line);
		while (1) {
			std::size_t	pos = line.find(original);
			if (pos == std::string::npos)
				break ;				
			line.erase(pos, original.length());
			line.insert(pos, to_replace);
		}
		if (!input.eof())
			output << line << std::endl;
		else
			output << line;
	}
	input.close();
	output.close();
	return (0);
}
