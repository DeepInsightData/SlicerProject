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

// Project Logic includes
#include <vtkSlicerProjectLogic.h>

// Project includes
#include "qSlicerProjectModule.h"
#include "qSlicerProjectModuleWidget.h"

//-----------------------------------------------------------------------------
class qSlicerProjectModulePrivate
{
public:
  qSlicerProjectModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerProjectModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerProjectModulePrivate::qSlicerProjectModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerProjectModule methods

//-----------------------------------------------------------------------------
qSlicerProjectModule::qSlicerProjectModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerProjectModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerProjectModule::~qSlicerProjectModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerProjectModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerProjectModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerProjectModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerProjectModule::icon() const
{
  return QIcon(":/Icons/Project.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerProjectModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerProjectModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerProjectModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerProjectModule
::createWidgetRepresentation()
{
  return new qSlicerProjectModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerProjectModule::createLogic()
{
  return vtkSlicerProjectLogic::New();
}
