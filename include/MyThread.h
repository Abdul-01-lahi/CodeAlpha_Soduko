#include "QThread"

class MyThread :
    public QThread
{
    Q_OBJECT

public: 
    explicit MyThread(QObject* parent = 0);
    void run();
    bool isPresentInCol(int col, int num);
    bool isPresentInRow(int col, int num);
    bool isPresentInBox(int boxStartRow, int boxStartCol, int num);
    bool findEmptyPlace(int& row, int& col);
    bool isValidPlace(int row, int col, int num);



signals:
    void BoardChanged();

};

