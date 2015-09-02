#include "mymodel.h"
#include <QColor>

mymodel::mymodel(QObject *parent) : QAbstractItemModel(parent)
{

}

QModelIndex mymodel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column);
}

QModelIndex mymodel::parent(const QModelIndex &index) const
{
    return QModelIndex();
}

int mymodel::rowCount(const QModelIndex &parent) const
{
    if (parent.column() > 0) return 0;
    if (parent.isValid()) return 0;
    return 5;
}

int mymodel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant mymodel::data(const QModelIndex &index, int role) const
{

    if (role == Qt::TextColorRole) return QColor(255,0,0);
    if (role != Qt::DisplayRole) return QVariant();
    return QVariant(index.column() * 10 + index.row());
}
Qt::ItemFlags mymodel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    return Qt::ItemIsEditable | QAbstractItemModel::flags(index);
}
