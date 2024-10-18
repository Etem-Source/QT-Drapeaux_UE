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

    // Ajout des deux layouts horizontaux au layout principal
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);

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

    QWidget *widget = new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);
}

void MainWindow::Drapeau_ALLEMAGNE() // B1
{
    Drapeau *D = new Drapeau("Black", "Red", "Gold", "Horizontal", "Allemagne");
}

void MainWindow::Drapeau_AUTRICHE() // B2
{
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Autriche");
}

void MainWindow::Drapeau_BELGIQUE() // B3
{
    Drapeau *D = new Drapeau("Black", "Gold", "Red", "Horizontal", "Belgique");
}

void MainWindow::Drapeau_BULGARIE() // B4
{
    Drapeau *D = new Drapeau("White", "Green", "Red", "Horizontal", "Bulgarie");
}

void MainWindow::Drapeau_ESTONIE() // B5
{
    Drapeau *D = new Drapeau("Blue", "Black", "White", "Horizontal", "Estonie");
}

void MainWindow::Drapeau_FRANCE() // B6
{
    Drapeau *D = new Drapeau("Blue", "White", "Red", "Vertical", "France");
}

void MainWindow::Drapeau_HONGRIE() // B7
{
    Drapeau *D = new Drapeau("Red", "White", "Green", "Horizontal", "Hongrie");
}


void MainWindow::Drapeau_IRLANDE() // B8
{
    Drapeau *D = new Drapeau("Green", "White", "Orange", "Vertical", "Irlande");
}

void MainWindow::Drapeau_ITALIE() // B9
{
    Drapeau *D = new Drapeau("Green", "White", "Red", "Vertical", "Italie");
}

void MainWindow::Drapeau_LETTONIE() // B10
{
    Drapeau *D = new Drapeau("Red", "White", "Red", "Horizontal", "Lettonie");
}

void MainWindow::Drapeau_LITUANIE() // B11
{
    Drapeau *D = new Drapeau("Gold", "Green", "Red", "Horizontal", "Lituanie");
}

void MainWindow::Drapeau_LUXEMBOURG() // B12
{
    Drapeau *D = new Drapeau("Red", "White", "LightBlue", "Horizontal", "Luxembourg");
}

void MainWindow::Drapeau_PAYS_BAS() // B13
{
    Drapeau *D = new Drapeau("DarkRed", "White", "DarkBlue", "Horizontal", "Pays-Bas");
}

void MainWindow::Drapeau_ROUMANIE() // B14
{
    Drapeau *D = new Drapeau("DarkBlue", "Gold", "Red", "Vertical", "Roumanie");
}

void MainWindow::setBackgroundImage()
{
    QPixmap bg("/home/ciel2024/drapeaux_tricolores_ue_etem/europe.jpeg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation); // Utiliser SmoothTransformation pour un meilleur rendu
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
