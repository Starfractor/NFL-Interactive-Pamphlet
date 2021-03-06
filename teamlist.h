#ifndef TEAMLIST_H
#define TEAMLIST_H
#include "footballteam.h"
#include <QString>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>



class TeamList
{
public:
    enum category {teamName, stadiumName, seatingCapacity, location, conference, division, surfaceType, stadiumRoofType, dateOpened};
    TeamList();
    TeamList(QFile file);
    bool update(QFile file);
    bool alreadyExists(FootballTeam team);
    QList<FootballTeam> getTeamList() const;
private:
    QList<FootballTeam> teamList;
};

#endif // TEAMLIST_H
