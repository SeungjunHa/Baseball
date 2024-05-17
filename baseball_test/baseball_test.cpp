#include "pch.h"
#include "../Project4/Baseball.cpp"

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalargument(string guessNumber) {
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (exception e) {
			// PASS
		}
	}
};

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	assertIllegalargument("12");
	assertIllegalargument("12s");
	assertIllegalargument("121");
}