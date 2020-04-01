#include "cell_options.hpp"

class GameOptions
{
    public:
        GameOptions(int i, int j);
        CellOptions operator()(int i, int j);

    private:
        std::vector<std::vector<CellOptions>> options;
};