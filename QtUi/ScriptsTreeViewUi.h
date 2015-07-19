#pragma once

#include <QDockWidget>
#include "ui_ScriptTreeUi.h"

class ScriptsTreeViewUi : public QDockWidget
{
	Q_OBJECT
public:
	ScriptsTreeViewUi(QWidget *parent);
	virtual ~ScriptsTreeViewUi();

private:
	Ui::ScriptTreeViewDockWidget ui;

};

