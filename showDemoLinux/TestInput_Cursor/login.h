#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "inputmethod.h"

class QLabel;
class QLineEdit;
class QDialogButtonBox;

class QLogin : public QDialog
{
    Q_OBJECT

public:
    QLogin();
    ~QLogin();

public:
    QLabel *managerLabel;
    QLabel *passwdLabel;

	static   QLineEdit *managerEdit;
    QTextEdit *passwdEdit;

    QPushButton *okButton;
    QPushButton *cancelButton;
    QDialogButtonBox *buttonBox;

signals:
    void Authorize();

private slots:
    void login();
    void cancel();
    void createImConnect(QString ObjName);

};

#endif // LOGIN_H
