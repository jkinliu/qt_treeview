#include "mymodel.h"

mymodel::mymodel()
{

}

QModelIndex mymodel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();
    return createIndex(row, column);
}

QModelIndex mymodel::parent(const QModelIndex &index) const
{
    return QModelIndex();
}

int mymodel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) return 0;
    return 5;
}

int mymodel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant mymodel::data(const QModelIndex &index, int role) const
{
    return QVariant(10);
}
