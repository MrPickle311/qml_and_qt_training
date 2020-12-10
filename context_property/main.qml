import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Call C++ from QML")
    property var xd: "0"

    Column {
            spacing: 10
            Button{
                text : "Call C++ Method"
                onClicked: {
                    BWorker.regularMethod()
                    BWorker.cppSlot()
                }
            }
            Rectangle {
                width: textToShowId.implicitWidth + 20
                height: 50
                color: "beige"
                Text{
                    id : textToShowId
                    text : BWorker.regularMethodWithReturn("John", 25)
                }
            }

    }

    Other{

    }

    Button {
        onClicked:
            text = BWorker.getNumber(6)
        id: button
        x: 25
        y: 100
        text: qsTr(xd)
    }



}
