#pragma once

#include <QObject>
#include <QAbstractTableModel>

class MyModel :
		public QAbstractTableModel
{
	Q_OBJECT
public:
	explicit MyModel(QObject *parent = nullptr);

signals:

	// QAbstractItemModel interface
public:
	virtual int rowCount(const QModelIndex& parent) const override;
	virtual int columnCount(const QModelIndex& parent) const override;
	virtual QVariant data(const QModelIndex& index, int role) const override;
};


inline void run()
{
	MyModel model{};
}
