import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 480
    height: 480
    title: qsTr("Hello World")

    Board{
        id: toto
        anchors.centerIn: parent
    }
}
