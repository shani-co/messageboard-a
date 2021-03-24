#include "Direction.hpp"
#include <iostream>


namespace ariel {

#include <string>
#include "Direction.hpp"
using namespace std;
const int SIZE = 2147;


    class Board
    {
        char board [SIZE][SIZE];
        unsigned int row;
        unsigned int col;

    public:
        Board();
        void post(unsigned int row, unsigned int col, Direction dir, string str);
        string read(unsigned int row, unsigned int col, Direction dir, unsigned int len);
        void show();
    };

};