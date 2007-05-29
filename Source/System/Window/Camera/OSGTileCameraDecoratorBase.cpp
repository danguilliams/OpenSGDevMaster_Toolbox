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
 **     class TileCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETILECAMERADECORATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTileCameraDecoratorBase.h"
#include "OSGTileCameraDecorator.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TileCameraDecorator
    \ingroup GrpSystemWindowCameraDecorators

    The OSG::TileCameraDecorator for selecting only a part of a virtual large
    image, see \ref
    PageSystemWindowCameraDecoratorsTile for a description.

    The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and
    _sfTop Fields. The size of the full image is defined by the _sfFullWidth and
    _sfFullHeight Fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          TileCameraDecoratorBase::_sfLeft
    The left border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfRight
    The right border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfBottom
    The bottom border of the selected tile.
*/

/*! \var Real32          TileCameraDecoratorBase::_sfTop
    The top border of the selected tile.
*/

/*! \var UInt32          TileCameraDecoratorBase::_sfFullWidth
    The width of the full image this is a tile of.
*/

/*! \var UInt32          TileCameraDecoratorBase::_sfFullHeight
    The height of the full image this is a tile of.
*/


void TileCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(TileCameraDecoratorBase::*GetSFLeftF)(void) const;

    GetSFLeftF GetSFLeft = &TileCameraDecoratorBase::getSFLeft;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "left",
        "The left border of the selected tile.\n",
        LeftFieldId, LeftFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFLeft),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLeft));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFLeft));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(TileCameraDecoratorBase::*GetSFRightF)(void) const;

    GetSFRightF GetSFRight = &TileCameraDecoratorBase::getSFRight;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "right",
        "The right border of the selected tile.\n",
        RightFieldId, RightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFRight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRight));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFRight));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(TileCameraDecoratorBase::*GetSFBottomF)(void) const;

    GetSFBottomF GetSFBottom = &TileCameraDecoratorBase::getSFBottom;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bottom",
        "The bottom border of the selected tile.\n",
        BottomFieldId, BottomFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFBottom),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBottom));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFBottom));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(TileCameraDecoratorBase::*GetSFTopF)(void) const;

    GetSFTopF GetSFTop = &TileCameraDecoratorBase::getSFTop;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "top",
        "The top border of the selected tile.\n",
        TopFieldId, TopFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFTop),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTop));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFTop));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(TileCameraDecoratorBase::*GetSFFullWidthF)(void) const;

    GetSFFullWidthF GetSFFullWidth = &TileCameraDecoratorBase::getSFFullWidth;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fullWidth",
        "The width of the full image this is a tile of.\n",
        FullWidthFieldId, FullWidthFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFFullWidth),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFullWidth));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFFullWidth));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_GET_COMPAT
    typedef const SFUInt32 *(TileCameraDecoratorBase::*GetSFFullHeightF)(void) const;

    GetSFFullHeightF GetSFFullHeight = &TileCameraDecoratorBase::getSFFullHeight;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fullHeight",
        "The height of the full image this is a tile of.\n",
        FullHeightFieldId, FullHeightFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TileCameraDecoratorBase::editSFFullHeight),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFullHeight));
#else
        reinterpret_cast<FieldGetMethodSig >(&TileCameraDecoratorBase::getSFFullHeight));
#endif

    oType.addInitialDesc(pDesc);
}


