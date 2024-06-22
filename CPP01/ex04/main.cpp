#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	std::ofstream	outfile;
	std::ifstream	infile;
	std::string		input;

	if (argc != 4)
		return (0);
	infile.open(argv[1]);
	infile >> input;
}
