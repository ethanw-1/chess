#include "Pawn.h"

Pawn::Pawn(int color, int rank, int file, Board* board) : Piece(color, rank, file, board) {
}

char Pawn::getSymbol() {
    if (color == 0) {
        return this->symbol;
    }
    if (color == 1) {
        return toupper(this->symbol);
    }
}

void Pawn::move(int rank) {
    this->rank = rank - 1;
}


