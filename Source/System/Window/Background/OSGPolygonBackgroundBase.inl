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
 **     class PolygonBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonBackgroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PolygonBackgroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PolygonBackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the PolygonBackground::_sfMaterial field.
inline
Material * PolygonBackgroundBase::getMaterial(void) const
{
    return _sfMaterial.getValue();
}

//! Set the value of the PolygonBackground::_sfMaterial field.
inline
void PolygonBackgroundBase::setMaterial(Material * const value)
{
    editSField(MaterialFieldMask);

    _sfMaterial.setValue(value);
}
//! Get the value of the PolygonBackground::_sfNormalizedX field.

inline
bool &PolygonBackgroundBase::editNormalizedX(void)
{
    editSField(NormalizedXFieldMask);

    return _sfNormalizedX.getValue();
}

//! Get the value of the PolygonBackground::_sfNormalizedX field.
inline
      bool  PolygonBackgroundBase::getNormalizedX(void) const
{
    return _sfNormalizedX.getValue();
}

//! Set the value of the PolygonBackground::_sfNormalizedX field.
inline
void PolygonBackgroundBase::setNormalizedX(const bool value)
{
    editSField(NormalizedXFieldMask);

    _sfNormalizedX.setValue(value);
}
//! Get the value of the PolygonBackground::_sfNormalizedY field.

inline
bool &PolygonBackgroundBase::editNormalizedY(void)
{
    editSField(NormalizedYFieldMask);

    return _sfNormalizedY.getValue();
}

//! Get the value of the PolygonBackground::_sfNormalizedY field.
inline
      bool  PolygonBackgroundBase::getNormalizedY(void) const
{
    return _sfNormalizedY.getValue();
}

//! Set the value of the PolygonBackground::_sfNormalizedY field.
inline
void PolygonBackgroundBase::setNormalizedY(const bool value)
{
    editSField(NormalizedYFieldMask);

    _sfNormalizedY.setValue(value);
}
//! Get the value of the PolygonBackground::_sfAspectHeight field.

inline
UInt16 &PolygonBackgroundBase::editAspectHeight(void)
{
    editSField(AspectHeightFieldMask);

    return _sfAspectHeight.getValue();
}

//! Get the value of the PolygonBackground::_sfAspectHeight field.
inline
      UInt16  PolygonBackgroundBase::getAspectHeight(void) const
{
    return _sfAspectHeight.getValue();
}

//! Set the value of the PolygonBackground::_sfAspectHeight field.
inline
void PolygonBackgroundBase::setAspectHeight(const UInt16 value)
{
    editSField(AspectHeightFieldMask);

    _sfAspectHeight.setValue(value);
}
//! Get the value of the PolygonBackground::_sfAspectWidth field.

inline
UInt16 &PolygonBackgroundBase::editAspectWidth(void)
{
    editSField(AspectWidthFieldMask);

    return _sfAspectWidth.getValue();
}

//! Get the value of the PolygonBackground::_sfAspectWidth field.
inline
      UInt16  PolygonBackgroundBase::getAspectWidth(void) const
{
    return _sfAspectWidth.getValue();
}

//! Set the value of the PolygonBackground::_sfAspectWidth field.
inline
void PolygonBackgroundBase::setAspectWidth(const UInt16 value)
{
    editSField(AspectWidthFieldMask);

    _sfAspectWidth.setValue(value);
}
//! Get the value of the PolygonBackground::_sfScale field.

inline
Real32 &PolygonBackgroundBase::editScale(void)
{
    editSField(ScaleFieldMask);

    return _sfScale.getValue();
}

//! Get the value of the PolygonBackground::_sfScale field.
inline
      Real32  PolygonBackgroundBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the PolygonBackground::_sfScale field.
inline
void PolygonBackgroundBase::setScale(const Real32 value)
{
    editSField(ScaleFieldMask);

    _sfScale.setValue(value);
}
//! Get the value of the PolygonBackground::_sfCleanup field.

inline
bool &PolygonBackgroundBase::editCleanup(void)
{
    editSField(CleanupFieldMask);

    return _sfCleanup.getValue();
}

//! Get the value of the PolygonBackground::_sfCleanup field.
inline
      bool  PolygonBackgroundBase::getCleanup(void) const
{
    return _sfCleanup.getValue();
}

//! Set the value of the PolygonBackground::_sfCleanup field.
inline
void PolygonBackgroundBase::setCleanup(const bool value)
{
    editSField(CleanupFieldMask);

    _sfCleanup.setValue(value);
}

//! Get the value of the \a index element the PolygonBackground::_mfTexCoords field.
inline
const Vec3f &PolygonBackgroundBase::getTexCoords(const UInt32 index) const
{
    return _mfTexCoords[index];
}

inline
Vec3f &PolygonBackgroundBase::editTexCoords(const UInt32 index)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return _mfTexCoords[index];
}


//! Get the value of the \a index element the PolygonBackground::_mfPositions field.
inline
const Pnt2f &PolygonBackgroundBase::getPositions(const UInt32 index) const
{
    return _mfPositions[index];
}

inline
Pnt2f &PolygonBackgroundBase::editPositions(const UInt32 index)
{
    editMField(PositionsFieldMask, _mfPositions);

    return _mfPositions[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void PolygonBackgroundBase::execSync (      PolygonBackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pFrom->_sfMaterial);

    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
        _mfTexCoords.syncWith(pFrom->_mfTexCoords,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (PositionsFieldMask & whichField))
        _mfPositions.syncWith(pFrom->_mfPositions,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (NormalizedXFieldMask & whichField))
        _sfNormalizedX.syncWith(pFrom->_sfNormalizedX);

    if(FieldBits::NoField != (NormalizedYFieldMask & whichField))
        _sfNormalizedY.syncWith(pFrom->_sfNormalizedY);

    if(FieldBits::NoField != (AspectHeightFieldMask & whichField))
        _sfAspectHeight.syncWith(pFrom->_sfAspectHeight);

    if(FieldBits::NoField != (AspectWidthFieldMask & whichField))
        _sfAspectWidth.syncWith(pFrom->_sfAspectWidth);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pFrom->_sfScale);

    if(FieldBits::NoField != (CleanupFieldMask & whichField))
        _sfCleanup.syncWith(pFrom->_sfCleanup);
}
#endif


inline
const Char8 *PolygonBackgroundBase::getClassname(void)
{
    return "PolygonBackground";
}
OSG_GEN_CONTAINERPTR(PolygonBackground);

OSG_END_NAMESPACE

