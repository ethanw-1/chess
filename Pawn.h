#pragma once
#include "Piece.h"

class Pawn : public Piece {
protected:
    char symbol = 'p';


public:

    Pawn(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};