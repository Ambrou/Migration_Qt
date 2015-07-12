#include <gtest/gtest.h>
#include <QtWidgets/QApplication>

static int argc = 0;
static QApplication app(argc, 0);


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}