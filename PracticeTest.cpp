/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("prrp");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("rare");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("dog_and_cats");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("miim");
	ASSERT_TRUE(actual);
}
TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("Sunday");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("FRIday");
	ASSERT_FALSE(actual);
}



TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("rare");
	ASSERT_FALSE(actual);
}
TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("rain");
	EXPECT_FALSE(false );
}
TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("rare");
	ASSERT_FALSE(false);
}
TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("rare");
	EXPECT_TRUE(true)
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("oooo");
	EXPECT_TRUE(true)
}


TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("computer_science");
	EXPECT_FALSE(false)
}


TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("chico_state");
	EXPECT_FALSE(false)
}


TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("lalal");
	EXPECT_FALSE(false)
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("okko");
	EXPECT_TRUE(true)
}

TEST(PracticeTest, symbols_not_palindrome)
{
	PracticeTest obj;
	bool actual = obj.isPalindrome("sceince");
	EXPECT_FALSE(false)
}
