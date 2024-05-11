#include "Queen.h"

Queen::Queen(int color, int rank, int file, Board* board) : Piece(color, rank, file, board) {
}

char Queen::getSymbol() {
    if (color == 0) {
        return this->symbol;
    }
    if (color == 1) {
        return toupper(this->symbol);
    }
}