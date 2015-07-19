#pragma once

#include <QDockWidget>
#include "ui_MemoryManagementUi.h"

class MemoryManagementUi : public QDockWidget
{
public:
	MemoryManagementUi(QWidget *parent);
	virtual ~MemoryManagementUi();

private:
	Ui::MemoryManagementDockWidget ui;
};

