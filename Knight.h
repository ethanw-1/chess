#pragma once
#include "Piece.h"

class Knight : public Piece {
protected:
    char symbol = 'n';


public:

    Knight(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};