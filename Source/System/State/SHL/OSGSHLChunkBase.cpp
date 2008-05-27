/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class SHLChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHLCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // ProgramParameterNames default header


#include "OSGSHLChunkBase.h"
#include "OSGSHLChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SHLChunk
    This chunk provides support for GLSL.  It provides a wrapper for setting vertex
    and fragment programs.  Because it is derived from OSG::ShaderParameter it also
    allows setting uniform parameters for the shaders.

    The primary way to use this class is to:
    <ul>
    <li>set/getVertexProgram</li>
    <li>set/getFragmentProgram</li>
    <li>setUniform</li>
    </ul>

    To help with OpenSG application development this chunk provides support for
    derived uniform parameters.  The uniform parameters all start with the
    characters "OSG" and are derived from the internal state of OpenSG in some way.
    It is possible for users to make use of this system to add their own derived
    "OSG" parameters using a user callback.  (see addParameterCallback)

    To use these parameters, simply call setUniform() with the name of the parameter
    and set it to some default value of the correct type.  After that point OpenSG
    will ensure that the parameter is automatically updated each frame.

    The derived parameters supported by default are:
    <dl>
    <dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>
    <dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>
    <dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>
    <dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>
    <dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>
    <dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>
    <dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>
    <dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>
    </dl>
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            SHLChunkBase::_sfCgFrontEnd
    
*/

/*! \var bool            SHLChunkBase::_sfPointSize
    Flag to indicate whether the shader can change the point size.
*/

/*! \var GLenum          SHLChunkBase::_mfProgramParameterNames
    
*/

/*! \var UInt32          SHLChunkBase::_mfProgramParameterValues
    
*/

/*! \var UInt32          SHLChunkBase::_sfGLId
    
*/


void SHLChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "cgFrontEnd",
        "",
        CgFrontEndFieldId, CgFrontEndFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SHLChunkBase::editHandleCgFrontEnd),
        static_cast<FieldGetMethodSig >(&SHLChunkBase::getHandleCgFrontEnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "pointSize",
        "Flag to indicate whether the shader can change the point size.\n",
        PointSizeFieldId, PointSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SHLChunkBase::editHandlePointSize),
        static_cast<FieldGetMethodSig >(&SHLChunkBase::getHandlePointSize));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(),
        "programParameterNames",
        "",
        ProgramParameterNamesFieldId, ProgramParameterNamesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SHLChunkBase::editHandleProgramParameterNames),
        static_cast<FieldGetMethodSig >(&SHLChunkBase::getHandleProgramParameterNames));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "programParameterValues",
        "",
        ProgramParameterValuesFieldId, ProgramParameterValuesFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&SHLChunkBase::editHandleProgramParameterValues),
        static_cast<FieldGetMethodSig >(&SHLChunkBase::getHandleProgramParameterValues));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&SHLChunkBase::editHandleGLId),
        static_cast<FieldGetMethodSig >(&SHLChunkBase::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


SHLChunkBase::TypeObject SHLChunkBase::_type(
    SHLChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SHLChunkBase::createEmptyLocal),
    SHLChunk::initMethod,
    SHLChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SHLChunkBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SHLChunk\"\n"
    "\tparent=\"ShaderChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "><![CDATA[\n"
    "This chunk provides support for GLSL.  It provides a wrapper for setting vertex\n"
    "and fragment programs.  Because it is derived from OSG::ShaderParameter it also\n"
    "allows setting uniform parameters for the shaders.\n"
    "\n"
    "The primary way to use this class is to:\n"
    "<ul>\n"
    "    <li>set/getVertexProgram</li>\n"
    "    <li>set/getFragmentProgram</li>\n"
    "    <li>setUniform</li>\n"
    "</ul>\n"
    "\n"
    "To help with OpenSG application development this chunk provides support for\n"
    "derived uniform parameters.  The uniform parameters all start with the\n"
    "characters \"OSG\" and are derived from the internal state of OpenSG in some way.\n"
    "It is possible for users to make use of this system to add their own derived\n"
    "\"OSG\" parameters using a user callback.  (see addParameterCallback)\n"
    "\n"
    "To use these parameters, simply call setUniform() with the name of the parameter\n"
    "and set it to some default value of the correct type.  After that point OpenSG\n"
    "will ensure that the parameter is automatically updated each frame.\n"
    "\n"
    "The derived parameters supported by default are:\n"
    "<dl>\n"
    "    <dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>\n"
    "    <dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>\n"
    "    <dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>\n"
    "    <dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>\n"
    "    <dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>\n"
    "    <dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>\n"
    "    <dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>\n"
    "    <dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>\n"
    "</dl>]]>\n"
    "\t<Field\n"
    "\t\tname=\"cgFrontEnd\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"pointSize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Flag to indicate whether the shader can change the point size.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"programParameterNames\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"programParameterValues\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This chunk provides support for GLSL.  It provides a wrapper for setting vertex\n"
    "and fragment programs.  Because it is derived from OSG::ShaderParameter it also\n"
    "allows setting uniform parameters for the shaders.\n"
    "\n"
    "The primary way to use this class is to:\n"
    "<ul>\n"
    "<li>set/getVertexProgram</li>\n"
    "<li>set/getFragmentProgram</li>\n"
    "<li>setUniform</li>\n"
    "</ul>\n"
    "\n"
    "To help with OpenSG application development this chunk provides support for\n"
    "derived uniform parameters.  The uniform parameters all start with the\n"
    "characters \"OSG\" and are derived from the internal state of OpenSG in some way.\n"
    "It is possible for users to make use of this system to add their own derived\n"
    "\"OSG\" parameters using a user callback.  (see addParameterCallback)\n"
    "\n"
    "To use these parameters, simply call setUniform() with the name of the parameter\n"
    "and set it to some default value of the correct type.  After that point OpenSG\n"
    "will ensure that the parameter is automatically updated each frame.\n"
    "\n"
    "The derived parameters supported by default are:\n"
    "<dl>\n"
    "<dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>\n"
    "<dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>\n"
    "<dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>\n"
    "<dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>\n"
    "<dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>\n"
    "<dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>\n"
    "<dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>\n"
    "<dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>\n"
    "</dl>\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SHLChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &SHLChunkBase::getType(void) const
{
    return _type;
}

UInt32 SHLChunkBase::getContainerSize(void) const
{
    return sizeof(SHLChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *SHLChunkBase::editSFCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return &_sfCgFrontEnd;
}

const SFBool *SHLChunkBase::getSFCgFrontEnd(void) const
{
    return &_sfCgFrontEnd;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *SHLChunkBase::getSFCgFrontEnd     (void)
{
    return this->editSFCgFrontEnd     ();
}
#endif

SFBool *SHLChunkBase::editSFPointSize(void)
{
    editSField(PointSizeFieldMask);

    return &_sfPointSize;
}

const SFBool *SHLChunkBase::getSFPointSize(void) const
{
    return &_sfPointSize;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *SHLChunkBase::getSFPointSize      (void)
{
    return this->editSFPointSize      ();
}
#endif

MFGLenum *SHLChunkBase::editMFProgramParameterNames(void)
{
    editMField(ProgramParameterNamesFieldMask, _mfProgramParameterNames);

    return &_mfProgramParameterNames;
}

const MFGLenum *SHLChunkBase::getMFProgramParameterNames(void) const
{
    return &_mfProgramParameterNames;
}

#ifdef OSG_1_GET_COMPAT
MFGLenum            *SHLChunkBase::getMFProgramParameterNames(void)
{
    return this->editMFProgramParameterNames();
}
#endif

MFUInt32 *SHLChunkBase::editMFProgramParameterValues(void)
{
    editMField(ProgramParameterValuesFieldMask, _mfProgramParameterValues);

    return &_mfProgramParameterValues;
}

const MFUInt32 *SHLChunkBase::getMFProgramParameterValues(void) const
{
    return &_mfProgramParameterValues;
}

#ifdef OSG_1_GET_COMPAT
MFUInt32            *SHLChunkBase::getMFProgramParameterValues(void)
{
    return this->editMFProgramParameterValues();
}
#endif

SFUInt32 *SHLChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *SHLChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *SHLChunkBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SHLChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        returnValue += _sfCgFrontEnd.getBinSize();
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        returnValue += _sfPointSize.getBinSize();
    }
    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        returnValue += _mfProgramParameterNames.getBinSize();
    }
    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        returnValue += _mfProgramParameterValues.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void SHLChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        _mfProgramParameterNames.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        _mfProgramParameterValues.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void SHLChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProgramParameterNamesFieldMask & whichField))
    {
        _mfProgramParameterNames.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProgramParameterValuesFieldMask & whichField))
    {
        _mfProgramParameterValues.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SHLChunkTransitPtr SHLChunkBase::create(void)
{
    SHLChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SHLChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SHLChunkTransitPtr SHLChunkBase::createLocal(BitVector bFlags)
{
    SHLChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SHLChunk>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SHLChunk *SHLChunkBase::createEmpty(void)
{
    SHLChunk *returnValue;

    newPtr<SHLChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

SHLChunk *SHLChunkBase::createEmptyLocal(BitVector bFlags)
{
    SHLChunk *returnValue;

    newPtr<SHLChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SHLChunkBase::shallowCopy(void) const
{
    SHLChunk *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const SHLChunk *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr SHLChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SHLChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SHLChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SHLChunkBase::SHLChunkBase(void) :
    Inherited(),
    _sfCgFrontEnd             (bool(false)),
    _sfPointSize              (bool(false)),
    _mfProgramParameterNames  (),
    _mfProgramParameterValues (),
    _sfGLId                   (UInt32(0))
{
}

SHLChunkBase::SHLChunkBase(const SHLChunkBase &source) :
    Inherited(source),
    _sfCgFrontEnd             (source._sfCgFrontEnd             ),
    _sfPointSize              (source._sfPointSize              ),
    _mfProgramParameterNames  (source._mfProgramParameterNames  ),
    _mfProgramParameterValues (source._mfProgramParameterValues ),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

SHLChunkBase::~SHLChunkBase(void)
{
}


GetFieldHandlePtr SHLChunkBase::getHandleCgFrontEnd      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfCgFrontEnd, 
             this->getType().getFieldDesc(CgFrontEndFieldId)));

    return returnValue;
}

EditFieldHandlePtr SHLChunkBase::editHandleCgFrontEnd     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfCgFrontEnd, 
             this->getType().getFieldDesc(CgFrontEndFieldId)));

    editSField(CgFrontEndFieldMask);

    return returnValue;
}

GetFieldHandlePtr SHLChunkBase::getHandlePointSize       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPointSize, 
             this->getType().getFieldDesc(PointSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr SHLChunkBase::editHandlePointSize      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPointSize, 
             this->getType().getFieldDesc(PointSizeFieldId)));

    editSField(PointSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr SHLChunkBase::getHandleProgramParameterNames (void) const
{
    MFGLenum::GetHandlePtr returnValue(
        new  MFGLenum::GetHandle(
             &_mfProgramParameterNames, 
             this->getType().getFieldDesc(ProgramParameterNamesFieldId)));

    return returnValue;
}

EditFieldHandlePtr SHLChunkBase::editHandleProgramParameterNames(void)
{
    MFGLenum::EditHandlePtr returnValue(
        new  MFGLenum::EditHandle(
             &_mfProgramParameterNames, 
             this->getType().getFieldDesc(ProgramParameterNamesFieldId)));

    editMField(ProgramParameterNamesFieldMask, _mfProgramParameterNames);

    return returnValue;
}

GetFieldHandlePtr SHLChunkBase::getHandleProgramParameterValues (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfProgramParameterValues, 
             this->getType().getFieldDesc(ProgramParameterValuesFieldId)));

    return returnValue;
}

EditFieldHandlePtr SHLChunkBase::editHandleProgramParameterValues(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfProgramParameterValues, 
             this->getType().getFieldDesc(ProgramParameterValuesFieldId)));

    editMField(ProgramParameterValuesFieldMask, _mfProgramParameterValues);

    return returnValue;
}

GetFieldHandlePtr SHLChunkBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr SHLChunkBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SHLChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SHLChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SHLChunkBase::createAspectCopy(void) const
{
    SHLChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SHLChunk *>(this));

    return returnValue;
}
#endif

void SHLChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfProgramParameterNames.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfProgramParameterValues.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SHLChunk *>::_type("SHLChunkPtr", "ShaderChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SHLChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           SHLChunk *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           SHLChunk *, 
                           0);

OSG_END_NAMESPACE
