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


#ifndef _OSGBACKGROUNDFIELDS_H_
#define _OSGBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Background;

OSG_GEN_CONTAINERPTR(Background);

/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<Background *> :
    public FieldTraitsFCPtrBase<Background *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Background *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFBackgroundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFBackgroundPtr"; }
};

template<> inline
const Char8 *FieldTraits<Background *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<Background *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBackgroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Background *,
                      RecordedRefCountPolicy  > SFRecBackgroundPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Background *,
                      UnrecordedRefCountPolicy> SFUnrecBackgroundPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Background *,
                      WeakRefCountPolicy      > SFWeakBackgroundPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Background *,
                      NoRefCountPolicy        > SFUncountedBackgroundPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Background *,
                      RecordedRefCountPolicy  > MFRecBackgroundPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Background *,
                      UnrecordedRefCountPolicy> MFUnrecBackgroundPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Background *,
                      WeakRefCountPolicy      > MFWeakBackgroundPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Background *,
                      NoRefCountPolicy        > MFUncountedBackgroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecBackgroundPtr : 
    public PointerSField<Background *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecBackgroundPtr : 
    public PointerSField<Background *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakBackgroundPtr :
    public PointerSField<Background *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedBackgroundPtr :
    public PointerSField<Background *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecBackgroundPtr :
    public PointerMField<Background *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecBackgroundPtr :
    public PointerMField<Background *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakBackgroundPtr :
    public PointerMField<Background *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedBackgroundPtr :
    public PointerMField<Background *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBACKGROUNDFIELDS_H_ */
