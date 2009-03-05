/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGMATERIALMAPFIELDS_H_
#define _OSGMATERIALMAPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGSField.h"
#include "OSGFieldTraits.h"
#include "OSGContainerForwards.h"
#include "OSGRenderPropertiesPool.h"

#include "map"

OSG_BEGIN_NAMESPACE

class PrimeMaterial;

typedef RenderPropertiesPool::Singleton::ValueType MaterialMapKey;
//typedef UInt32 MaterialMapKey;
//typedef RenderPropBitVector MaterialMapKey;

typedef std::map<MaterialMapKey, PrimeMaterial *>  MaterialMap;

typedef SField<MaterialMapKey> SFMaterialMapKey;
typedef MField<MaterialMapKey> MFMaterialMapKey;

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGBaseFieldTraits.h
    \ingroup GrpBaseField
    \ingroup GrpBaseFieldTraits
*/
#endif

/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<MaterialMap> : 
    public FieldTraitsTemplateBase<MaterialMap>
{
  private:

    static  DataType                                 _type;

  public:

    typedef FieldTraits<MaterialMap>  Self;

    typedef RenderPropertiesPool      KeyPool;

    enum             { Convertible = Self::NotConvertible                  };

    static OSG_BASE_DLLMAPPING
                 DataType &getType      (void);

    static const Char8    *getSName     (void) 
    {
        return "SFMaterialPtrMap"; 
    }

    static const Char8    *getMName     (void)
    {
        return "MFMaterialPtrMap"; 
    }
    
    static UInt32 getBinSize(const MaterialMap &aMap);

    static UInt32 getBinSize(const MaterialMap *aMaps,
                                   UInt32       numObjects)
    {
        UInt32 size = 0;

        // defaut: individual field sizes
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            size += getBinSize(aMaps[i]);
        }

        return size;
    }
    
    static void copyToBin(      BinaryDataHandler &pMem,
                          const MaterialMap       &aMap );
    
    static void copyToBin(      BinaryDataHandler &pMem,
                          const MaterialMap       *aMaps,
                                UInt32             numObjects)
    {
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            copyToBin(pMem, aMaps[i]);
        }
    }
    
    static void copyFromBin(BinaryDataHandler &pMem,
                            MaterialMap       &aMap );

    static void copyFromBin(BinaryDataHandler &pMem,
                            MaterialMap       *aMaps,
                            UInt32             numObjects)
    {
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            copyFromBin(pMem, aMaps[i]);
        }
    }
};

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS) 
/*! \ingroup GrpBaseFieldSingle */

typedef SField<MaterialMap> SFMaterialPtrMap;
#endif

template<>
class OSG_BASE_DLLMAPPING GetSFieldHandle<SFMaterialPtrMap> : 
    public GetMapFieldHandle
{
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef GetMapFieldHandle Inherited;
    typedef GetFieldHandle    Base;

    /*==========================  PUBLIC  =================================*/

  public:

    typedef boost::shared_ptr<GetSFieldHandle> Ptr;
    typedef FieldTraits<MaterialMap>           MapFieldTraits;
    typedef MapFieldTraits::KeyPool            KeyPool;
    typedef KeyPool::Singleton::ValueType      KeyType;

    /*---------------------------------------------------------------------*/

    GetSFieldHandle(const GetSFieldHandle       &source);
    GetSFieldHandle(const SFMaterialPtrMap      *pField, 
                    const FieldDescriptionBase  *pDescription);

    /*---------------------------------------------------------------------*/

    virtual const FieldType &getType       (void) const;
    virtual       bool       isPointerField(void) const;

    /*---------------------------------------------------------------------*/

    virtual void traverse(TraverseCallback oCallBack);

    /*---------------------------------------------------------------------*/

    virtual bool empty  (void                );
    virtual void flatten(MapList       &vList);
    virtual void flatten(ContainerList &vList);

    /*---------------------------------------------------------------------*/

    virtual void pushValueToStream(OutStream &str) const;
    virtual void pushSizeToStream (OutStream &str) const;

    /*---------------------------------------------------------------------*/

    virtual bool equal(Base::Ptr rhs) const;

    /*---------------------------------------------------------------------*/

    SFMaterialPtrMap const * operator ->(void);
    SFMaterialPtrMap const & operator * (void);
};

template<>
class OSG_BASE_DLLMAPPING 
    EditSFieldHandle<SFMaterialPtrMap> : public EditMapFieldHandle
{
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef EditMapFieldHandle Inherited;
    typedef EditFieldHandle    Base;

    typedef boost::function<void(PrimeMaterial  * const,
                                 MaterialMapKey        )> AddMethod;

    /*==========================  PUBLIC  =================================*/

    FieldContainer *_pContainer;
    AddMethod       _fAddMethod;

  public:

    typedef boost::shared_ptr<EditSFieldHandle> Ptr;
    typedef FieldTraits<MaterialMap>            MapFieldTraits;
    typedef MapFieldTraits::KeyPool             KeyPool;
    typedef KeyPool::Singleton::ValueType       KeyType;

    /*---------------------------------------------------------------------*/

    EditSFieldHandle(const EditSFieldHandle     &source      );
    EditSFieldHandle(      SFMaterialPtrMap     *pField, 
                     const FieldDescriptionBase *pDescription);

    /*---------------------------------------------------------------------*/

    virtual const FieldType &getType       (void) const;
    virtual       bool       isPointerField(void) const;

    /*---------------------------------------------------------------------*/

    virtual void add(      FieldContainer *rhs,
                     const std::string    &szBindings);

    /*---------------------------------------------------------------------*/

    virtual void traverse(TraverseCallback oCallBack);

    /*---------------------------------------------------------------------*/

    virtual bool empty  (void                );
    virtual void flatten(MapList       &vList);
    virtual void flatten(ContainerList &vList);

    /*---------------------------------------------------------------------*/

    virtual bool loadFromBin(      BinaryDataHandler        *pMem,
                                   UInt32                    uiNumElements,
                                   bool                      hasBindingInfo,
                                   std::vector<UInt16>      &vBindings,
                                   std::vector<UInt32>      &vIds          );

    virtual void fillFrom   (const std::vector<UInt16>      &vBindings,
                             const std::vector<UInt32>      &vIds,
                             const std::map<UInt32, UInt32> &vIdMap       );

    /*---------------------------------------------------------------------*/

    virtual void pushValueToStream(OutStream &str) const;
    virtual void pushSizeToStream (OutStream &str) const;

    /*---------------------------------------------------------------------*/

    void         setAddMethod(AddMethod      fMethod);

    virtual bool equal       (Base::Ptr rhs    ) const;

    /*---------------------------------------------------------------------*/

    virtual void pushValueFromCString(const Char8             *str   );

    virtual void copyValues          (      GetFieldHandlePtr  source) const;
    virtual void shareValues         (      GetFieldHandlePtr  source) const;

    /*---------------------------------------------------------------------*/

    virtual void cloneValues(
              GetFieldHandlePtr  pSrc,
        const TypePtrVector     &shareTypes     = TypePtrVector(),
        const TypePtrVector     &ignoreTypes    = TypePtrVector(),
        const TypeIdVector      &shareGroupIds  = TypeIdVector (),
        const TypeIdVector      &ignoreGroupIds = TypeIdVector ()) const;

};

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

OSG_END_NAMESPACE

#include "OSGMaterialMapFields.inl"

#endif /* _OSGMATERIALMAPFIELDS_H_ */
