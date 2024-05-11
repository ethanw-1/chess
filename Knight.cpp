#include "Knight.h"

Knight::Knight(int color, int rank, int file, Board* board) : Piece(color, rank, file, board) {
}

char Knight::getSymbol() {
    if (color == 0) {
        return this->symbol;
    }
    if (color == 1) {
        return toupper(this->symbol);
    }
}