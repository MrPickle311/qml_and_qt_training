#include "MyModel.hpp"

MyModel::MyModel(QObject *parent) : QAbstractTableModel(parent)
{

}


int MyModel::rowCount([[maybe_unused]] const QModelIndex& parent) const
{
	return 2;
}

int MyModel::columnCount([[maybe_unused]]  const QModelIndex& parent) const
{
	return 3;
}

QVariant MyModel::data(const QModelIndex& index, int role) const
{
	if(role == Qt::DisplayRole)
		return QString{"Row%1 ,Row%2"}
		.arg(index.row() + 1)
		.arg(index.column() + 1);
	return QVariant{};
}
