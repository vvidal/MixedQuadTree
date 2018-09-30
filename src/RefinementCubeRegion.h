/*
 <Mix-mesher: region type. This program generates a mixed-elements mesh>
 
 Copyright (C) <2013,2017>  <Claudio Lobos>
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/gpl.txt>
 */

#ifndef RefinementCubeRegion_h
#define RefinementCubeRegion_h 1

#include <vector>
#include <iostream>
#include "RefinementRegion.h"

using Clobscode::Point3D;
using std::vector;
using std::cout;
using Clobscode::RefinementRegion;
using Clobscode::Quadrant;

namespace Clobscode
{
	class RefinementCubeRegion : public RefinementRegion
	{
	public:
				
		RefinementCubeRegion(Point3D &p1, Point3D &p2,
                             const unsigned short &level);
				
		virtual ~RefinementCubeRegion();
        
        virtual GeometricTransform rotateWithinYou(Polyline &input) override;
		
        virtual void rotate(GeometricTransform &gt) override;
		
        virtual bool intersectsQuadrant(const vector<MeshPoint> &points, Quadrant &oct) const override;

        
    protected:

        bool rotated;
        GeometricTransform gt;

	};
	
}

#endif
