#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QPalette>
#include <QBrush>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores UE");
    resize(700, 400);

    setBackgroundImage();

    // Création des deux layouts horizontaux
    QHBoxLayout *Hlayout1 = new QHBoxLayout();
    QHBoxLayout *Hlayout2 = new QHBoxLayout();
    QHBoxLayout *Hlayout3 = new QHBoxLayout();

    // Création du layout principal (Pagelayout)
    QVBoxLayout *Pagelayout = new QVBoxLayout();

    // Ajout des boutons au premier layout (7 widgets)
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);

    // Ajout des boutons au second layout (7 widgets)
    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);

    Hlayout3->addWidget(B15);
    Hlayout3->addWidget(B16);
    Hlayout3->addWidget(B17);
    Hlayout3->addWidget(B18);
    Hlayout3->addWidget(B19);
    Hlayout3->addWidget(B20);
    Hlayout3->addWidget(B21);

    // Ajout des deux layouts horizontaux au layout principal
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    Pagelayout->addLayout(Hlayout3);

    // Connexion des boutons aux slots correspondants
    connect(B1, SIGNAL(clicked()), this, SLOT(Drapeau_ALLEMAGNE())); // Allemagne
    connect(B2, SIGNAL(clicked()), this, SLOT(Drapeau_AUTRICHE())); // Autriche
    connect(B3, SIGNAL(clicked()), this, SLOT(Drapeau_BELGIQUE())); // Belgique
    connect(B4, SIGNAL(clicked()), this, SLOT(Drapeau_BULGARIE())); // Bulgarie
    connect(B5, SIGNAL(clicked()), this, SLOT(Drapeau_ESTONIE())); // Estonie
    connect(B6, SIGNAL(clicked()), this, SLOT(Drapeau_FRANCE())); // France
    connect(B7, SIGNAL(clicked()), this, SLOT(Drapeau_HONGRIE())); // Hongrie

    connect(B8, SIGNAL(clicked()), this, SLOT(Drapeau_IRLANDE())); // Irlande
    connect(B9, SIGNAL(clicked()), this, SLOT(Drapeau_ITALIE())); // Italie
    connect(B10, SIGNAL(clicked()), this, SLOT(Drapeau_LETTONIE())); // Lettonie
    connect(B11, SIGNAL(clicked()), this, SLOT(Drapeau_LITUANIE())); // Lituanie
    connect(B12, SIGNAL(clicked()), this, SLOT(Drapeau_LUXEMBOURG())); // Luxembourg
    connect(B13, SIGNAL(clicked()), this, SLOT(Drapeau_PAYS_BAS())); // Pays-bas
    connect(B14, SIGNAL(clicked()), this, SLOT(Drapeau_ROUMANIE())); // Roumanie

    connect(B15, SIGNAL(clicked()), this, SLOT(Drapeau_MALTE())); // Malte
    connect(B16, SIGNAL(clicked()), this, SLOT(Drapeau_CHYPRE())); // Chypre
    connect(B17, SIGNAL(clicked()), this, SLOT(Drapeau_DANEMARK())); // Danemark
    connect(B18, SIGNAL(clicked()), this, SLOT(Drapeau_FINLANDE())); // Finlande
    connect(B19, SIGNAL(clicked()), this, SLOT(Drapeau_GRECE())); // Grèce
    connect(B20, SIGNAL(clicked()), this, SLOT(Drapeau_SLOVENIE())); // Slovénie
    connect(B21, SIGNAL(clicked()), this, SLOT(Drapeau_PORTUGAL())); // Portugal

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}

void MainWindow::Drapeau_ALLEMAGNE() // B1
{
    Drapeau *D = new Drapeau("Black", "Red", "Gold", "Horizontal", "Allemagne");
    delete D;
}

void MainWindow::Drapeau_AUTRICHE() // B2
{
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Autriche");
    delete D;
}

void MainWindow::Drapeau_BELGIQUE() // B3
{
    Drapeau *D = new Drapeau("Black", "Gold", "Red", "Horizontal", "Belgique");
    delete D;
}

