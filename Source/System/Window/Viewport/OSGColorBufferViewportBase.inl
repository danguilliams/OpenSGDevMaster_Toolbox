/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ColorBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ColorBufferViewportBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ColorBufferViewportBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ColorBufferViewportBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ColorBufferViewport::_sfRed field.

inline
bool &ColorBufferViewportBase::editRed(void)
{
    editSField(RedFieldMask);

    return _sfRed.getValue();
}

//! Get the value of the ColorBufferViewport::_sfRed field.
inline
const bool &ColorBufferViewportBase::getRed(void) const
{
    return _sfRed.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorBufferViewportBase::getRed            (void)
{
    return this->editRed            ();
}
#endif

//! Set the value of the ColorBufferViewport::_sfRed field.
inline
void ColorBufferViewportBase::setRed(const bool &value)
{
    editSField(RedFieldMask);

    _sfRed.setValue(value);
}
//! Get the value of the ColorBufferViewport::_sfBlue field.

inline
bool &ColorBufferViewportBase::editBlue(void)
{
    editSField(BlueFieldMask);

    return _sfBlue.getValue();
}

//! Get the value of the ColorBufferViewport::_sfBlue field.
inline
const bool &ColorBufferViewportBase::getBlue(void) const
{
    return _sfBlue.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorBufferViewportBase::getBlue           (void)
{
    return this->editBlue           ();
}
#endif

//! Set the value of the ColorBufferViewport::_sfBlue field.
inline
void ColorBufferViewportBase::setBlue(const bool &value)
{
    editSField(BlueFieldMask);

    _sfBlue.setValue(value);
}
//! Get the value of the ColorBufferViewport::_sfGreen field.

inline
bool &ColorBufferViewportBase::editGreen(void)
{
    editSField(GreenFieldMask);

    return _sfGreen.getValue();
}

//! Get the value of the ColorBufferViewport::_sfGreen field.
inline
const bool &ColorBufferViewportBase::getGreen(void) const
{
    return _sfGreen.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorBufferViewportBase::getGreen          (void)
{
    return this->editGreen          ();
}
#endif

//! Set the value of the ColorBufferViewport::_sfGreen field.
inline
void ColorBufferViewportBase::setGreen(const bool &value)
{
    editSField(GreenFieldMask);

    _sfGreen.setValue(value);
}
//! Get the value of the ColorBufferViewport::_sfAlpha field.

inline
bool &ColorBufferViewportBase::editAlpha(void)
{
    editSField(AlphaFieldMask);

    return _sfAlpha.getValue();
}

//! Get the value of the ColorBufferViewport::_sfAlpha field.
inline
const bool &ColorBufferViewportBase::getAlpha(void) const
{
    return _sfAlpha.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &ColorBufferViewportBase::getAlpha          (void)
{
    return this->editAlpha          ();
}
#endif

//! Set the value of the ColorBufferViewport::_sfAlpha field.
inline
void ColorBufferViewportBase::setAlpha(const bool &value)
{
    editSField(AlphaFieldMask);

    _sfAlpha.setValue(value);
}

//! create a new instance of the class
inline
ColorBufferViewportPtr ColorBufferViewportBase::create(void)
{
    ColorBufferViewportPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ColorBufferViewport::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ColorBufferViewportBase::execSync(      ColorBufferViewportBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (RedFieldMask & whichField))
        _sfRed.syncWith(pOther->_sfRed);

    if(FieldBits::NoField != (BlueFieldMask & whichField))
        _sfBlue.syncWith(pOther->_sfBlue);

    if(FieldBits::NoField != (GreenFieldMask & whichField))
        _sfGreen.syncWith(pOther->_sfGreen);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pOther->_sfAlpha);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ColorBufferViewportBase::execSync (      ColorBufferViewportBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RedFieldMask & whichField))
        _sfRed.syncWith(pFrom->_sfRed);

    if(FieldBits::NoField != (BlueFieldMask & whichField))
        _sfBlue.syncWith(pFrom->_sfBlue);

    if(FieldBits::NoField != (GreenFieldMask & whichField))
        _sfGreen.syncWith(pFrom->_sfGreen);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pFrom->_sfAlpha);
}
#endif

#if 0
inline
void ColorBufferViewportBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ColorBufferViewportBase::getClassname(void)
{
    return "ColorBufferViewport";
}

typedef PointerBuilder<ColorBufferViewport>::ObjPtr          ColorBufferViewportPtr;
typedef PointerBuilder<ColorBufferViewport>::ObjPtrConst     ColorBufferViewportPtrConst;
typedef PointerBuilder<ColorBufferViewport>::ObjConstPtr     ColorBufferViewportConstPtr;

typedef PointerBuilder<ColorBufferViewport>::ObjPtrArg       ColorBufferViewportPtrArg;
typedef PointerBuilder<ColorBufferViewport>::ObjConstPtrArg  ColorBufferViewportConstPtrArg;
typedef PointerBuilder<ColorBufferViewport>::ObjPtrConstArg  ColorBufferViewportPtrConstArg;

OSG_END_NAMESPACE

