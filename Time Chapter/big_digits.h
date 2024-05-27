// assuming 0 <= hours < 24, 0 <= minutes < 60, 0 <= seconds < 60
using namespace std;
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
void Big_Digits(int Hours, int Minutes, int Seconds) {
    constexpr int num_lines = 8;
    constexpr int num_nums = 11;
    static const std::string nums[num_nums][num_lines] = {
        {
        "  xxxx  ",
        " xx  xx ",
        " xx xxx ",
        " xxx xx ",
        " xx  xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        "   xx   ",
        "  xxx   ",
        " xxxx   ",
        "   xx   ",
        "   xx   ",
        "   xx   ",
        " xxxxxx ",
        "        " },
        {
        "  xxxx  ",
        " xx  xx ",
        "     xx ",
        "   xxx  ",
        "  xx    ",
        " xx  xx ",
        " xxxxxx ",
        "        " },
        {
        "  xxxx  ",
        " xx  xx ",
        "     xx ",
        "  xxxx  ",
        "     xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        "    xxx ",
        "   xxxx ",
        "  xx xx ",
        " xx  xx ",
        " xxxxxxx",
        "     xx ",
        "    xxxx",
        "        " },
        {
        " xxxxxx ",
        " xx  xx ",
        " xx     ",
        " xxxxx  ",
        "     xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        "  xxxx  ",
        " xx  xx ",
        " xx     ",
        " xxxxx  ",
        " xx  xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        " xxxxxx ",
        " xx  xx ",
        "     xx ",
        "    xx  ",
        "   xx   ",
        "   xx   ",
        "   xx   ",
        "        " },
        {
        "  xxxx  ",
        " xx  xx ",
        " xx  xx ",
        "  xxxx  ",
        " xx  xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        "  xxxx  ",
        " xx  xx ",
        " xx  xx ",
        "  xxxxx ",
        "     xx ",
        " xx  xx ",
        "  xxxx  ",
        "        " },
        {
        "        ",
        "   xx   ",
        "   xx   ",
        "        ",
        "   xx   ",
        "   xx   ",
        "        ",
        "        " },
        // etc.
    };

    // print the string

    for (int i = 0; i < num_lines; ++i) {

        gotoxy(10,4+i);
        cout << nums[Hours / 10][i];
        cout << nums[Hours % 10][i];
        cout << nums[10][i];  // or you could make a colon, whatever
        cout << nums[Minutes / 10][i];
        cout << nums[Minutes % 10][i];
        cout << nums[10][i];  // same here
        cout << nums[Seconds / 10][i];
        cout << nums[Seconds % 10][i];
    }
}
