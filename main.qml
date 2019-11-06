import QtQuick 2.12
import ContactBase 1.0

Rectangle {
    id: mainWindow
    color: "skyblue"
    anchors.fill: parent

    ListView {
        anchors.fill: parent
        orientation: Qt.Vertical
        spacing: 5
        model: ContactModel

        delegate: Item {
            height: childrenRect.height
            width: parent.width

            Text {
                id: textItem
                anchors.left: parent.left
                width: parent.width / 3
                height: parent.height

                text: contactName
                leftPadding: 10
                verticalAlignment: Text.AlignVCenter
            }

            Item {
                anchors.left: textItem.right
                anchors.right: parent.right
                anchors.rightMargin: 10
                height: 40

                Loader {
                    anchors.fill: parent
                    sourceComponent: switch (type){
                                     case C_Type.WithPhone : return phoneComponent
                                     case C_Type.WithPhoto : return photoComponent
                                     }
                }
            }

            Component {
                id: photoComponent

                Item {
                    Image {
                        anchors.right: parent.right
                        height: 125
                        width: 125
                        source: photo
                        sourceSize {
                            width: 125
                            height: 125
                        }
                    }
                }
            }

            Component {
                id: phoneComponent

                Text {
                    id: phoneNumberItem
                    text: phone
                    verticalAlignment: Text.AlignVCenter
                    horizontalAlignment: Text.AlignRight
                    width: parent.width
                }
            }
        }
    }
}
