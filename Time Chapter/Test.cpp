#include <iostream>
#include <string>


// assuming 0 <= hours < 24, 0 <= minutes < 60, 0 <= seconds < 60
void print_time_big() {
    constexpr int num_lines = 8;
    constexpr int num_nums = 10;
    static const std::string nums[num_nums][num_lines] = {
       {" xxxxxx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xx  xx ",
        " xxxxxx ",
        "        "},
       {"     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "     xx ",
        "        "},
       {" xxxxxx ",
        "     xx ",
        "     xx ",
        " xxxxxx ",
        " xx     ",
        " xx     ",
        " xxxxxx ",
        "        "},
       {" xxxxxx ",
        "     xx ",
        "     xx ",
        "  xxxxx ",
        "     xx ",
        "     xx ",
        " xxxxxx ",
        "        "},
        // etc.
    };

    // print the string
    for (int i = 0; i < num_lines; ++i) {
        std::cout << nums[0][i] << " ";
        std::cout << nums[1][i] << " ";
        std::cout << " | "; // or you could make a colon, whatever
        std::cout << nums[1][i] << " ";
        std::cout << nums[2][i] << " ";
        std::cout << " | "; // same here
        std::cout << nums[2][i] << " ";
        std::cout << nums[3][i] << "\n";
    }
}
int main() {

    print_time_big();
    return 0;
}
