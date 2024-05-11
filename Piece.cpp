#include "Piece.h"


Piece::Piece(int color, int rank, int file, Board& board) {
    this->color = color;
    this->rank = rank;
    this->file = file;
    this->board = &board;
}
int Piece::getRank() {
    return this->rank;
}
int Piece::getFile() {
    return this->file;
}
char Piece::getSymbol() {
    return this->symbol;
}
void Piece::move() {
    
}



