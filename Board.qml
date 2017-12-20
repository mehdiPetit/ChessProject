import QtQuick 2.0

Rectangle {

    visible: true
    width: 320
    height: 320
    color: "#3F1900"
    anchors.centerIn: parent

        Repeater{
            model: 8
            Rectangle {

                visible: true
                width: 40
                height: 40
                x:index*40
                y:(index%2==0)?0:40
                color: "#AAAAAA"
            }

    }
        Repeater{
            model: 8
            Rectangle {

                visible: true
                width: 40
                height: 40
                x:index*40
                y:(index%2==0)?80:120
                color: "#AAAAAA"
            }

    }
        Repeater{
            model: 8
            Rectangle {

                visible: true
                width: 40
                height: 40
                x:index*40
                y:(index%2==0)?160:200
                color: "#AAAAAA"
            }

    }
        Repeater{
            model: 8
            Rectangle {

                visible: true
                width: 40
                height: 40
                x:index*40
                y:(index%2==0)?240:280
                color: "#AAAAAA"
            }

    }



}
