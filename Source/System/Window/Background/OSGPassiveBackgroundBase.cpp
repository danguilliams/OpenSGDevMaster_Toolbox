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
 **     class PassiveBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPassiveBackgroundBase.h"
#include "OSGPassiveBackground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PassiveBackground
    \ingroup GrpSystemWindowBackgrounds
 */


PassiveBackgroundBase::TypeObject PassiveBackgroundBase::_type(
    PassiveBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PassiveBackgroundBase::createEmptyLocal),
    PassiveBackground::initMethod,
    PassiveBackground::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PassiveBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that does nothing within the clear call, thus it also has no Fields at all. It is mainly used to stack viewports on top of each other, i.e. it makes it possible to have two viewports on top of each other to generate a single combined image. See \\ref PageSystemWindowBackgroundPassive\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that does nothing within the clear call, thus it also has no Fields at all. It is mainly used to stack viewports on top of each other, i.e. it makes it possible to have two viewports on top of each other to generate a single combined image. See \\ref PageSystemWindowBackgroundPassive\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PassiveBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 PassiveBackgroundBase::getContainerSize(void) const
{
    return sizeof(PassiveBackground);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 PassiveBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PassiveBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
PassiveBackgroundTransitPtr PassiveBackgroundBase::create(void)
{
    PassiveBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PassiveBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PassiveBackgroundTransitPtr PassiveBackgroundBase::createLocal(BitVector bFlags)
{
    PassiveBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PassiveBackground>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
PassiveBackground *PassiveBackgroundBase::createEmpty(void)
{
    PassiveBackground *returnValue;

    newPtr<PassiveBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

PassiveBackground *PassiveBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    PassiveBackground *returnValue;

    newPtr<PassiveBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PassiveBackgroundBase::shallowCopy(void) const
{
    PassiveBackground *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const PassiveBackground *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr PassiveBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PassiveBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PassiveBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PassiveBackgroundBase::PassiveBackgroundBase(void) :
    Inherited()
{
}

PassiveBackgroundBase::PassiveBackgroundBase(const PassiveBackgroundBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

PassiveBackgroundBase::~PassiveBackgroundBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void PassiveBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PassiveBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PassiveBackgroundBase::createAspectCopy(void) const
{
    PassiveBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PassiveBackground *>(this));

    return returnValue;
}
#endif

void PassiveBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PassiveBackground *>::_type("PassiveBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PassiveBackground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           PassiveBackground *, 
                           0);


OSG_END_NAMESPACE
