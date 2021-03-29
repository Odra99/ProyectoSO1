#include "entrada_frame.h"

entrada_Frame::entrada_Frame(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant entrada_Frame::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex entrada_Frame::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex entrada_Frame::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int entrada_Frame::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int entrada_Frame::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant entrada_Frame::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
