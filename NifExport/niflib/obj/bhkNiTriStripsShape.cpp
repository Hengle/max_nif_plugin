/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "bhkNiTriStripsShape.h"
#include "NiTriStripsData.h"
using namespace Niflib;

//Definition of TYPE constant
const Type bhkNiTriStripsShape::TYPE("bhkNiTriStripsShape", &BHK_NI_TRI_STRIPS_SHAPE_PARENT::TypeConst() );

bhkNiTriStripsShape::bhkNiTriStripsShape() BHK_NI_TRI_STRIPS_SHAPE_CONSTRUCT {}

bhkNiTriStripsShape::~bhkNiTriStripsShape() {}

void bhkNiTriStripsShape::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_NI_TRI_STRIPS_SHAPE_READ
}

void bhkNiTriStripsShape::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	BHK_NI_TRI_STRIPS_SHAPE_WRITE
}

string bhkNiTriStripsShape::asString( bool verbose ) const {
	BHK_NI_TRI_STRIPS_SHAPE_STRING
}

void bhkNiTriStripsShape::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	BHK_NI_TRI_STRIPS_SHAPE_FIXLINKS
}

list<NiObjectRef> bhkNiTriStripsShape::GetRefs() const {
	BHK_NI_TRI_STRIPS_SHAPE_GETREFS
}

const Type & bhkNiTriStripsShape::GetType() const {
	return TYPE;
};

void bhkNiTriStripsShape::SetNumStripsData(int n)
{
	numStripsData = n;
	stripsData.resize(n);
}

void bhkNiTriStripsShape::SetStripsData(int i, Ref<NiTriStripsData> &strips)
{
	stripsData[i] = strips;
}

void bhkNiTriStripsShape::SetUnknownFloats1(const array<float,2> &floats)
{
	unknownFloats1 = floats;
}

void bhkNiTriStripsShape::SetUnknownFloats2(const array<float,3> &floats)
{
	unknownFloats2 = floats;
}

void bhkNiTriStripsShape::SetUnknownInts1(const array<uint,5> &ints)
{
	unknownInts1 = ints;
}

void bhkNiTriStripsShape::SetUnknownInts3(const vector<uint> &ints)
{
	numUnknownInts3 = (uint)ints.size();
	unknownInts3 = ints;
}
