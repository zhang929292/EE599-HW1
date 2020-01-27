#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout <<" Name: " << solution.StudentName() << std::endl;
    std::cout <<" Age: " << solution.StudentAge() << std::endl;
    std::cout <<" Interest: " << solution.StudentMajor() << std::endl;

    return EXIT_SUCCESS;
}