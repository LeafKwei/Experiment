#include "widget.h"
#include "ui_widget.h"
#include "spine/spine.h"
#include "qspine/qspine.h"

using namespace spine;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    
    TextureLoader *loader = new QSpineTextureLoader();
    Atlas *atlas = new Atlas("./res/changmen/changmen.atlas", loader);
}

Widget::~Widget()
{
    delete ui;
}
