/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

//  Widgets includes
#include "qSlicerProjectWidget.h"
#include "ui_qSlicerProjectWidget.h"

//-----------------------------------------------------------------------------
class qSlicerProjectWidgetPrivate
  : public Ui_qSlicerProjectWidget
{
  Q_DECLARE_PUBLIC(qSlicerProjectWidget);
protected:
  qSlicerProjectWidget* const q_ptr;

public:
  qSlicerProjectWidgetPrivate(
    qSlicerProjectWidget& object);
  virtual void setupUi(qSlicerProjectWidget*);
};

// --------------------------------------------------------------------------
qSlicerProjectWidgetPrivate
::qSlicerProjectWidgetPrivate(
  qSlicerProjectWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerProjectWidgetPrivate
::setupUi(qSlicerProjectWidget* widget)
{
  this->Ui_qSlicerProjectWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerProjectWidget methods

//-----------------------------------------------------------------------------
qSlicerProjectWidget
::qSlicerProjectWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerProjectWidgetPrivate(*this) )
{
  Q_D(qSlicerProjectWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerProjectWidget
::~qSlicerProjectWidget()
{
}
