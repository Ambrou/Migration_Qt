#pragma once

#include <QDockWidget>
#include "ui_DisplayToolsUi.h"

class DisplayToolsUi : public QDockWidget
{
public:
	DisplayToolsUi(QWidget *parent);
	virtual ~DisplayToolsUi();

private:
	Ui::DisplayToolsDockWidget ui;

};

