#pragma once

#include <QDockWidget>
#include "ui_HeaderImageUi.h"

class HeaderImageUi : public QDockWidget
{
public:
	HeaderImageUi(QWidget *parent);
	virtual ~HeaderImageUi();

private:
	Ui::HeaderImageDockWidget ui;

};

