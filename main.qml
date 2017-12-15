import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }

        Rectangle {
            id: rectangle
            x: 98
            y: 113
            width: 109
            height: 97
            color: "#120000"
            border.color: "#000000"
        }

        Rectangle {
            id: rectangle1
            x: 220
            y: 132
            width: 200
            height: 200
            color: "#cd1c1c"
        }
    }
}
