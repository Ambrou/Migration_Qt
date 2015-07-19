#include "HardwareMessageUi.h"


HardwareMessageUi::HardwareMessageUi(QWidget *parent)
	: QDockWidget(tr("Harware Message"), parent)
{
	ui.setupUi(this);
}


HardwareMessageUi::~HardwareMessageUi()
{
}
