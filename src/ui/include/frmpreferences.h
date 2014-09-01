#ifndef FRMPREFERENCES_H
#define FRMPREFERENCES_H

#include <QDialog>
#include <QTreeWidgetItem>

namespace Ui {
class frmPreferences;
}

class frmPreferences : public QDialog
{
    Q_OBJECT

public:
    explicit frmPreferences(QWidget *parent = 0);
    ~frmPreferences();

private slots:
    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

private:
    Ui::frmPreferences *ui;
};

#endif // FRMPREFERENCES_H