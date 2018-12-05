/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
		
};

// Toggle Once
TEST(TicTacToeBoardTest, ToggleOnce)
{
	TicTacToeBoard Board;
	ASSERT_EQ(O, Board.toggleTurn());
}

// Toggle Twice
TEST(TicTacToeBoardTest, ToggleTwice)
{
	TicTacToeBoard Board;
	Board.toggleTurn();
	ASSERT_EQ(X, Board.toggleTurn());
}

// Get Piece
TEST(TicTacToeBoardTest, GetPiece)
{
	TicTacToeBoard Board;
	ASSERT_EQ(Blank, Board.getPiece(0,0));
}

// Place Piece Invalid
TEST(TicTacToeBoardTest, PlaceInvalid)
{
	TicTacToeBoard Board;
	ASSERT_EQ(Invalid, Board.placePiece(5,5));
}

// Place Piece True
TEST(TicTacToeBoardTest, PlaceTrue)
{
	TicTacToeBoard Board;
	ASSERT_EQ(X, Board.placePiece(0,0));
	ASSERT_EQ(X, Board.getPiece(0,0));
}

// Place Piece Twice
TEST(TicTacToeBoardTest, PlaceTwice)
{
	TicTacToeBoard Board;
	ASSERT_EQ(X, Board.placePiece(0,0));
	ASSERT_EQ(X, Board.placePiece(0,0));
}


