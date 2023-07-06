#pragma once

#include <QFile>
#include <QCoreApplication>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include "ContactItem.h"

class Helper : public QObject
{
	Q_OBJECT;
public:
	static QSharedPointer<Helper> instance();

public Q_SLOTS:
	void AddLine(const contactItemPtr);
	void DownloadLines();
	contactItemPtr ReadLine(const QString&);
	void DeleteLine(const contactItemPtr);
Q_SIGNALS:
	void FileEroor(const QString& error_);
	void ContactAdded(const contactItemPtr new_contact_);
	void LinesUploaded(const contactListPtr contact_list_);
	void LineDeleted(const QString& message_);

private:
	Helper();

	QFile file;
	static QSharedPointer<Helper> helpPtr;

	contactList list{};
	static contactListPtr data;
};

