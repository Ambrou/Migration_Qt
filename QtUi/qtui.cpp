#include "qtui.h"
#include "outputui.h"

QtUi::QtUi(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	createDockWindows();
}

QtUi::~QtUi()
{

}

void QtUi::createDockWindows()
{
	OutputUi *dock = new OutputUi(this);
	addDockWidget(Qt::BottomDockWidgetArea, dock);
}
