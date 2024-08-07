#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string out = argv[i];
            for (int j = 0; argv[i][j]; j++)
                out[j] = std::toupper(argv[i][j]);
            std::cout << out;
        }
        std::cout << std::endl;
    }
    return (0);
}