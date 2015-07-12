#include "outputui.h"


OutputUi::OutputUi(QWidget *parent)
	: QDockWidget(tr("Output"), parent)
{
	ui.setupUi(this);

	QObject::connect(this, SIGNAL(log(const QString&)),
		ui.plainTextEdit, SLOT(insertPlainText(const QString&)));
}


OutputUi::~OutputUi()
{
}

void OutputUi::Log(const QString& traceLog)
{
	emit log(traceLog);
}

