#include "Test.hpp"


std::string nospaces(std::string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

ariel::Board board;

TEST_CASE("Good post code") {
	board.post(100,200, ariel::Direction::Horizontal, "abcd");
	std::cout << board.read(100,200, ariel::Direction::Horizontal, 4);
    CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));
	CHECK(board.read(100,200, ariel::Direction::Horizontal, 4) == nospaces("abcd"));

}

TEST_CASE("Bad post code") {
	board.post(100,200, ariel::Direction::Horizontal, "abcd");
    CHECK_THROWS(board.read(100,200, ariel::Direction::Horizontal, 3));

}
