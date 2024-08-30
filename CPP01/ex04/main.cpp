#include <fstream>
#include <string>

int	main(int argc, char **argv) {
	std::ofstream	outfile;
	std::ifstream	infile;
	std::string		input;
	std::string		file;
	std::string		s1;
	std::string		s2;
	size_t			cpos;

	if (argc != 4)
		return (0);
	file = argv[1];
	infile.open(argv[1]);
	outfile.open((file + ".replace").c_str());
	s1 = argv[2];
	s2 = argv[3];
	if (infile.is_open()) {
		getline(infile, input);
		while (infile) {
			while ((cpos = input.find(s1)) != std::string::npos) {
				outfile << input.substr(0, cpos);
				outfile << s2;
				input = input.substr(cpos + s1.length(), std::string::npos);
			}
			outfile << input << std::endl;
			getline(infile, input);
		}
	}
	infile.close();
	outfile.close();
}

// Motif
// Learning about and using file io in C++
