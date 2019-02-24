/*
     OpenDCP: Builds Digital Cinema Packages
     Copyright (c) 2010-2011 Terrence Meiczinger, All Rights Reserved

     This program is free software: you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtGui/QApplication>
#include "mainwindow.h"
#include "translator.h"

int main(int argc, char *argv[])
{
#ifdef Q_OS_MACX
    if ( QSysInfo::MacintoshVersion > QSysInfo::MV_10_8 )
    {
        QFont::insertSubstitution(".Lucida Grande UI", "Lucida Grande");
    }
#endif
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("OpenDCP");
    QCoreApplication::setOrganizationDomain("opendcp.org");
    QCoreApplication::setApplicationName("OpenDCP");

    Translator t;
    a.installTranslator(t.Qtranslation());

    MainWindow w;
    w.show();

    return a.exec();
}
