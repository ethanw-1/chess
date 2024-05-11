#pragma once
#include "Piece.h"


class Board {
private:
    Piece*** board; //Create a 2D array of pointers, * pointer, ** array of pointers, *** 2D
public:
        
    ~Board();
    void printBoard();

};

