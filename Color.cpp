#include "Color.h"
#include <QPalette>
#include <QString>

// Constructeur par défaut
Color::Color(QWidget *parent)
    : QWidget(parent)
{
}

// Constructeur avec couleur en paramètre
Color::Color(QString couleur)
{
    setGeometry(0, 0, 100, 100);
    this->setAutoFillBackground(true);

    QPalette myPalette = palette();
    myPalette.setColor(QPalette::Window, QColor(couleur));
    setPalette(myPalette);
}

Color::~Color()
{
}
