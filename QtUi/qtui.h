#ifndef QTUI_H
#define QTUI_H

#include <QtWidgets/QMainWindow>
#include "ui_qtui.h"

class QtUi : public QMainWindow
{
	Q_OBJECT

public:
	QtUi(QWidget *parent = 0);
	~QtUi();


private:
	void createDockWindows();

	Ui::QtUiClass ui;
};

#endif // QTUI_H
