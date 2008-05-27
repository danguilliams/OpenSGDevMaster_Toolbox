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
 **     class ParallelComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPARALLELCOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGParallelComposerBase.h"
#include "OSGParallelComposer.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParallelComposer
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            ParallelComposerBase::_sfShort
    
*/

/*! \var bool            ParallelComposerBase::_sfAlpha
    
*/

/*! \var std::string     ParallelComposerBase::_sfPcLibPath
    
*/


void ParallelComposerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "short",
        "",
        ShortFieldId, ShortFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ParallelComposerBase::editHandleShort),
        static_cast<FieldGetMethodSig >(&ParallelComposerBase::getHandleShort));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ParallelComposerBase::editHandleAlpha),
        static_cast<FieldGetMethodSig >(&ParallelComposerBase::getHandleAlpha));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "pcLibPath",
        "",
        PcLibPathFieldId, PcLibPathFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ParallelComposerBase::editHandlePcLibPath),
        static_cast<FieldGetMethodSig >(&ParallelComposerBase::getHandlePcLibPath));

    oType.addInitialDesc(pDesc);
}


ParallelComposerBase::TypeObject ParallelComposerBase::_type(
    ParallelComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParallelComposerBase::createEmptyLocal),
    ParallelComposer::initMethod,
    ParallelComposer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParallelComposerBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParallelComposer\"\n"
    "\tparent=\"ImageComposer\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "    <Field\n"
    "        name=\"short\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"alpha\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"false\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"pcLibPath\"\n"
    "        type=\"std::string\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "\tdefaultValye=\"\"\n"
    "    >\n"
    "    </Field>        \n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParallelComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParallelComposerBase::getType(void) const
{
    return _type;
}

UInt32 ParallelComposerBase::getContainerSize(void) const
{
    return sizeof(ParallelComposer);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ParallelComposerBase::editSFShort(void)
{
    editSField(ShortFieldMask);

    return &_sfShort;
}

const SFBool *ParallelComposerBase::getSFShort(void) const
{
    return &_sfShort;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ParallelComposerBase::getSFShort          (void)
{
    return this->editSFShort          ();
}
#endif

SFBool *ParallelComposerBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *ParallelComposerBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *ParallelComposerBase::getSFAlpha          (void)
{
    return this->editSFAlpha          ();
}
#endif

SFString *ParallelComposerBase::editSFPcLibPath(void)
{
    editSField(PcLibPathFieldMask);

    return &_sfPcLibPath;
}

const SFString *ParallelComposerBase::getSFPcLibPath(void) const
{
    return &_sfPcLibPath;
}

#ifdef OSG_1_GET_COMPAT
SFString            *ParallelComposerBase::getSFPcLibPath      (void)
{
    return this->editSFPcLibPath      ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ParallelComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        returnValue += _sfShort.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }
    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        returnValue += _sfPcLibPath.getBinSize();
    }

    return returnValue;
}

void ParallelComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        _sfPcLibPath.copyToBin(pMem);
    }
}

void ParallelComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
    {
        _sfShort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
    {
        _sfPcLibPath.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ParallelComposerTransitPtr ParallelComposerBase::create(void)
{
    ParallelComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParallelComposer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParallelComposerTransitPtr ParallelComposerBase::createLocal(BitVector bFlags)
{
    ParallelComposerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParallelComposer>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ParallelComposer *ParallelComposerBase::createEmpty(void)
{
    ParallelComposer *returnValue;

    newPtr<ParallelComposer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ParallelComposer *ParallelComposerBase::createEmptyLocal(BitVector bFlags)
{
    ParallelComposer *returnValue;

    newPtr<ParallelComposer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParallelComposerBase::shallowCopy(void) const
{
    ParallelComposer *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ParallelComposer *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ParallelComposerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParallelComposer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParallelComposer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ParallelComposerBase::ParallelComposerBase(void) :
    Inherited(),
    _sfShort                  (bool(true)),
    _sfAlpha                  (bool(false)),
    _sfPcLibPath              ()
{
}

ParallelComposerBase::ParallelComposerBase(const ParallelComposerBase &source) :
    Inherited(source),
    _sfShort                  (source._sfShort                  ),
    _sfAlpha                  (source._sfAlpha                  ),
    _sfPcLibPath              (source._sfPcLibPath              )
{
}


/*-------------------------- destructors ----------------------------------*/

ParallelComposerBase::~ParallelComposerBase(void)
{
}


GetFieldHandlePtr ParallelComposerBase::getHandleShort           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    return returnValue;
}

EditFieldHandlePtr ParallelComposerBase::editHandleShort          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfShort, 
             this->getType().getFieldDesc(ShortFieldId)));

    editSField(ShortFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParallelComposerBase::getHandleAlpha           (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    return returnValue;
}

EditFieldHandlePtr ParallelComposerBase::editHandleAlpha          (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAlpha, 
             this->getType().getFieldDesc(AlphaFieldId)));

    editSField(AlphaFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParallelComposerBase::getHandlePcLibPath       (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfPcLibPath, 
             this->getType().getFieldDesc(PcLibPathFieldId)));

    return returnValue;
}

EditFieldHandlePtr ParallelComposerBase::editHandlePcLibPath      (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfPcLibPath, 
             this->getType().getFieldDesc(PcLibPathFieldId)));

    editSField(PcLibPathFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ParallelComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ParallelComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParallelComposerBase::createAspectCopy(void) const
{
    ParallelComposer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParallelComposer *>(this));

    return returnValue;
}
#endif

void ParallelComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParallelComposer *>::_type("ParallelComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE
