#pragma once
#include "Piece.h"

class Rook : public Piece {
protected:
    char symbol = 'r';


public:

    Rook(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};