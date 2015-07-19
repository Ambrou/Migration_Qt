#pragma once

#include <QDockWidget>
#include "ui_HardWareMessageUi.h"

class HardwareMessageUi : public QDockWidget
{
	Q_OBJECT
public:
	HardwareMessageUi(QWidget *parent);
	virtual ~HardwareMessageUi();

private:
	Ui::HardWareMessageDock ui;

};

