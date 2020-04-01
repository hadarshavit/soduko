#include <vector>

class CellOptions
{
    public:
        std::vector<int> get_opts();
        bool remove_opt(int);
    private:
        std::vector<int> opts;
};