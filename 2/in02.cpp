#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string student_id, first_name, last_name;
    int lines = 0;

    std::cout << "+================+================+===========+\n";

    while (std::cin >> student_id >> first_name >> last_name)
    {
        std::cout << "|  " << std::left << std::setw(14) << last_name
                  << "|  " << std::setw(14) << first_name
                  << "|  " << std::setw(9) << student_id << "|\n";
        lines++;

        if (lines % 5 == 0)
        {
            std::cout << "+----------------+----------------+-----------+" << lines << '\n';
        }
    }

    std::cout << "+================+================+===========+\n";
    return 0;
}