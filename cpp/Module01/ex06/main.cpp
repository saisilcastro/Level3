#include "Harl.h"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "arguments are wrong you fool\n";
		return (-1);
	}
	Harl fucker;
	fucker.complain(argv[1]);
	return (0);
}