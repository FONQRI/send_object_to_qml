import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Button{
        anchors.centerIn: parent
        text:"Click to print value from c++"
        onClicked: {
            cpp_object.str_value = "qml value to c++ class";
            cpp_object.print();

        }
    }
}
