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
 **     class FatBorderChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGFatBorderChunkBase.h"
#include "OSGFatBorderChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FatBorderChunk
    
 */


FatBorderChunkBase::TypeObject FatBorderChunkBase::_type(
    FatBorderChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FatBorderChunkBase::createEmptyLocal),
    FatBorderChunk::initMethod,
    FatBorderChunk::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"FatBorderChunk\"\n"
    "    parent=\"VertexProgramChunk\"\n"
    "    library=\"Drawable\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FatBorderChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &FatBorderChunkBase::getType(void) const
{
    return _type;
}

UInt32 FatBorderChunkBase::getContainerSize(void) const
{
    return sizeof(FatBorderChunk);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 FatBorderChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FatBorderChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void FatBorderChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
FatBorderChunkTransitPtr FatBorderChunkBase::createLocal(BitVector bFlags)
{
    FatBorderChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FatBorderChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FatBorderChunkTransitPtr FatBorderChunkBase::create(void)
{
    FatBorderChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FatBorderChunk>(tmpPtr);
    }

    return fc;
}

FatBorderChunk *FatBorderChunkBase::createEmptyLocal(BitVector bFlags)
{
    FatBorderChunk *returnValue;

    newPtr<FatBorderChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FatBorderChunk *FatBorderChunkBase::createEmpty(void)
{
    FatBorderChunk *returnValue;

    newPtr<FatBorderChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FatBorderChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FatBorderChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FatBorderChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FatBorderChunkBase::shallowCopy(void) const
{
    FatBorderChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FatBorderChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FatBorderChunkBase::FatBorderChunkBase(void) :
    Inherited()
{
}

FatBorderChunkBase::FatBorderChunkBase(const FatBorderChunkBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

FatBorderChunkBase::~FatBorderChunkBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void FatBorderChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FatBorderChunk *pThis = static_cast<FatBorderChunk *>(this);

    pThis->execSync(static_cast<FatBorderChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FatBorderChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FatBorderChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FatBorderChunk *>(pRefAspect),
                  dynamic_cast<const FatBorderChunk *>(this));

    return returnValue;
}
#endif

void FatBorderChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FatBorderChunk *>::_type("FatBorderChunkPtr", "VertexProgramChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FatBorderChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FatBorderChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FatBorderChunk *,
                           0);

OSG_END_NAMESPACE
