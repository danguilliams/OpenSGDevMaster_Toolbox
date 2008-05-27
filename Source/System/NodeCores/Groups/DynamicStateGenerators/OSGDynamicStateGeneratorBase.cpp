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
 **     class DynamicStateGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDYNAMICSTATEGENERATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFrameBufferObject.h> // RenderTarget Class

#include "OSGDynamicStateGeneratorBase.h"
#include "OSGDynamicStateGenerator.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DynamicStateGenerator
    Base for dynamic materials like dynamic cube env maps
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FrameBufferObject * DynamicStateGeneratorBase::_sfRenderTarget
    The FBO to target for rendering this subtree.
*/


void DynamicStateGeneratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    Inherited::classDescInserter(oType);


    pDesc = new SFUnrecFrameBufferObjectPtr::Description(
        SFUnrecFrameBufferObjectPtr::getClassType(),
        "renderTarget",
        "The FBO to target for rendering this subtree.\n",
        RenderTargetFieldId, RenderTargetFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&DynamicStateGeneratorBase::editHandleRenderTarget),
        static_cast<FieldGetMethodSig >(&DynamicStateGeneratorBase::getHandleRenderTarget));

    oType.addInitialDesc(pDesc);
}


DynamicStateGeneratorBase::TypeObject DynamicStateGeneratorBase::_type(
    DynamicStateGeneratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DynamicStateGeneratorBase::createEmptyLocal),
    DynamicStateGenerator::initMethod,
    DynamicStateGenerator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DynamicStateGeneratorBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"DynamicStateGenerator\"\n"
    "        parent=\"ChunkOverrideGroup\"\n"
    "        mixinparent=\"DynamicStateGeneratorParent\"\n"
    "        library=\"Group\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Base for dynamic materials like dynamic cube env maps\n"
    "        <Field\n"
    "                name=\"renderTarget\"\n"
    "                type=\"FrameBufferObjectPtr\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                defaultValue=\"NULL\"\n"
    "                access=\"protected\"\n"
    "        >\n"
    "        The FBO to target for rendering this subtree.\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Base for dynamic materials like dynamic cube env maps\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DynamicStateGeneratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &DynamicStateGeneratorBase::getType(void) const
{
    return _type;
}

UInt32 DynamicStateGeneratorBase::getContainerSize(void) const
{
    return sizeof(DynamicStateGenerator);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DynamicStateGenerator::_sfRenderTarget field.
const SFUnrecFrameBufferObjectPtr *DynamicStateGeneratorBase::getSFRenderTarget(void) const
{
    return &_sfRenderTarget;
}

SFUnrecFrameBufferObjectPtr *DynamicStateGeneratorBase::editSFRenderTarget   (void)
{
    editSField(RenderTargetFieldMask);

    return &_sfRenderTarget;
}





/*------------------------------ access -----------------------------------*/

UInt32 DynamicStateGeneratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        returnValue += _sfRenderTarget.getBinSize();
    }

    return returnValue;
}

void DynamicStateGeneratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyToBin(pMem);
    }
}

void DynamicStateGeneratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
    {
        _sfRenderTarget.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DynamicStateGeneratorTransitPtr DynamicStateGeneratorBase::create(void)
{
    DynamicStateGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DynamicStateGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DynamicStateGeneratorTransitPtr DynamicStateGeneratorBase::createLocal(BitVector bFlags)
{
    DynamicStateGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DynamicStateGenerator>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
DynamicStateGenerator *DynamicStateGeneratorBase::createEmpty(void)
{
    DynamicStateGenerator *returnValue;

    newPtr<DynamicStateGenerator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

DynamicStateGenerator *DynamicStateGeneratorBase::createEmptyLocal(BitVector bFlags)
{
    DynamicStateGenerator *returnValue;

    newPtr<DynamicStateGenerator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DynamicStateGeneratorBase::shallowCopy(void) const
{
    DynamicStateGenerator *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const DynamicStateGenerator *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr DynamicStateGeneratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DynamicStateGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DynamicStateGenerator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

DynamicStateGeneratorBase::DynamicStateGeneratorBase(void) :
    Inherited(),
    _sfRenderTarget           (NULL)
{
}

DynamicStateGeneratorBase::DynamicStateGeneratorBase(const DynamicStateGeneratorBase &source) :
    Inherited(source),
    _sfRenderTarget           (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

DynamicStateGeneratorBase::~DynamicStateGeneratorBase(void)
{
}

void DynamicStateGeneratorBase::onCreate(const DynamicStateGenerator *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DynamicStateGenerator *pThis = static_cast<DynamicStateGenerator *>(this);

        pThis->setRenderTarget(source->getRenderTarget());
    }
}

GetFieldHandlePtr DynamicStateGeneratorBase::getHandleRenderTarget    (void) const
{
    SFUnrecFrameBufferObjectPtr::GetHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::GetHandle(
             &_sfRenderTarget, 
             this->getType().getFieldDesc(RenderTargetFieldId)));

    return returnValue;
}

EditFieldHandlePtr DynamicStateGeneratorBase::editHandleRenderTarget   (void)
{
    SFUnrecFrameBufferObjectPtr::EditHandlePtr returnValue(
        new  SFUnrecFrameBufferObjectPtr::EditHandle(
             &_sfRenderTarget, 
             this->getType().getFieldDesc(RenderTargetFieldId)));

    returnValue->setSetMethod(boost::bind(&DynamicStateGenerator::setRenderTarget, 
                                          static_cast<DynamicStateGenerator *>(this), _1));

    editSField(RenderTargetFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DynamicStateGeneratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<DynamicStateGeneratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DynamicStateGeneratorBase::createAspectCopy(void) const
{
    DynamicStateGenerator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DynamicStateGenerator *>(this));

    return returnValue;
}
#endif

void DynamicStateGeneratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DynamicStateGenerator *>(this)->setRenderTarget(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DynamicStateGenerator *>::_type("DynamicStateGeneratorPtr", "ChunkOverrideGroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DynamicStateGenerator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           DynamicStateGenerator *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           DynamicStateGenerator *, 
                           0);

OSG_END_NAMESPACE
