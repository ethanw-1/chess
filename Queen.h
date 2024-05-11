#pragma once
#include "Piece.h"

class Queen : public Piece {
protected:
    char symbol = 'q';


public:

    Queen(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};