#pragma once
#include <string>
#include "Board.h"

class Piece {
protected:
    int rank;
    int file;
    int color;
    char symbol;
    Board* board;

public:

    Piece(int color, int rank, int file, Board* board);

    int getRank();
    int getFile();
    virtual char getSymbol();
    virtual void move();

};



//class Pawn : public Piece {
//protected:
//    char symbol = 'p';
//
//
//public:
//
//    Pawn(int color, int rank, int file, Board& board) : Piece(color, rank, file, board) {
//    }
//
//    void move(int rank) {
//        this->rank = rank - 1;
//        std::cout << "Pawn move";
//
//    }
//
//    char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//};
//
//class Knight : public Piece {
//protected:
//    char symbol = 'n';
//
//public:
//
//    virtual char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//
//};
//
//class Bishop : public Piece {
//protected:
//    char symbol = 'b';
//
//public:
//
//    virtual char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//
//};
//
//class Rook : public Piece {
//protected:
//    char symbol = 'r';
//
//public:
//
//    virtual char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//
//};
//
//class Queen : public Piece {
//protected:
//    char symbol = 'q';
//
//public:
//
//    virtual char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//
//};
//
//class King : public Piece {
//protected:
//    char symbol = 'k';
//
//public:
//
//    virtual char getSymbol() {
//        if (color == 0) {
//            return symbol;
//        }
//        if (color == 1) {
//            return toupper(symbol);
//        }
//    }
//
//};