#include "MemoryManagementUi.h"


MemoryManagementUi::MemoryManagementUi(QWidget *parent)
	: QDockWidget(tr("Memory Management"), parent)
{
	ui.setupUi(this);
}


MemoryManagementUi::~MemoryManagementUi()
{
}
