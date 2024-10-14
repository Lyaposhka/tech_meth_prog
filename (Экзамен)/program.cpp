#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        std::cerr << "Provide an integer argument." << std::endl;
        return 1;
    }

    srand(time(NULL));

    int n = std::stoi(argv[1]);

    std::cout << n * n - 34 * rand() % 57 + 21 << std::endl;
}
