/*
 * Copyright (C) 2007-2013 Dyson Technology Ltd, all rights reserved.
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
 */

#ifndef TARGETCOLLECTIONTOOL_H
#define TARGETCOLLECTIONTOOL_H

#include "CollectionToolWidget.h"

#include <QWidget>

class TargetCollectionTool : public CollectionToolWidget
{
    Q_OBJECT

public:
    TargetCollectionTool( QWidget* parent, MainWindow& mainWindow );
    ~TargetCollectionTool();

    virtual const QString Name() const;

private:
    virtual const QString GetSubSchemaDefaultFileName() const;

    static const WbSchema CreateCollectionSchema();
    static const WbSchema CreateElementSchema();
};

#endif // TARGETCOLLECTIONTOOL_H
