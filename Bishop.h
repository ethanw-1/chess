#pragma once
#include "Piece.h"

class Bishop : public Piece {
protected:
    char symbol = 'b';


public:

    Bishop(int color, int rank, int file, Board* board);
    void move(int rank);
    char getSymbol();
};