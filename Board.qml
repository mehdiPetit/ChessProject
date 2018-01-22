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
        Item{
            width: 40
            height: 40
            property int cordX: 0
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p1_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }

        Item{
            width: 40
            height: 40
            property int cordX: 1
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p2_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 2
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p3_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 3
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p4_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 4
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p5_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 5
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p6_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 6
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p7_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 7
            property int cordY: 1
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p8_black
                source: "qrc:/003-pawn.png"
                anchors.centerIn: parent

            }

        }

        Item{
            width: 40
            height: 40
            property int cordX: 0
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: r1_black
                source: "qrc:/005-rook.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 7
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: r2_black
                source: "qrc:/005-rook.png"
                anchors.centerIn: parent

            }

        }


        Item{
            width: 40
            height: 40
            property int cordX: 1
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k1_black
                source: "qrc:/002-knight.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 6
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k2_black
                source: "qrc:/002-knight.png"
                anchors.centerIn: parent

            }

        }


        Item{
            width: 40
            height: 40
            property int cordX: 2
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: b1_black
                source: "qrc:/006-bishop.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 5
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: b2_black
                source: "qrc:/006-bishop.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 3
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: q_black
                source: "qrc:/001-queen.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 4
            property int cordY: 0
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k_black
                source: "qrc:/004-king.png"
                anchors.centerIn: parent

            }

        }








        Item{
            width: 40
            height: 40
            property int cordX: 0
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p1_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }

        Item{
            width: 40
            height: 40
            property int cordX: 1
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p2_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 2
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p3_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 3
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p4_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 4
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p5_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 5
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p6_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 6
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p7_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 7
            property int cordY: 6
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: p8_white
                source: "qrc:/003-pawn_white.png"
                anchors.centerIn: parent

            }

        }

        Item{
            width: 40
            height: 40
            property int cordX: 0
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: r1_white
                source: "qrc:/005-rook_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 7
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: r2_white
                source: "qrc:/005-rook_white.png"
                anchors.centerIn: parent

            }

        }


        Item{
            width: 40
            height: 40
            property int cordX: 1
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k1_white
                source: "qrc:/002-knight_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 6
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k2_white
                source: "qrc:/002-knight_white.png"
                anchors.centerIn: parent

            }

        }


        Item{
            width: 40
            height: 40
            property int cordX: 2
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: b1_white
                source: "qrc:/006-bishop_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 5
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: b2_white
                source: "qrc:/006-bishop_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 3
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: q_white
                source: "qrc:/001-queen_white.png"
                anchors.centerIn: parent

            }

        }
        Item{
            width: 40
            height: 40
            property int cordX: 4
            property int cordY: 7
            x: 40* cordX
            y: 40* cordY
            MouseArea{
                anchors.centerIn: parent

            }
            Image {
                id: k_white
                source: "qrc:/004-king_white.png"
                anchors.centerIn: parent

            }

        }
}
