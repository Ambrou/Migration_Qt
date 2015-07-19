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

protected:
	void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

private:
	void createDockWindows();
	void readSettings();

	Ui::QtUiClass ui;
};

#endif // QTUI_H
