#pragma once

#include "Global.h"

#include <QString>
#include <QDebug>

//#include <Device.h>
#include <DeviceTest.h>

class QUTIPICPPSHARED_EXPORT QutipiCpp
{

public:
    QutipiCpp();

    QString helloWorld(int number)
    {
        auto* devicePointer = new DeviceTest();

        qDebug() << devicePointer->name(10);

        return "Hello world from library";
    }
};

