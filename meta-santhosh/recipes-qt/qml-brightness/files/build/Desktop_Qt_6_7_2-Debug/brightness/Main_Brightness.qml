import QtQuick
import QtQuick.Controls
import QtQuick.Window
import QtQuick 2.0
import QtCore

Window {
    width: 640
    height: 480
    visible: true
    // title: qsTr("Brightness App")
    flags: Qt.ToolTip | Qt.FramelessWindowHint | Qt.WA_TranslucentBackground
    color: "transparent"

    Settings {
        id: brightnessSettings
        property real brightness: 0.0
    }

    Rectangle {
        id: brightnessOverlay
        anchors.fill: parent
        color: "black"
        opacity: brightnessSettings.brightness
    }

    Column {
        anchors.centerIn: parent

        Button {
            text: "-"
            font.pixelSize: 25
            onClicked: {
                if (brightnessSettings.brightness < 0.5) {
                    brightnessSettings.brightness += 0.05
                }
            }
        }

        Button {
            text: "+"
            font.pixelSize: 25
            onClicked: {
                if (brightnessSettings.brightness > 0) {
                    brightnessSettings.brightness -= 0.05
                }
            }
        }
    }
}
