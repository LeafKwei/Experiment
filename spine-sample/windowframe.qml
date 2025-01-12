import QtQuick 2.0
import QtQuick.Controls 2.1

ApplicationWindow{
    visible: true
    width: 1000
    height: 700
    title: qsTr("AzurPet")
    color: "#e8e8e8"
    
    
    Rectangle{
        border.width: 1
        border.color: "red"
        //anchors.fill: X
        color: "#33000000"
    }
    
    DropArea{
        anchors.fill: parent
        onDropped: function(drop){
            console.log(drop.urls[0]);
        }
    }
}