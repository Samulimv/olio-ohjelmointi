#ifndef FROM2_H
#define FROM2_H

#include <QDialog>

namespace Ui {
class From2;
}

class From2 : public QDialog
{
    Q_OBJECT

public:
    explicit From2(QWidget *parent = nullptr);
    ~From2();
    void setFname(QString fn);
    void setLname(QString ln);


private:
    Ui::From2 *ui;
};

#endif // FROM2_H
