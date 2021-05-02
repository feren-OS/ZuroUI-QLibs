/****************************************
 *
 *   INSERT-PROJECT-NAME-HERE - INSERT-GENERIC-NAME-HERE
 *   Copyright (C) 2019 Victor Tran
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * *************************************/
#ifndef TSWITCH_H
#define TSWITCH_H

#include <the-libs_global.h>
#include <QPushButton>

class THELIBSSHARED_EXPORT tSwitch : public QPushButton {
        Q_OBJECT

        Q_PROPERTY(QString OnText READ OnText WRITE setOnText NOTIFY OnTextChanged)
        Q_PROPERTY(QString OffText READ OffText WRITE setOffText NOTIFY OffTextChanged)
        Q_PROPERTY(QIcon OnIcon READ OnIcon WRITE setOnIcon NOTIFY OnIconChanged)
    public:
        explicit tSwitch(QWidget* parent = nullptr);

        QString OnText();
        QString OffText();
        QIcon OnIcon();

        void setChecked(bool checked);

    signals:
        void OnTextChanged(QString OnText);
        void OffTextChanged(QString OffText);
        void OnIconChanged(QString OffText);

    public slots:
        void setOnText(QString text);
        void setOffText(QString text);
        void setOnIcon(QIcon icon);
    private slots:
        void checkChanging(bool checked);

    private:
        void paintEvent(QPaintEvent* event);
        void mousePressEvent(QMouseEvent* event);
        void mouseMoveEvent(QMouseEvent* event);
        void mouseReleaseEvent(QMouseEvent* event);

        QPalette::ColorGroup IsActiveColorRole();
        QSize sizeHint() const;

        QRect innerRect;
        int mouseClickPoint;
        int initialPoint;
        bool mouseMovedLeft = false;

        QString iText = "I";
        QString oText = "O";
        QIcon iIcon;
};
#endif // TSWITCH_H
