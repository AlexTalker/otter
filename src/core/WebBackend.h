/**************************************************************************
* Otter Browser: Web browser controlled by the user, not vice-versa.
* Copyright (C) 2013 - 2014 Michal Dutkiewicz aka Emdek <michal@emdek.pl>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
**************************************************************************/

#ifndef OTTER_WEBBACKEND_H
#define OTTER_WEBBACKEND_H

#include <QtCore/QObject>
#include <QtCore/QUrl>
#include <QtGui/QIcon>

namespace Otter
{

class ContentsWidget;
class WebWidget;

class WebBackend : public QObject
{
	Q_OBJECT

public:
	explicit WebBackend(QObject *parent = NULL);

	virtual WebWidget* createWidget(bool isPrivate = false, ContentsWidget *parent = NULL) = 0;
	virtual QString getTitle() const = 0;
	virtual QString getDescription() const = 0;
	virtual QString getVersion() const = 0;
	virtual QString getEngineVersion() const = 0;
	virtual QIcon getIconForUrl(const QUrl &url) = 0;
};

}

#endif
