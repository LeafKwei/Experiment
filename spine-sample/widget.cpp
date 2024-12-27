#include "widget.h"
#include "ui_widget.h"
#include "spine/spine.h"
#include "qspine.h"

using namespace spine;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    
    Atlas *atlas = new Atlas("./res/changmen/changmen.atlas", new QSpineTextureLoader());
}

Widget::~Widget()
{
    delete ui;
}