TileCameraDecoratorBase::TypeObject TileCameraDecoratorBase::_type(
    TileCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TileCameraDecoratorBase::createEmpty,
    TileCameraDecorator::initMethod,
    (InitalInsertDescFunc) &TileCameraDecoratorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TileCameraDecorator\"\n"
    "\tparent=\"CameraDecorator\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::TileCameraDecorator for selecting only a part of a virtual large\n"
    "image, see \\ref\n"
    "PageSystemWindowCameraDecoratorsTile for a description.\n"
    "\n"
    "The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The size of the full image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    "\t<Field\n"
    "\t\tname=\"left\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe left border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"right\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe right border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bottom\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe bottom border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"top\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe top border of the selected tile.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fullWidth\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe width of the full image this is a tile of.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fullHeight\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe height of the full image this is a tile of.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::TileCameraDecorator for selecting only a part of a virtual large\n"
    "image, see \\ref\n"
    "PageSystemWindowCameraDecoratorsTile for a description.\n"
    "\n"
    "The borders of the tile are defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The size of the full image is defined by the _sfFullWidth and\n"
    "_sfFullHeight Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TileCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &TileCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 TileCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(TileCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *TileCameraDecoratorBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFReal32 *TileCameraDecoratorBase::getSFLeft(void) const
{
    return &_sfLeft;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *TileCameraDecoratorBase::getSFLeft           (void)
{
    return this->editSFLeft           ();
}
#endif

SFReal32 *TileCameraDecoratorBase::editSFRight(void)
{
    editSField(RightFieldMask);

    return &_sfRight;
}

const SFReal32 *TileCameraDecoratorBase::getSFRight(void) const
{
    return &_sfRight;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *TileCameraDecoratorBase::getSFRight          (void)
{
    return this->editSFRight          ();
}
#endif

SFReal32 *TileCameraDecoratorBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFReal32 *TileCameraDecoratorBase::getSFBottom(void) const
{
    return &_sfBottom;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *TileCameraDecoratorBase::getSFBottom         (void)
{
    return this->editSFBottom         ();
}
#endif

SFReal32 *TileCameraDecoratorBase::editSFTop(void)
{
    editSField(TopFieldMask);

    return &_sfTop;
}

const SFReal32 *TileCameraDecoratorBase::getSFTop(void) const
{
    return &_sfTop;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *TileCameraDecoratorBase::getSFTop            (void)
{
    return this->editSFTop            ();
}
#endif

SFUInt32 *TileCameraDecoratorBase::editSFFullWidth(void)
{
    editSField(FullWidthFieldMask);

    return &_sfFullWidth;
}

const SFUInt32 *TileCameraDecoratorBase::getSFFullWidth(void) const
{
    return &_sfFullWidth;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *TileCameraDecoratorBase::getSFFullWidth      (void)
{
    return this->editSFFullWidth      ();
}
#endif

SFUInt32 *TileCameraDecoratorBase::editSFFullHeight(void)
{
    editSField(FullHeightFieldMask);

    return &_sfFullHeight;
}

const SFUInt32 *TileCameraDecoratorBase::getSFFullHeight(void) const
{
    return &_sfFullHeight;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *TileCameraDecoratorBase::getSFFullHeight     (void)
{
    return this->editSFFullHeight     ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TileCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        returnValue += _sfFullWidth.getBinSize();
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        returnValue += _sfFullHeight.getBinSize();
    }

    return returnValue;
}

void TileCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyToBin(pMem);
    }
}

void TileCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FullWidthFieldMask & whichField))
    {
        _sfFullWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FullHeightFieldMask & whichField))
    {
        _sfFullHeight.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TileCameraDecoratorPtr TileCameraDecoratorBase::createEmpty(void)
{
    TileCameraDecoratorPtr returnValue;

    newPtr<TileCameraDecorator>(returnValue);

    return returnValue;
}

FieldContainerPtr TileCameraDecoratorBase::shallowCopy(void) const
{
    TileCameraDecoratorPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TileCameraDecorator *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TileCameraDecoratorBase::TileCameraDecoratorBase(void) :
    Inherited(),
    _sfLeft                   (Real32(0)),
    _sfRight                  (Real32(1)),
    _sfBottom                 (Real32(0)),
    _sfTop                    (Real32(1)),
    _sfFullWidth              (UInt32(0)),
    _sfFullHeight             (UInt32(0))
{
}

TileCameraDecoratorBase::TileCameraDecoratorBase(const TileCameraDecoratorBase &source) :
    Inherited(source),
    _sfLeft                   (source._sfLeft                   ),
    _sfRight                  (source._sfRight                  ),
    _sfBottom                 (source._sfBottom                 ),
    _sfTop                    (source._sfTop                    ),
    _sfFullWidth              (source._sfFullWidth              ),
    _sfFullHeight             (source._sfFullHeight             )
{
}

/*-------------------------- destructors ----------------------------------*/

TileCameraDecoratorBase::~TileCameraDecoratorBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void TileCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TileCameraDecoratorBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TileCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TileCameraDecoratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TileCameraDecoratorBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TileCameraDecoratorBase::createAspectCopy(void) const
{
    TileCameraDecoratorPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TileCameraDecorator *>(this));

    return returnValue;
}
#endif

void TileCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TileCameraDecoratorPtr>::_type("TileCameraDecoratorPtr", "CameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TileCameraDecoratorPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TileCameraDecoratorPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TileCameraDecoratorPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
