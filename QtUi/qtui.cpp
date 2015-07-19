#include "qtui.h"
#include "outputui.h"
#include "HardwareMessageUi.h"
#include "ScriptsTreeViewUi.h"
#include "HeaderImageUi.h"
#include "MemoryManagementUi.h"
#include "DisplayToolsUi.h"
#include <QSettings>
#include <QLineEdit>

QtUi::QtUi(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QWidget *widget = new QComboBox();
	ui.controledAcquisitionToolBar->insertWidget(ui.actionStartAcquisition, widget);
	widget = new QComboBox();
	ui.controledAcquisitionToolBar->insertWidget(ui.actionStartAcquisition, widget);
	ui.controledAcquisitionToolBar->insertSeparator(ui.actionStartAcquisition);
	widget = new QLineEdit();
	ui.controledAcquisitionToolBar->addWidget(widget);

	createDockWindows();



	readSettings();
}

QtUi::~QtUi()
{

}

void QtUi::createDockWindows()
{
	QDockWidget *dock = new OutputUi(this);
	addDockWidget(Qt::BottomDockWidgetArea, dock);
	dock = new HardwareMessageUi(this);
	addDockWidget(Qt::BottomDockWidgetArea, dock);
	dock = new ScriptsTreeViewUi(this);
	addDockWidget(Qt::RightDockWidgetArea, dock);
	dock = new HeaderImageUi(this);
	addDockWidget(Qt::RightDockWidgetArea, dock);
	dock = new MemoryManagementUi(this);
	addDockWidget(Qt::RightDockWidgetArea, dock);
	dock = new DisplayToolsUi(this);
	addDockWidget(Qt::RightDockWidgetArea, dock);
}

void QtUi::closeEvent(QCloseEvent *event)
{
	QSettings settings("MyCompany", "MyApp");
	settings.setValue("geometry", saveGeometry());
	settings.setValue("windowState", saveState());
	QMainWindow::closeEvent(event);
}

void QtUi::readSettings()
{
	QSettings settings("MyCompany", "MyApp");
	restoreGeometry(settings.value("geometry").toByteArray());
	restoreState(settings.value("windowState").toByteArray());
}
