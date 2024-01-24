#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Incorrect usage. Correct usage is:" << std::endl;
        std::cerr << "hydro <input.hy>" << std::endl;
        return EXIT_FAILURE;
    }

    std::string contents;
    {
        std::stringstream content_stream;
        std::fstream input(argv[1], std::ios::in);
        content_stream << input.rdbuf();
        contents = content_stream.str();
    }

    std::cout << contents << std::endl;
    return 0;
}
