#pragma once
#include <iostream>
#include "Board.h"

using namespace std;

Board::Board() {
    board = new Piece * *[8]; // Allocate 8 addresses of memory

    for (int i = 0; i < 8; i++) {
        board[i] = new Piece * [8]; //Allocate 8 addresses of memory for each of the previous 8 addresses
    }
    for (int i = 0; i < 8; i++) { //Set the board to NULL
        for (int j = 0; j < 8; j++) {
            board[i][j] = NULL;
        }
    }

    //White Pieces
//board[7][0] = new Rook(0);
//  board[7][1] = new Knight(0);
//  board[7][2] = new Bishop(0);
//  board[7][3] = new Queen(0);
//  board[7][4] = new King(0);
//  board[7][5] = new Bishop(0);
//  board[7][6] = new Knight(0);
//  board[7][7] = new Rook(0);

//  for (int i = 0; i < 8; i++) {
//      board[6][i] = new Pawn(0, 6, i, *this);
//  }

//  //Black Pieces
//  board[0][0] = new Rook(1);
//  board[0][1] = new Knight(1);
//  board[0][2] = new Bishop(1);
//  board[0][3] = new Queen(1);
//  board[0][4] = new King(1);
//  board[0][5] = new Bishop(1);
//  board[0][6] = new Knight(1);
//  board[0][7] = new Rook(1);

//  for (int i = 0; i < 8; i++) {
//      board[1][i] = new Pawn(1, 1, i, *this);
//  }

}
void Board::printBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != NULL) {
                cout << board[i][j]->getSymbol(); // -> used to access the members of a class
            }
        }
        cout << endl;
    }
}
Board::~Board() { // Delete the board in order from when the last memory was created
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != NULL) {
                delete board[i][j]; // Delete the 8 linked addresses
            }

        }
        delete board[i]; //Delete the initial 8 addresses
    }
    delete board; //Delete the board object
}



