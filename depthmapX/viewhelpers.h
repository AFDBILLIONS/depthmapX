// Copyright (C) 2017 Christian Sailer

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.


#ifndef DEPTHMAPX_VIEWHELPERS_H
#define DEPTHMAPX_VIEWHELPERS_H

#include <QPoint>
#include "genlib/paftl.h"
#include "genlib/p2dpoly.h"

namespace ViewHelpers
{
    Point2f calculateCenter(QPoint& point, const QPoint &oldCentre, double factor);
    pstring getCurrentDate();
}


#endif // VIEWHELPERS_H
