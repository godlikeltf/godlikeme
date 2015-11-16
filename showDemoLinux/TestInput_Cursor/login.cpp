#include <QtGui>
#include "login.h"

QLineEdit* QLogin::managerEdit = NULL;
QLogin::QLogin()
{
 //   im = new InputMethod;
    managerLabel = new QLabel(tr("&Manager:"));
    managerEdit = new QLineEdit;
    managerLabel->setBuddy(managerEdit);

    passwdLabel = new QLabel(tr("&Text:"));
    passwdEdit = new QTextEdit;
    //passwdEdit->setEchoMode(QLineEdit::Password);
    passwdLabel->setBuddy(passwdEdit);

    okButton = new QPushButton(tr("&Login"));
    cancelButton = new QPushButton("&Cancel");

    okButton->setDefault(true);

    buttonBox = new QDialogButtonBox;
    buttonBox->addButton(okButton, QDialogButtonBox::ActionRole);
    buttonBox->addButton(cancelButton, QDialogButtonBox::AcceptRole);

    connect(okButton, SIGNAL(clicked()), this, SLOT(login()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancel()));

    QHBoxLayout *topLayout = new QHBoxLayout;
    topLayout->addWidget(managerLabel);
    topLayout->addWidget(managerEdit);

    QHBoxLayout *midLayout = new QHBoxLayout;
    midLayout->addWidget(passwdLabel);
    midLayout->addWidget(passwdEdit);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(topLayout);
    mainLayout->addLayout(midLayout);
    mainLayout->addWidget(buttonBox);
    mainLayout->setMargin(20);
    setLayout(mainLayout);
    managerEdit->setFocus();

    //managerEdit->installEventFilter(im);
    //passwdEdit->installEventFilter(im);

    managerEdit->setObjectName("managerEdit");
    passwdEdit->setObjectName("passwdEdit");

//    connect(im,SIGNAL(setImObjName(QString)),this,SLOT(createImConnect(QString)));//connect the input method

    QIcon icon;
    icon.addFile(QString::fromUtf8(":/new/main/picture/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
    setWindowIcon(icon);
    setWindowTitle("Login");
}

QLogin::~QLogin()
{
    //qDebug()<<"login close";
 //   delete im;
    delete managerLabel;
    delete managerEdit;
    delete passwdLabel;
    delete passwdEdit;
    delete okButton;
    delete cancelButton;
}

/*
* Name : void createImConnect(QString ObjName)
* Type : slot
* Func : create connect to input method
* In   : Null
* Out  : Null
*/
void QLogin::createImConnect(QString /*ObjName*/)
{
	//disconnect(im->keyboard,SIGNAL(setvalue(QString)),passwdEdit,SLOT(setText(QString)));
	//disconnect(im->keyboard,SIGNAL(setvalue(QString)),managerEdit,SLOT(setText(QString)));

	//if(ObjName=="managerEdit")
	//{
	//	connect(im->keyboard,SIGNAL(setvalue(QString)),managerEdit,SLOT(setText(QString)));
	//}
	//else
	//{

	//	connect(im->keyboard,SIGNAL(setvalue(QString)),passwdEdit,SLOT(setText(QString)));
	//}

}

/*
* Name : void login()
* Type : slot
* Func : login when authorize
* In   : Null
* Out  : Null
*/
void QLogin::login()
{

}


/*
* Name : void cancel()
* Type : slot
* Func : cancel login
* In   : Null
* Out  : Null
*/
void QLogin::cancel()
{
    managerEdit->clear();
    passwdEdit->clear();
    close();
}