void MainWindow::Drapeau_BULGARIE() // B4
{
    Drapeau *D = new Drapeau("White", "Green", "Red", "Horizontal", "Bulgarie");
    delete D;
}

void MainWindow::Drapeau_ESTONIE() // B5
{
    Drapeau *D = new Drapeau("Blue", "Black", "White", "Horizontal", "Estonie");
    delete D;
}

void MainWindow::Drapeau_FRANCE() // B6
{
    Drapeau *D = new Drapeau("Blue", "White", "Red", "Vertical", "France");
    delete D;
}

void MainWindow::Drapeau_HONGRIE() // B7
{
    Drapeau *D = new Drapeau("Red", "White", "Green", "Horizontal", "Hongrie");
    delete D;
}


void MainWindow::Drapeau_IRLANDE() // B8
{
    Drapeau *D = new Drapeau("Green", "White", "Orange", "Vertical", "Irlande");
    delete D;
}

void MainWindow::Drapeau_ITALIE() // B9
{
    Drapeau *D = new Drapeau("Green", "White", "Red", "Vertical", "Italie");
    delete D;
}

void MainWindow::Drapeau_LETTONIE() // B10
{
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Lettonie");
    delete D;
}

void MainWindow::Drapeau_LITUANIE() // B11
{
    Drapeau *D = new Drapeau("Gold", "Green", "Red", "Horizontal", "Lituanie");
    delete D;
}

void MainWindow::Drapeau_LUXEMBOURG() // B12
{
    Drapeau *D = new Drapeau("Red", "White", "LightBlue", "Horizontal", "Luxembourg");
    delete D;
}

void MainWindow::Drapeau_PAYS_BAS() // B13
{
    Drapeau *D = new Drapeau("DarkRed", "White", "DarkBlue", "Horizontal", "Pays-Bas");
    delete D;
}

void MainWindow::Drapeau_ROUMANIE() // B14
{
    Drapeau *D = new Drapeau("DarkBlue", "Gold", "Red", "Vertical", "Roumanie");
    delete D;
}

void MainWindow::Drapeau_MALTE() // B15
{
    QPixmap malte("/home/ciel2024/drapeaux_tricolores_ue_etem/malte.png");
    malte = malte.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(malte));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Malte");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_CHYPRE() // B16
{
    QPixmap chypre("/home/ciel2024/drapeaux_tricolores_ue_etem/chypre.png");
    chypre = chypre.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(chypre));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 450);
    widget->setWindowTitle("Chypre");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_DANEMARK() // B17
{
    QPixmap danemark("/home/ciel2024/drapeaux_tricolores_ue_etem/danemark.png");
    danemark = danemark.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(danemark));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Danemark");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_FINLANDE() // B18
{
    QPixmap finlande("/home/ciel2024/drapeaux_tricolores_ue_etem/finlande.png");
    finlande = finlande.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(finlande));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Finlande");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_GRECE() // B19
{
    QPixmap grece("/home/ciel2024/drapeaux_tricolores_ue_etem/grece.png");
    grece = grece.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(grece));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Grece");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_SLOVENIE() // B20
{
    QPixmap slovenie("/home/ciel2024/drapeaux_tricolores_ue_etem/slovenie.png");
    slovenie = slovenie.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(slovenie));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Slovenie");
    widget->setPalette(palette);
    widget->show();
}

void MainWindow::Drapeau_PORTUGAL() // B21
{
    QPixmap portugal("/home/ciel2024/drapeaux_tricolores_ue_etem/portugal.png");
    portugal = portugal.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(portugal));


    QWidget *widget = new QWidget;
    widget->setFixedSize(700, 350);
    widget->setWindowTitle("Portugal");
    widget->setPalette(palette);
    widget->show();
}



void MainWindow::setBackgroundImage()
{
    QPixmap bg("/home/ciel2024/drapeaux_tricolores_ue_etem/europe.jpeg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(bg));
    this->setPalette(palette);
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event); // Appeler la méthode de la classe parente
    setBackgroundImage(); // Recharger l'image en arrière-plan à chaque redimensionnement
}



MainWindow::~MainWindow()
{
    delete ui;
}
