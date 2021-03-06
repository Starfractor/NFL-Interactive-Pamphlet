#ifndef MAINTENANCEWINDOW_H
#define MAINTENANCEWINDOW_H

#include <QWidget>
#include "teamlist.h"

namespace Ui {
class MaintenanceWindow;
}

class MaintenanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MaintenanceWindow(TeamList* nflList, TeamList* expansionList, QWidget *parent = nullptr);
    ~MaintenanceWindow();

private slots:
    void on_pushButton_uploadFile_clicked();

    void on_pushButton_uploadFile2_clicked();

private:
    Ui::MaintenanceWindow *ui;
    TeamList* nflList;
    TeamList* expansionList;
};

#endif // MAINTENANCEWINDOW_H
