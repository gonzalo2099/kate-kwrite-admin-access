/* This file is part of the KDE project
 *
 *  Copyright 2014 Gregor Mi <codestruct@posteo.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef KATE_PROJECT_FILEUTIL_H
#define KATE_PROJECT_FILEUTIL_H

#include <QString>

class FileUtil
{
public:
    /**
     * @Returns the common path of two paths. E.g.
     * path1=/usr/local/bin
     * path2=/usr/bin
     * result=/usr
     *
     * TODO: Extend QUrl with this method and submit patch to QT
     */
    static const QString commonParent(const QString& path1, const QString& path2);
};

#endif

// kate: space-indent on; indent-width 4; replace-tabs on;
