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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERPARAMETERPNT2FFIELDS_H_
#define _OSGSHADERPARAMETERPNT2FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterPnt2f;

OSG_GEN_CONTAINERPTR(ShaderParameterPnt2f);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ShaderParameterPnt2f *> :
    public FieldTraitsFCPtrBase<ShaderParameterPnt2f *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterPnt2f *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterPnt2fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterPnt2fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderParameterPnt2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt2f *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderParameterPnt2fPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterPnt2f *,
                      RecordedRefCountPolicy  > SFRecShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterPnt2f *,
                      UnrecordedRefCountPolicy> SFUnrecShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterPnt2f *,
                      WeakRefCountPolicy      > SFWeakShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterPnt2f *,
                      NoRefCountPolicy        > SFUncountedShaderParameterPnt2fPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterPnt2f *,
                      RecordedRefCountPolicy  > MFRecShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterPnt2f *,
                      UnrecordedRefCountPolicy> MFUnrecShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterPnt2f *,
                      WeakRefCountPolicy      > MFWeakShaderParameterPnt2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterPnt2f *,
                      NoRefCountPolicy        > MFUncountedShaderParameterPnt2fPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecShaderParameterPnt2fPtr : 
    public PointerSField<ShaderParameterPnt2f *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecShaderParameterPnt2fPtr : 
    public PointerSField<ShaderParameterPnt2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakShaderParameterPnt2fPtr :
    public PointerSField<ShaderParameterPnt2f *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedShaderParameterPnt2fPtr :
    public PointerSField<ShaderParameterPnt2f *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecShaderParameterPnt2fPtr :
    public PointerMField<ShaderParameterPnt2f *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecShaderParameterPnt2fPtr :
    public PointerMField<ShaderParameterPnt2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakShaderParameterPnt2fPtr :
    public PointerMField<ShaderParameterPnt2f *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedShaderParameterPnt2fPtr :
    public PointerMField<ShaderParameterPnt2f *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERPNT2FFIELDS_H_ */
