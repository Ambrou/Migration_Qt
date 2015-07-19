#pragma once

#include <QDockWidget>
#include "ui_OutputUi.h"

class OutputUi : public QDockWidget
{
	Q_OBJECT
public:
	OutputUi(QWidget *parent);
	virtual ~OutputUi();
	void Log(const QString& traceLog);

private:
	Ui::OutputDock ui;

signals:
	void log(const QString& traceLog);
};

