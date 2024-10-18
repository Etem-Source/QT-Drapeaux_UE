#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
#include "Drapeau.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;

        QPushButton *B1 = new QPushButton("ALLEMAGNE");
        QPushButton *B2 = new QPushButton("AUTRICHE");
        QPushButton *B3 = new QPushButton("BELGIQUE");
        QPushButton *B4 = new QPushButton("BULGARIE");
        QPushButton *B5 = new QPushButton("ESTONIE");
        QPushButton *B6 = new QPushButton("FRANCE");
        QPushButton *B7 = new QPushButton("HONGRIE");

        QPushButton *B8 = new QPushButton("IRLANDE");
        QPushButton *B9 = new QPushButton("ITALIE");
        QPushButton *B10 = new QPushButton("LETTONIE");
        QPushButton *B11 = new QPushButton("LITUANIE");
        QPushButton *B12 = new QPushButton("LUXEMBOURG");
        QPushButton *B13 = new QPushButton("PAYS-BAS");
        QPushButton *B14 = new QPushButton("ROUMANIE");

        QPushButton *B15 = new QPushButton("Malte");
        QPushButton *B16 = new QPushButton("Chypre");
        QPushButton *B17 = new QPushButton("Danemark");
        QPushButton *B18 = new QPushButton("Finlande");
        QPushButton *B19 = new QPushButton("Grece");
        QPushButton *B20 = new QPushButton("Slovenie");
        QPushButton *B21 = new QPushButton("Portugal");

    protected:
        void resizeEvent(QResizeEvent *event) override; // Déclaration de la méthode resizeEvent
        void setBackgroundImage(); // Déclaration de la méthode setBackgroundImage

    public slots:
        void Drapeau_ALLEMAGNE();
        void Drapeau_AUTRICHE();
        void Drapeau_BELGIQUE();
        void Drapeau_BULGARIE();
        void Drapeau_ESTONIE();
        void Drapeau_FRANCE();
        void Drapeau_HONGRIE();

        void Drapeau_IRLANDE();
        void Drapeau_ITALIE();
        void Drapeau_LETTONIE();
        void Drapeau_LITUANIE();
        void Drapeau_LUXEMBOURG();
        void Drapeau_PAYS_BAS();
        void Drapeau_ROUMANIE();

        void Drapeau_MALTE();
        void Drapeau_CHYPRE();
        void Drapeau_DANEMARK();
        void Drapeau_FINLANDE();
        void Drapeau_GRECE();
        void Drapeau_SLOVENIE();
        void Drapeau_PORTUGAL();

};

#endif // MAINWINDOW_H
