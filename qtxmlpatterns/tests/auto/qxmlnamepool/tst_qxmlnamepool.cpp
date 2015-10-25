/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/


#include <QtTest/QtTest>

#include <QtXmlPatterns/QXmlNamePool>
#include <QtXmlPatterns/QXmlName>

/*!
 \class tst_QXmlNamePool
 \internal
 \since 4.4
 \brief Tests class QXmlNamePool.

 */
class tst_QXmlNamePool : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void constCorrectness() const;
    void size() const;
    void assignmentOperator() const;
};

/*!
  Check that functions have the correct const qualification.
 */
void tst_QXmlNamePool::constCorrectness() const
{
    /* No functions are const in the name pool, so do nothing. */
}

void tst_QXmlNamePool::size() const
{
    QVERIFY2(sizeof(QXmlNamePool) == sizeof(void *), "QXmlNamePool should have a d-pointer.");
}

void tst_QXmlNamePool::assignmentOperator() const
{
    // TODO
}

QTEST_MAIN(tst_QXmlNamePool)

#include "tst_qxmlnamepool.moc"

// vim: et:ts=4:sw=4:sts=4