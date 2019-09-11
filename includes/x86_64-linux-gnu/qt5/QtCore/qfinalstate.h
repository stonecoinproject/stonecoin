/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QFINALSTATE_H
#define QFINALSTATE_H

#include <QtCore/qabstractstate.h>

QT_BEGIN_NAMESPACE

#ifndef QT_NO_STATEMACHINE

class QFinalStatePrivate;
class Q_CORE_EXPORT QFinalState : public QAbstractState
{
    Q_OBJECT
public:
    QFinalState(QState *parent = Q_NULLPTR);
    ~QFinalState();

protected:
    void onEntry(QEvent *event) Q_DECL_OVERRIDE;
    void onExit(QEvent *event) Q_DECL_OVERRIDE;

    bool event(QEvent *e) Q_DECL_OVERRIDE;

protected:
    explicit QFinalState(QFinalStatePrivate &dd, QState *parent);

private:
    Q_DISABLE_COPY(QFinalState)
    Q_DECLARE_PRIVATE(QFinalState)
};

#endif //QT_NO_STATEMACHINE

QT_END_NAMESPACE

#endif
