/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/
#ifndef SCRIBUS150FORMATIMPL_H
#define SCRIBUS150FORMATIMPL_H

#include <QObject>

class QString;

class Scribus150FormatImpl : public QObject
{
	Q_OBJECT
	public:
		Scribus150FormatImpl();
		~Scribus150FormatImpl() {};
		bool run(const QString & target);
};

#endif
