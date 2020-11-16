#ifndef SBERPUSHBUTTON_H
#define SBERPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class SbercoinPushButton : public QPushButton
{
public:
    explicit SbercoinPushButton(QWidget * parent = Q_NULLPTR);
    explicit SbercoinPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // SBERPUSHBUTTON_H
