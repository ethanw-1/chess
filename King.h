#pragma once
#include "Piece.h"

class King : public Piece {
protected:
    char symbol = 'k';


public:

    King(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};