/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerProjectModuleWidget_h
#define __qSlicerProjectModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerProjectModuleExport.h"

class qSlicerProjectModuleWidgetPrivate;
class vtkMRMLNode;

class Q_SLICER_QTMODULES_PROJECT_EXPORT qSlicerProjectModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerProjectModuleWidget(QWidget *parent=0);
  virtual ~qSlicerProjectModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerProjectModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerProjectModuleWidget);
  Q_DISABLE_COPY(qSlicerProjectModuleWidget);
};

#endif
