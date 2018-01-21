import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 480
    height: 480
    title: qsTr("Chess Master !!!!")
    Item
    {
        id: introduction
        anchors.centerIn: parent



        Item
        {
            id: logo
            anchors.centerIn: parent
            opacity: 0
            Image
            {
                anchors.centerIn: parent
                id: image_logo
                source: "qrc:/cavalier.png"
                height: 200
                width: 200

            }
            Text {
                id: name
                x: -145
                width: 290
                height: 59
                text: qsTr("Chess Game")
                font.pointSize: 40
                transformOrigin: Item.Center
                textFormat: Text.PlainText
                anchors.topMargin: 0
                anchors.top: image_logo.bottom

            }



        }
        Item
        {
            id: signature
            anchors.centerIn: parent
            Text {
                opacity: 0
                id: mehdi
                x: -94
                y: 160
                width: 189
                height: 59
                text: qsTr("Mehdi PETIT")
                font.pointSize: 25
                transformOrigin: Item.Center
                textFormat: Text.PlainText
                anchors.topMargin: 0
                anchors.top: image_logo.bottom

            }
            Text {
                id: florent
                opacity: 0
                x: -140
                y: 160
                width: 280
                height: 59
                text: qsTr("Mohamed BLABLA")
                font.pointSize: 25
                transformOrigin: Item.Center
                textFormat: Text.PlainText
                anchors.topMargin: 0
                anchors.top: image_logo.bottom

            }
            Text {
                id: mohamed
                opacity: 0
                x: -120
                y: 160
                width: 240
                height: 59
                text: qsTr("Florent LABOUYRIE")
                font.pointSize: 25
                transformOrigin: Item.Center
                textFormat: Text.PlainText
                anchors.topMargin: 0
                anchors.top: image_logo.bottom

            }



        }

    }

    Board{
        id: board
        opacity: 0
        anchors.centerIn: parent

    }

    SequentialAnimation {
        running: true
        NumberAnimation { target: logo; property: "opacity"; to: 1; duration: 5000 }

        NumberAnimation { target: mehdi; property: "opacity"; to: 1; duration: 1000 }
        NumberAnimation { target: mehdi; property: "opacity"; to: 0; duration: 1000 }

        NumberAnimation { target: mohamed; property: "opacity"; to: 1; duration: 1000 }
        NumberAnimation { target: mohamed; property: "opacity"; to: 0; duration: 1000 }

        NumberAnimation { target: florent; property: "opacity"; to: 1; duration: 1000 }
        NumberAnimation { target: florent; property: "opacity"; to: 0; duration: 1000 }

        NumberAnimation { target: introduction; property: "opacity"; to: 0; duration: 1000 }

        NumberAnimation { target: board; property: "opacity"; to: 1; duration: 1000 }



    }

}
