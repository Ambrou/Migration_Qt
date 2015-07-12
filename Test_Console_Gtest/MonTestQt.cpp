#include "MonTestQt.h"
#include <QtWidgets>
#include <QtTest/QtTest>


// Tests that the Foo::Bar() method does Abc.
TEST_F(MonTestQt, MethodBarDoesAbc)
{
	const std::string input_filepath = "this/package/testdata/myinputfile.dat";
	const std::string output_filepath = "this/package/testdata/myoutputfile.dat";
	//Foo f;
	EXPECT_EQ(0, 1);
}

// Tests that Foo does Xyz.
TEST_F(MonTestQt, DoesXyz)
{
	// Exercises the Xyz feature of Foo.
	EXPECT_EQ(1, 1);
}


// Tests that Foo does Xyz.
TEST_F(MonTestQt, QTLine)
{
	// Exercises the Xyz feature of Foo.
	QLineEdit lineEdit;

	QTest::keyClicks(&lineEdit, "hello world");

	EXPECT_EQ(lineEdit.text(), QString("hello world"));

}
