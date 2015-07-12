#include "MonTestQt.h"
#include <QtWidgets>
#include <QtTest/QtTest>
#include "outputui.h"

// Tests that the Foo::Bar() method does Abc.
TEST_F(MonTestQt, MethodBarDoesAbc)
{
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

// Tests that Foo does Xyz.
TEST_F(MonTestQt, QtOutPutUi)
{
	// Exercises the Xyz feature of Foo.
	OutputUi outputUi(0);

	EXPECT_STREQ("Output", outputUi.windowTitle().toStdString().c_str());
}

// Tests that Foo does Xyz.
TEST_F(MonTestQt, QtOutPutUiLog)
{
	// Exercises the Xyz feature of Foo.
	OutputUi outputUi(0);
	QSignalSpy spy(&outputUi, SIGNAL(log(const QString&)));

	outputUi.Log("Coucou");

	QList<QVariant> arguments = spy.takeFirst();
	EXPECT_EQ(1, arguments.count());
	EXPECT_STREQ("Coucou", arguments.at(0).toString().toStdString().c_str());

}

