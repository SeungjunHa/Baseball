#include "pch.h"
#include "../Project4/Baseball.cpp"

TEST(BaseballGame, ThrowExceptionWhenInputLengthIsUnmached) {
	Baseball game;
	try {
		game.guess(string("12"));
		FAIL();
	}
	catch (exception e) {
		// PASS
	}
}

TEST(BaseballGame, ThrowExceptionWhenInvalidChar) {
	Baseball game;
	try {
		game.guess(string("12s"));
		FAIL();
	}
	catch (exception e) {
		// PASS
	}
}