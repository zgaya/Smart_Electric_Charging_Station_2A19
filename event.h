#ifndef EVENT_H
#define EVENT_H


#include <QDateTime>
#include <QObject>
#include <QString>

class Event : public QObject
{
    Q_OBJECT
    //A property behaves like a class data member, but it has additional features accessible through the Meta-Object System.

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString information READ information WRITE setinformation NOTIFY informationChanged)
    Q_PROPERTY(QDateTime startDate READ startDate WRITE setStartDate NOTIFY startDateChanged)
    Q_PROPERTY(QDateTime endDate READ endDate WRITE setEndDate NOTIFY endDateChanged)
public:
    explicit Event(QObject *parent = 0);

    QString name() const;
    void setName(const QString &name);

    QString information() const;
    void setinformation(const QString &information);

    QDateTime startDate() const;
    void setStartDate(const QDateTime &startDate);

    QDateTime endDate() const;
    void setEndDate(const QDateTime &endDate);
signals:
    void nameChanged(const QString &name);
    void informationChanged(const QString &information);
    void startDateChanged(const QDateTime &startDate);
    void endDateChanged(const QDateTime &endDate);
private:
    QString mName;
    QString minformation;
    QDateTime mStartDate;
    QDateTime mEndDate;
};

#endif // EVENT_H
