/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGRENDERPARTITIONBASE_H_
#define _OSGRENDERPARTITIONBASE_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include "OSGSystemDef.h"

OSG_BEGIN_NAMESPACE

//---------------------------------------------------------------------------
//  Forward References
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//   Types
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
//  Class
//---------------------------------------------------------------------------

/*! \brief RenderPartition is the core class for keeping track of the actions 
            necessary to draw a scene. 
 */

class OSG_SYSTEM_DLLMAPPING RenderPartitionBase
{
  public:

    //-----------------------------------------------------------------------
    //   constants                                                             
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    enum CopyOnPush
    {
        CopyNothing       = 0x0000,

        CopyStateOverride = 0x0001,

        CopyViewing       = 0x0002,
        CopyProjection    = 0x0004,
        CopyVisibility    = 0x0008,

        CopyViewport      = 0x0010,
        CopyWindow        = 0x0020,

        CopyViewportSize  = 0x0040,
        CopyFrustum       = 0x0080,

        CopyNearFar       = 0x0100,

        CopyVPCamera      = 0x0200,

        CopyAll           = 0xFFFF
    };

    enum Mode
    {
        StateSorting     = 0x0001,
        TransformSorting = 0x0002,
        SimpleCallback   = 0x0003,
        OcclusionCulling = 0x0004
    };

    enum SetupMode
    {
        EmptySetup      = 0x0000,
        ProjectionSetup = 0x0001,
        ViewportSetup   = 0x0002,
        BackgroundSetup = 0x0004,
        FullSetup       = 0x0007
    };

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    /*------------------------- your_category -------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- your_operators ------------------------------*/

    /*------------------------- assignment ----------------------------------*/
    
    /*------------------------- comparison ----------------------------------*/

    /*------------------------- comparison ----------------------------------*/

  protected:

    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class variables                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance variables                                                  
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    RenderPartitionBase(void);

    virtual ~RenderPartitionBase(void); 

    /*-------------------------- comparison ---------------------------------*/

    /*-------------------------- comparison ---------------------------------*/

  private:

    //-----------------------------------------------------------------------
    //   enums                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   types                                                               
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   friend classes                                                      
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   friend functions                                                    
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   class variables                                                     
    //-----------------------------------------------------------------------
   
    //-----------------------------------------------------------------------
    //   class functions                                                     
    //-----------------------------------------------------------------------

    //-----------------------------------------------------------------------
    //   instance variables                                                  
    //-----------------------------------------------------------------------
    
    //-----------------------------------------------------------------------
    //   instance functions                                                  
    //-----------------------------------------------------------------------

    /*!\brief prohibit default function (move to 'public' if needed) */
    RenderPartitionBase(const RenderPartitionBase &source);
    void operator =(const RenderPartitionBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------

OSG_END_NAMESPACE

#include "OSGRenderPartitionBase.inl"

#endif /* _OSGRENDERPARTITIONBASE_H_ */

