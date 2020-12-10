#include <QDebug>
#include "cppworker.h"
#include <QString>
#include <string>

CppWorker::CppWorker(QObject *parent) : QObject(parent)
{

}

void CppWorker::regularMethod()
{
	qDebug() << "This is C++ talking, regularMethod called.";
}

QString CppWorker::getNumber(int nmbr)
{
	return QString::fromStdString(std::to_string(nmbr));
}

QString CppWorker::regularMethodWithReturn(QString name, int age)
{
    return QString(name + ":"+ QString::number(age) + " years old");
}

void CppWorker::cppSlot()
{
    qDebug() << "This is C++ talking, cppSlot called.";
}
