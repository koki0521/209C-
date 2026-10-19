#include <iostream>
#include <string>

int main()
{
    std::string first_name;
    std::string middle_name;
    std::string last_name;

    std::cout << "Please input your first name\n";
    std::cin >> first_name;
    std::cout << "Please input your middle name\n";
    std::cin >> middle_name;
    std::cout << "Please input your last name\n";
    std::cin >> last_name;

    std::string message = "Hello, " + first_name + " " + middle_name
                        + " " + last_name + "!";
    int frame_width = message.length() + 4;

    // Print the top of the frame.
    for (int i = 0; i < frame_width; i++)
    {
        std::cout << '*';
    }
    std::cout << '\n';

    // Print an empty line inside the frame.
    std::cout << "* ";
    for (int i = 0; i < message.length(); i++)
    {
        std::cout << ' ';
    }
    std::cout << " *\n";

    // Print the greeting.
    std::cout << "* " << message << " *\n";

    // Print another empty line inside the frame.
    std::cout << "* ";
    for (int i = 0; i < message.length(); i++)
    {
        std::cout << ' ';
    }
    std::cout << " *\n";

    // Print the bottom of the frame.
    for (int i = 0; i < frame_width; i++)
    {
        std::cout << '*';
    }
    std::cout << '\n';

    return 0;
}

/*
 * Test notes:
 * - A very long name makes a very long frame. The program uses more memory
 *   for longer names.
 * - Japanese text can be saved and printed. But the frame may not line up
 *   because Japanese letters can use more screen space than English letters.
 *   The console must support UTF-8 to show Japanese text correctly.
 */
