#include <iostream> 
#include "Piece.h"
#include "Board.h"
#include <string>


using namespace std;

int main()
{
    //a1 = 7, 0; h1 = 7, 7; h7 = 0, 7; a8 = 0, 0
    // e2 to e3, [6][4] to [5][4]

    Board* board = new Board();




    board->printBoard();

    delete board;
    return 0;
}