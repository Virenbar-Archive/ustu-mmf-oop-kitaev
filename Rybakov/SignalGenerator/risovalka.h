#ifndef RISOVALKA_H
#define RISOVALKA_H

#include <QWidget>
#include "signalgenerator.h"

class Risovalka : public QWidget
{
    Q_OBJECT
public:
    explicit Risovalka(QWidget *parent = 0);

    virtual QSizePolicy sizePolicy() const
        {return QSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);}
    virtual QSize sizeHint() const {return QSize(1000, 500);}

    void SetGenerator(SignalGenerator *iSignalGen){PSignalGen = iSignalGen;}
signals:

public slots:

protected:
    virtual void paintEvent(QPaintEvent *iEvent);

    SignalGenerator *PSignalGen;//указатель на экземпляр генератора сигналов
};

#endif // RISOVALKA_H
