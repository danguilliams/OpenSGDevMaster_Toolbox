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
 **     class SHLChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHLCHUNKBASE_H_
#define _OSGSHLCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGShaderChunk.h" // Parent

#include "OSGBoolFields.h" // CgFrontEnd type
#include "OSGBoolFields.h" // PointSize type
#include "OSGGLenumFields.h" // ProgramParameterNames type
#include "OSGUInt32Fields.h" // ProgramParameterValues type
#include "OSGUInt32Fields.h" // GLId type
#include "OSGBoolFields.h" // UnknownParameterWarning type

#include "OSGSHLChunkFields.h"

OSG_BEGIN_NAMESPACE

class SHLChunk;

//! \brief SHLChunk Base Class.

class OSG_STATE_DLLMAPPING SHLChunkBase : public ShaderChunk
{
  public:

    typedef ShaderChunk Inherited;
    typedef ShaderChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SHLChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        CgFrontEndFieldId = Inherited::NextFieldId,
        PointSizeFieldId = CgFrontEndFieldId + 1,
        ProgramParameterNamesFieldId = PointSizeFieldId + 1,
        ProgramParameterValuesFieldId = ProgramParameterNamesFieldId + 1,
        GLIdFieldId = ProgramParameterValuesFieldId + 1,
        UnknownParameterWarningFieldId = GLIdFieldId + 1,
        NextFieldId = UnknownParameterWarningFieldId + 1
    };

    static const OSG::BitVector CgFrontEndFieldMask =
        (TypeTraits<BitVector>::One << CgFrontEndFieldId);
    static const OSG::BitVector PointSizeFieldMask =
        (TypeTraits<BitVector>::One << PointSizeFieldId);
    static const OSG::BitVector ProgramParameterNamesFieldMask =
        (TypeTraits<BitVector>::One << ProgramParameterNamesFieldId);
    static const OSG::BitVector ProgramParameterValuesFieldMask =
        (TypeTraits<BitVector>::One << ProgramParameterValuesFieldId);
    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector UnknownParameterWarningFieldMask =
        (TypeTraits<BitVector>::One << UnknownParameterWarningFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFCgFrontEndType;
    typedef SFBool            SFPointSizeType;
    typedef MFGLenum          MFProgramParameterNamesType;
    typedef MFUInt32          MFProgramParameterValuesType;
    typedef SFUInt32          SFGLIdType;
    typedef SFBool            SFUnknownParameterWarningType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFBool              *editSFCgFrontEnd     (void);
            const SFBool              *getSFCgFrontEnd      (void) const;

                  SFBool              *editSFPointSize      (void);
            const SFBool              *getSFPointSize       (void) const;

                  MFGLenum            *editMFProgramParameterNames(void);
            const MFGLenum            *getMFProgramParameterNames (void) const;

                  MFUInt32            *editMFProgramParameterValues(void);
            const MFUInt32            *getMFProgramParameterValues (void) const;

                  SFUInt32            *editSFGLId           (void);
            const SFUInt32            *getSFGLId            (void) const;

                  SFBool              *editSFUnknownParameterWarning(void);
            const SFBool              *getSFUnknownParameterWarning (void) const;


                  bool                &editCgFrontEnd     (void);
                  bool                 getCgFrontEnd      (void) const;

                  bool                &editPointSize      (void);
                  bool                 getPointSize       (void) const;

                  GLenum              &editProgramParameterNames(const UInt32 index);
            const GLenum              &getProgramParameterNames (const UInt32 index) const;

                  UInt32              &editProgramParameterValues(const UInt32 index);
                  UInt32               getProgramParameterValues (const UInt32 index) const;

                  UInt32              &editGLId           (void);
                  UInt32               getGLId            (void) const;

                  bool                &editUnknownParameterWarning(void);
                  bool                 getUnknownParameterWarning (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setCgFrontEnd     (const bool value);
            void setPointSize      (const bool value);
            void setGLId           (const UInt32 value);
            void setUnknownParameterWarning(const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SHLChunkTransitPtr  create          (void);
    static  SHLChunk           *createEmpty     (void);

    static  SHLChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SHLChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool            _sfCgFrontEnd;
    SFBool            _sfPointSize;
    MFGLenum          _mfProgramParameterNames;
    MFUInt32          _mfProgramParameterValues;
    SFUInt32          _sfGLId;
    SFBool            _sfUnknownParameterWarning;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SHLChunkBase(void);
    SHLChunkBase(const SHLChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SHLChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleCgFrontEnd      (void) const;
    EditFieldHandlePtr editHandleCgFrontEnd     (void);
    GetFieldHandlePtr  getHandlePointSize       (void) const;
    EditFieldHandlePtr editHandlePointSize      (void);
    GetFieldHandlePtr  getHandleProgramParameterNames (void) const;
    EditFieldHandlePtr editHandleProgramParameterNames(void);
    GetFieldHandlePtr  getHandleProgramParameterValues (void) const;
    EditFieldHandlePtr editHandleProgramParameterValues(void);
    GetFieldHandlePtr  getHandleGLId            (void) const;
    EditFieldHandlePtr editHandleGLId           (void);
    GetFieldHandlePtr  getHandleUnknownParameterWarning (void) const;
    EditFieldHandlePtr editHandleUnknownParameterWarning(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      SHLChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SHLChunkBase &source);
};

typedef SHLChunkBase *SHLChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHLCHUNKBASE_H_ */
