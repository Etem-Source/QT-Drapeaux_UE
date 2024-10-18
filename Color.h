#ifndef COLOR_H
#define COLOR_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Color : public QWidget
{
    Q_OBJECT

    public:
    Color(QWidget *parent = nullptr);
    Color(QString couleur);
    ~Color();

    private:
    // Ui::Widget *ui;
};
#endif // COLOR_H
